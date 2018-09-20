#include <iostream>
#include <forward_list> // single linked list, performs insert and remove at O(1)

using namespace std;

int main(int argc, char const *argv[]) {

  // representação de grafo simples por listas de adjacência.
  // ex.: grafo não orientado
  //
  // ! 1 ! -> 2 -> 5 /
  // ! 2 ! -> 1 -> 5 -> 3 -> 4 /
  // ! 3 ! -> 2 -> 4 /
  // ! 4 ! -> 2 -> 5 -> 3 /
  // ! 5 ! -> 4 -> 1 -> 2 /
  //
  int vertex[6];
  int grau[6];

  forward_list<int> adj[6];

  // ver depois como não perder a primeira posição do arranjo
  // alguma matemática provavelmente vai ser necessária...
  for (int i = 1; i < 6; i++)
	{
      vertex[i] = i;
	}

  adj[1].push_front(2);
  adj[1].push_front(5);
	
  adj[2].push_front(1);
  adj[2].push_front(5);
  adj[2].push_front(3);
  adj[2].push_front(4);

  adj[3].push_front(2);
  adj[3].push_front(4);

  adj[4].push_front(2);
  adj[4].push_front(5);
  adj[4].push_front(3);

  adj[5].push_front(4);
  adj[5].push_front(1);
  adj[5].push_front(2);


  for (int i = 1; i < 6; i++)
	{
      grau[i] = 0;
	}

  for (int i = 1; i < 6; i++)
	{
      for (int& j : adj[i] ){
        cout << "O vértice " << j << " é adjacente ao vértice " << i << endl;
        grau[i]++;
      }
	}

  for (int i = 1; i < 6; i++)
	{
      cout << "Vértice " << i << " tem grau " << grau[i] << endl;
	}

  return 0;
}
