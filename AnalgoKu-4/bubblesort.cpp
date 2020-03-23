/*
Nama 		: Sarah Navianti Dwi S 
NPM 		: 140810180021
Kelas 		: A
Deskripsi 	: Bubble Sort  
 */
#include <iostream>


using namespace std;


void bubbleSort (int arr[], int n){
	int i, j;
	for (i = 0; i < n; ++i){
		for (j = 0; j < n-i-1; ++j){
			if (arr[j] > arr[j+1]){
				arr[j] = arr[j]+arr[j+1];
				arr[j+1] = arr[j]-arr[j + 1];
				arr[j] = arr[j]-arr[j + 1];
			}
		}
	}	
}	
 
int main(){
	int n, i;
	cout << "============= Bubble Sort ==============="<<endl;
	cout <<"\nJumlah elemen yang akan diinputkan : ";
	cin  >>n;
	cout << "=======================================" << endl;
 
	int arr[n];
	for(i = 0; i < n; i++){
		cout<<"Masukkan elemen ke-"<<i+1<<": ";
		cin>>arr[i];
	}
 
	bubbleSort(arr, n);
 
	cout<<"\nHasil Bubble Sort yang telah diurutkan: ";
	for (i = 0; i < n; i++){
      		cout<<" "<<arr[i];
	}
}
