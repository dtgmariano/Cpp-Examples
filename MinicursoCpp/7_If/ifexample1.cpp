//Programa básico em C++

#include <iostream>

using namespace std;

int main()
{
	int x, y;

	cout<<"Escolha um numero inteiro para X"<<endl;
	cin>>x;
	cout<<"Escolha um numero inteiro para Y"<<endl;
	cin>>y;

	cout<<"x = "<<x<<" y = "<<y<<endl;

	if(x>y)
	{
		cout<<"x e maior que y pois "<<x<<" > "<<y<<endl;
	}
	if(x<y)
	{
		cout<<"x e menor que y pois "<<x<<" < "<<y<<endl;
	}
	if(x==y)
	{
		cout<<"x e igual que y pois "<<x<<" == "<<y<<endl;
	}

	system("pause");

	return 0;
}