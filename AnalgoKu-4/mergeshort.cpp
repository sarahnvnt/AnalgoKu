/*
Nama 		: Sarah Navianti Dwi S 
NPM 		: 140810180021
Kelas 		: A
Deskripsi 	: Merge Short 
 */

#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

void mergeSort1 (int* x, int rend, int ting, int mid){
	int i, j, k, temp[ting-rend+1];
	i = rend;
	k = 0;
	j = mid + 1;
 
	while (i <= mid && j <= ting){
		if (x[i] < x[j]){
			temp[k] = x[i];
			k++;
			i++;
		}
		else {
			temp[k] = x[j];
			k++;
			j++;
		}
	}
 
	while (i <= mid){
		temp[k] = x[i];
		k++;
		i++;
	}
 
	while (j <= ting){
		temp[k] = x[j];
		k++;
		j++;
	}
 
    	for (i = rend; i <= ting; i++){
		x[i] = temp[i-rend];
	}
}

void mergeSort2(int *x, int rend, int ting){
	int mid;
	if (rend < ting){
		mid=(rend+ting)/2;
		mergeSort2(x, rend, mid);
		mergeSort2(x, mid+1, ting);

		mergeSort1(x, rend, ting, mid);
	}
}
 
int main(){
	int jml, i;
	
	high_resolution_clock::time_point t1 = high_resolution_clock::now();
	cout << "=============Merge Short==============="<<endl;
	cout <<"\nJumlah data yang ingin diurutkan : ";
	cin  >>jml;
	cout << "=======================================" << endl;

	int arr[jml];
	for(i = 0; i < jml; i++){
		cout<<"Masukkan elemen ke-"<<i+1<<": ";
		cin>>arr[i];
	}
	cout <<"=======================================" <<endl;
 
	mergeSort2(arr, 0, jml-1);

	cout<<"\nArray yang telah diurutkan: ";
	for (i = 0; i < jml; i++) cout<<" "<<arr[i];
	
	high_resolution_clock::time_point t2 = high_resolution_clock::now();
    	auto duration = duration_cast<seconds>( t2 - t1 ).count();
    	cout<<endl<<duration<<" seconds"<<endl;
}
