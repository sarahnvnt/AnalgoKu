/*
Nama            : Sarah Navianti
NPM             : 140810180021
Kelas 			: A
Nama Program    : Sequential Search
*/

#include <iostream>
using namespace std;

main()
{
    int jumlah, cardat, A[100], index, jwb;
	bool ketemu = false;
	cout << "\==========SEQUENTIAL SEARCH==========";
	cout << "\nMasukan banyak data =  ";
    cin  >> jumlah;
	cout << "\n=====================================" << endl;	  
	
	for(int i=0; i<jumlah; i++)
	{
	   cout << "Data ke-" << i+1 << " : ";
	   cin >> A[i];
	}
	
	cout << "\nMasukan data yang dicari : "; 
	cin  >> cardat;
	cout << "\n=====================================" << endl;
	  
	  
	for(int i=0; i<jumlah; i++){
	    if(A[i] == cardat){
	 	    ketemu = true;
	        index = i;
	    	i = jumlah;
	   }
	}
	if(ketemu == true){
	   cout << "Data ditemukan pada data ke-" << index+1;
	}
	else{
	   cout << "Data tidak Ada!";
	}
	cout << "\n=====================================" << endl;
	cout << "\n";
	system("pause");
}
