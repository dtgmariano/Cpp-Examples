#include <iostream>

using namespace std;

int main()
{
	int soma_fib;
	int tamanho_seq;
	int x1;
	int x2;
	int y;

	cin>>tamanho_seq;
	x1 = 0;
	x2 = 1;
	soma_fib = x1 + x2;

	int contador = 1;

	cout<<x1<<" ";

	while(contador < tamanho_seq)
	{
		cout<<x2<<" ";

		y = x1 + x2;
		x1 = x2;
		x2 = y;

		soma_fib = soma_fib + x2;

		contador++;
	}


	cout<<"\n a soma da minha sequencia e "<<soma_fib;

	system("pause");
	return 0;
}