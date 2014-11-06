#include <iostream>
#include <array>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
	std::array<int,3> v;
	
	while(cin>>v[0]>>v[1]>>v[2])
	{
		std::sort(v.begin(), v.end());

		bool flagTP = false;

		if(v[2]*v[2] == v[0]*v[0] + v[1]*v[1])
		{
			for(int i=2; i< v[2]; i++)
			{
				if(v[0]%i==0.0 && v[1]%i==0.0 && v[2]%i==0.0)
				{
					flagTP = true;
					break;
				}
			}

			if(flagTP)
				cout<<"tripla pitagorica"<<endl;
			else
				cout<<"tripla pitagorica primitiva"<<endl;
		}
		else
			cout<<"tripla"<<endl;
	}
	system("pause");
	return 0;
}