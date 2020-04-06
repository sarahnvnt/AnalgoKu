/* 
Nama 		: Sarah Navianti
NPM 		: 140810180021
Kelas		: A
Deskripsi 	: Adjacency Matrix 
*/

#include <iostream>
#include <cstdlib>

using namespace std;
#define MAX 20

 //Class untuk Adjacency Matrix
 
class AdjacencyMatrix
{
    private:
        int n;
        int **adj;
        bool *visited;
        
    public:
        AdjacencyMatrix(int n)
        {
            this->n = n;
            visited = new bool [n];
            adj = new int* [n];
            for (int i = 0; i < n; i++)
            {
                adj[i] = new int [n];
                for(int j = 0; j < n; j++)
                {
                    adj[i][j] = 0;
                }
            }
        }
        
         //Menambahkan edge ke graf 
   
        void AddEdge(int origin, int destin)
        {
            if( origin > n || destin > n || origin < 0 || destin < 0)
            {   
                cout<<"Edge Tidak Valid!\n";
            }
            else
            {
                adj[origin - 1][destin - 1] = 1;
            }
        }
        // Mencetak graf 
        
        void display()
        {
            int a,b;
            for(a = 0;a < n;a++)
            {
                for(b = 0; b < n; b++)
                    cout<<adj[a][b]<<"  ";
                cout<<endl;
            }
        }
};

int main(){
	
    int nodes, max_edges, origin, destin;
    
    cout <<"====Adjacency Matriks====";
    cout <<"\t\n Masukan Jumlah Node : ";
    cin  >>nodes;
    AdjacencyMatrix am(nodes);
    max_edges = nodes * (nodes - 1);
    for (int i = 0; i < max_edges; i++)
    {
        cout<<"Masukan edge(Contoh : 4 5 ) (-1 -1 to exit): ";
        cin>>origin>>destin;
        if((origin == -1) && (destin == -1))
            break;
        am.AddEdge(origin, destin);
    }
    am.display();
    return 0;
}
