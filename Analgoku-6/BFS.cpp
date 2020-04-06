/* 
Nama 		: Sarah Navianti
NPM  		: 140810180021
Kelas		: A
Deskripsi 	: BFS 
*/
 
#include<iostream> 
#include <list> 

using namespace std; 

// adjacency list representation 
class Graph 
{ 
	int A; // No vertex 

	// Pointer Array yang mengandung adjacency
	// lists 
	list<int> *adj; 
public: 
	Graph(int A); // Constructor 

	// menambahkan edge ke graph  
	void addEdge(int a, int b); 

	// print BFS traversal 
	void BFS(int s); 
}; 

Graph::Graph(int A) 
{ 
	this->A = A; 
	adj = new list<int>[A]; 
} 

void Graph::addEdge(int a, int b) 
{ 
	adj[a].push_back(b); // menambahkan b ke a’s pada list. 
} 

void Graph::BFS(int s) 
{ 
	// Mark all the vertices as not visited 
	bool *visited = new bool[A]; 
	for(int i = 0; i < A; i++) 
		visited[i] = false; 

	// Create a queue for BFS 
	list<int> queue; 

	// Mark the current node as visited and enqueue it 
	visited[s] = true; 
	queue.push_back(s); 

	// 'i' will be used to get all adjacent 
	// vertices of a vertex 
	list<int>::iterator i; 

	while(!queue.empty()) 
	{ 
		// Dequeue a vertex from queue and print it 
		s = queue.front(); 
		cout << s << " "; 
		queue.pop_front(); 

		// Get all adjacent vertices of the dequeued 
		// vertex s. If a adjacent has not been visited, 
		// then mark it visited and enqueue it 
		for (i = adj[s].begin(); i != adj[s].end(); ++i) 
		{ 
			if (!visited[*i]) 
			{ 
				visited[*i] = true; 
				queue.push_back(*i); 
			} 
		} 
	} 
} 
 
int main() 
{ 
	// Membuat graf di diagram 
	Graph g(8); 
    g.addEdge(1, 2);
    g.addEdge(1, 3);
	g.addEdge(2, 4);
 	g.addEdge(2, 5);
 	g.addEdge(2, 3);
 	g.addEdge(3, 7);
 	g.addEdge(3, 8);
 	g.addEdge(4, 5);
 	g.addEdge(5, 3);
 	g.addEdge(5, 6);
 	g.addEdge(7, 8);

	cout << "====Breadth First Traversal===== "
		<< "\n(Dimulai dari Vertex 1) \n"; 
	g.BFS(1); 

	return 0; 
}
