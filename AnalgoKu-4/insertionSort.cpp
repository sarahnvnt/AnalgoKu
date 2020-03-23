/*
Nama 		: Sarah Navianti Dwi S 
NPM 		: 140810180021
Kelas 		: A
Deskripsi 	: Insertion Sort 
 */
 
#include <iostream>
#include <conio.h>

using namespace std;

int dat[500],dat2[500],n;

void insertionSort(){
	
	int temp,i,j;
	for(i=1;i<=n;i++){
	    temp = dat[i];
		j = i -1;
	    while(dat[j]>temp && j>=0){
			dat[j+1] = dat[j];
	   	    j--;
	    }
	    dat[j+1] = temp;
	}
}
int main(){

 	cout << "=============Insertion Sort==============="<<endl;
	cout <<"\nJumlah elemen yang ingin diurutkan : ";
	cin  >>n;
	cout << "=======================================" << endl;
	for(int i=1;i<=n;i++)
	{
		cout<<"Masukkan data ke-"<<i<<" : ";
	  	cin>>dat[i];
	  	dat2[i]=dat[i];
	}
	cout << "\n=====================================" << endl;
	insertionSort();
	cout<<"\nData Setelah di Sort : "<<endl;
	for(int i=1; i<=n; i++)
	{
	
		cout<<dat[i]<<" ";
	}
	cout << "\n=================================="<<endl;
	getch();
}


