/*
Nama            : Sarah Navianti
NPM             : 140810180021
Kelas 			: A
Nama Program    : Insertion Search 
*/

#include <iostream>
#include <conio.h>

using namespace std;

int data[100],data2[100],jumlah;

//Fungsi Insertion Discending
void Insert_sort()
{
	int temp,i,j;
	for(i=1;i<=jumlah;i++){
	    temp = data[i];
		j = i -1;
	    while(data[j]>temp && j>=0){
			data[j+1] = data[j];
	   	    j--;
	    }
	    data[j+1] = temp;
	}
}
int main()
{
	cout << "\=========Insertion Short=========="<<endl;
	cout <<"Masukkan Jumlah Data : "; 
	cin  >>jumlah;
	cout <<endl;
	cout << "\n=================================" << endl;
	
	for(int i=1;i<=jumlah;i++){
	  cout<<"Masukkan data ke-"<<i<<" : ";
	  cin>>data[i];
	  data2[i]=data[i];
	}
	cout << "\n=================================" << endl;
	Insert_sort();
	cout<<"\nData Setelah di Urutkan : "<<endl;
	
	for(int i=1; i<=jumlah; i++)
	{
	  cout<<data[i]<<" ";
	}
	cout << "\n=================================="<<endl;
	getch();
}
