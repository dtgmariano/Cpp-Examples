#include <iostream>
#include <string>

using namespace std;

int main()
{
	char grade;
	int nota;

	cin>>nota;

	if(nota==10)
		grade = 'a';
	else if(nota>8)
		grade = 'b';
	else if(nota>6)
		grade = 'c';
	else if(nota>4)
		grade = 'd';
	else if(nota>2)
		grade = 'e';
	else
		grade = 'f';

	cout<<grade<<endl;

	system("pause");
}