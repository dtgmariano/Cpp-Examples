#include <iostream>

using namespace std;

int main()
{
	
	int n, num1, num2, temp, soma;		//Declarando variáveis

	cout<<"entre o numero de elementos desejados para a sua sequencia de fibonacci"<<endl;
	cin>>n;								//Número de elementos

	num1 = 0;							//Inicializa o num1 com valor 0 pois F0 = 0
	num2 = 1;							//Inicializa o num1 com valor 1 pois F1 = 1
	soma = num1;						//Inicializa a soma com o valor de F0
	
	cout<<num1<<" ";					//Imprimi o primeiro elemento

	for(int i=0; i<(n-1); i++)
	{
		cout<<num2<<" ";				//Imprimi o proximo elemento
		soma = soma + num2;				//Adiciona o proximo num (num2)
		temp = num2 + num1;				//cria uma var temp que é proximo elemento da seq. fib.
		num1 = num2;					//n2 para n1
		num2 = temp;					//n3 para n2
	}

	cout<<"\nsoma = "<<soma<<endl;		//Imprimi soma
	system("pause");
	return 0;							//Fim programa!
}