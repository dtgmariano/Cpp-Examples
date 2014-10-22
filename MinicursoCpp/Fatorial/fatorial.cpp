#include <iostream>

using namespace std;

int main()
{
	int n, fat;		//Declarando variáveis

	cout<<"entre com o numero inteiro para calcular o seu fatorial"<<endl;
	cin>>n;			//Número de elementos								

	fat = n;		//Inicializa fat com n
	
	while(n>1)
	{
		n--;		//Decrementa 1 de n
		fat = fat*n; //Multiplica (n) * (n-1)
	}

	cout<<"O fatorial e igual a "<<fat<<endl;		//Imprimi fatorial
	system("pause");

	return 0;						//Fim programa!
}