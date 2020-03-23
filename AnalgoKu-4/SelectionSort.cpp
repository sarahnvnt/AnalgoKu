/*
Nama 		: Sarah Navianti Dwi S 
NPM 		: 140810180021
Kelas 		: A
Deskripsi 	: Selection Sort 
 */
#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

void selectionSort (int arr[], int n){
	int i, j;
	for (i = 0; i < n; ++i){
		for (j = i+1; j < n; ++j){
			if (arr[i] > arr[j]){
				arr[i] = arr[i]+arr[j];
				arr[j] = arr[i]-arr[j];
				arr[i] = arr[i]-arr[j];
			}	
		}
	}	
}	
 
int main(){
	int jml, i;
    //	high_resolution_clock::time_point t1 = high_resolution_clock::now();
    	cout << "=============Selection Sort==============="<<endl;
		cout <<"\nJumlah elemen yang ingin diurutkan : ";
		cin  >>jml;
		cout << "=======================================" << endl;
 
	int arr[jml];
	for(i = 0; i < jml; i++){
		cout<<"Masukkan elemen ke-"<<i+1<<": ";
		cin>>arr[i];
	}
 
	selectionSort(arr, jml);

	cout<<"\nArray yang telah diurutkan: ";
	for (i = 0; i < jml; i++) cout<<" "<<arr[i];
	
//	high_resolution_clock::time_point t2 = high_resolution_clock::now();
   // 	auto duration = duration_cast<seconds>( t2 - t1 ).count();
    //	cout<<endl<<duration<<" seconds" <<endl;
}
