/*
Nama            : Sarah Navianti
NPM             : 140810180021
Kelas 			: A
Nama Program    : Nilai Maksimum
*/

#include <iostream>
using namespace std;

main(){
	//deklarasi 
	int n, maks, i, x[99];
	
	cout<<"=========================================="<<endl;
	cout<<"======Menghitung Nilai Data Terbesar======"<<endl;
	cout<<"=========================================="<<endl;	
	
	for(;;){
		cout<<"1. Masukkan jumlah data: ";
		cin>>n;
		if(n<2){
			cout<<"Maaf, data minimal 2."<<endl;
			continue;
		}
		break;
	}
	
	cout<<"2. Masukkan data:"<<endl;
	for (i=0; i<n; i++){
		cout<<"Data ke-"<<i+1<<": ";
		cin>>x[i];
	}
	
	//Algoritma
	i=1;
	maks=x[0];
	do {
		if(x[i]>maks){
			maks=x[i];
		}
		i=i+1;
	}
	while(i<n); 
	
	cout<<"Nilai terbesar adalah: "<<maks<<endl;
}
