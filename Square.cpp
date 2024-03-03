#include <iostream>
using namespace std;

int main()
{
	//Simple Square Pattern in CPP
	int rows, clmns, n;
	
	cout<<"Enter no. of rows:\n";
	cin>>n;
	cout<<"\n";
	
	for (rows=1; rows<=n; rows++)
	{
		
		for (clmns=1; clmns<=n; clmns++)
		{
			cout<<"* ";
		}
		
		cout<<"\n";
	}
}