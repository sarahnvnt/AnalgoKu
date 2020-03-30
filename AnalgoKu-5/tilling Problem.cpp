/*
	Nama    : Sarah Navianti
	NPM     : 140810180021
	Kelas   : A
	Program : Tilling Problem
*/

#include <bits/stdc++.h>  
using namespace std; 
  
// function to count the total number of ways 
int countWays(int n,int a)
{ 
  
    // table to store values 
    // of subproblems 
    int count[n-1]; 
    count[0] = 0; 
  
    // Fill the table upto value n 
    for (int i = 1; i <= n ;i++){ 
        // recurrence relation 
        if (i > a)
            count[i] = count[i - 1] + count[i - a];
  
        // base cases 
        else if (i < a )
            count[i] = 1; 
  
        // i = = a
        else
            count[i] = 2; 
    } 
  
    // required number of ways 
    return count[n];

}
// Driver program to test above 
int main() 
{ 
 int n = 12, a = 4;
 
    cout << "Jumlah cara yang bisa dilakukan = "
         << countWays(n,a); 
    return 0; 
}
