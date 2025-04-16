#include <iostream>
using namespace std;

int main()
{
	int aresta;
	int area;
	
	cout << "Informe o valor da aresta: ";
	cin >> aresta;
	
	area = aresta * aresta;
	
	cout << "A area de um quadrado que tem aresta de " << aresta << " eh " << area << endl;
	
	return 0;
}