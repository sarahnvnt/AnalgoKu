/* 
Nama 		: Sarah Navianti
NPM  		: 140810180021
Kelas		: A
Deskripsi 	: DFS 
*/

#include<iostream> 
#include<list> 
using namespace std; 

// Graph class merepresentasikan graf berarah menggunakan representasi adjacency list
class Graph 
{ 
	int A; // No. simpul 

	// Pointer ke array yang memiliki adjacency lists 
	list<int> *adj; 

	// Fungsi rekursif yang digunakan DFS 
	void DFSUtil(int a, bool visited[]); 
public: 
	Graph(int A); // Constructor 

	// fungsi untuk menambah tepian ke graf 
	void addEdge(int a, int b); 

	// DFS traversal dari simpul yang terjangkau dari a 
	void DFS(int a); 
}; 

Graph::Graph(int A) 
{ 
	this->A = A; 
	adj = new list<int>[A]; 
} 

void Graph::addEdge(int a, int b) 
{ 
	adj[a].push_back(b); // Menambah b ke list a. 
} 

void Graph::DFSUtil(int a, bool visited[]) 
{ 
	// Menandakan node bersangkutan sudah dikunjungi lalu cetak 
	visited[a] = true; 
	cout << a << " "; 

	// Ulang simpul berdekatan ke node ini 
	list<int>::iterator i; 
	for (i = adj[a].begin(); i != adj[a].end(); ++i) 
		if (!visited[*i]) 
			DFSUtil(*i, visited); 
} 

// DFS traversal dari simpul terjangkau dari v. 
// Menggunakan rekursif DFSUtil() 
void Graph::DFS(int a) 
{ 
	// Menandakan semua simpul belum dikunjungi 
	bool *visited = new bool[A]; 
	for (int i = 0; i < A; i++) 
		visited[i] = false; 

	// Memanggil fungsi rekursif pembantu untuk mencetak DFS traversal 
	DFSUtil(a, visited); 
} 

int main() 
{ 
	// Membuat graf di diagram 
	Graph g(8); 
	g.addEdge(1, 2); 
	g.addEdge(1, 3); 
	g.addEdge(2, 5); 
	g.addEdge(2, 4); 
	g.addEdge(5, 6); 
	g.addEdge(3, 7);
	g.addEdge(3, 8);
	g.addEdge(7, 8); 

	cout << "=====Depth First Traversal===="
			"\n(dimulai dari node 1) \n"; 
	g.DFS(1); 

	return 0; 
} 

