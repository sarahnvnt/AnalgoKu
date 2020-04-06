/* 
Nama 		: Sarah Navianti
NPM  		: 140810180021
Kelas		: A
Deskripsi	: Adjacency List
*/

#include <iostream>
#include <cstdlib>
using namespace std;
 

//Adjacency List Node  
struct AdjListNode
{
    int destin;
    struct AdjListNode* next;
};
 
//Adjacency List 
struct AdjList
{
    struct AdjListNode *head;
};
  
class Graph
{
    private:
        int V;
        struct AdjList* array;
    public:
        Graph(int V)
        {
            this->V = V;
            array = new AdjList [V];
            for (int i = 0; i < V; ++i)
                array[i].head = NULL;
        }
        
        // Membuat Baru Adjacency List Node  
        AdjListNode* newAdjListNode(int destin)
        {
            AdjListNode* newNode = new AdjListNode;
            newNode->destin = destin;
            newNode->next   = NULL;
            return newNode;
        }
        
        //Menambahkan Edge ke Graph 
        void AddEdge(int src, int destin)
        {
            AdjListNode* newNode = newAdjListNode(destin);
            newNode->next = array[src].head;
            array[src].head = newNode;
            newNode = newAdjListNode(src);
            newNode->next = array[destin].head;
            array[destin].head = newNode;
        }
        
        //Mencetak graph
        void printGraph()
        {
            int v;
            for (v = 1; v <= V; ++v)
            {
                AdjListNode* pCrawl = array[v].head;
                cout<<"\n Adjacency list of vertex "<<v<<"\n head ";
                while (pCrawl)
                {
                    cout<<"-> "<<pCrawl->destin;
                    pCrawl = pCrawl->next;
                }
                cout<<endl;
            }
        }
};
 
int main(){
    int pilih,a,b,n;
    cout << "Masukan Banyak node : "; cin >> n;
    Graph gh(n);
    for(; ;){
        cout << "\nMenu Adjacency List\n";
        cout << "1. Tambah edge\n";
        cout << "2. Print Edge\n";
        cout << "3. Keluar\n\n";
        cout << "Pilihan : "; cin >> pilih;
        
        switch (pilih){
            case 1:
                cout << "\n edge(a,b)\n";
            	cout << "Masukan nilai a : "; cin >> a;
                cout << "Masukan nilai b : "; cin >> b;
                gh.AddEdge(a,b);
                continue;
            case 2:
                gh.printGraph();
                continue;
            case 3:
                return 0;
                break;
            default:
                continue;
        }
    }

    return 0;
}
