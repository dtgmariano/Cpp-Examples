//Programa básico em C++

#include <iostream>

using namespace std;

int main()
{
	int x, y;

	cout<<"Escolha um numero inteiro para X"<<endl;
	cin>>x;
	
	for(int i=0; i<x; i++)
	{
		cout<<"*"<<endl;
	}

	system("pause");
	return 0;
}