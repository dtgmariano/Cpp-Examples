#include <iostream>

using namespace std;

int main()
{
	int fat = 1;
	int x;
	int number = 1;

	cout<<"Entre com um numero inteiro de 1 a 20"<<endl;
	cin>>x;

	while(number <= x)
	{
		fat = fat * number;
		cout<<"o fatorial de "<<number<<" e igual a "<<fat<<endl;
		number++;
		
	}

	cout<<"o fatorial de "<<x<<"e igual a "<<fat<<endl;

	system("pause");
	return 0;
}