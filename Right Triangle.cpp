#include <iostream>
using namespace std;

int main()
{
	//Simple Right Triangle Pattern in CPP
	int rows, clmns, n;
	
	cout<<"Enter no. of rows:\n";
	cin>>n;
	cout<<"\n";
	
	for (rows=1; rows<=n; rows++)
	{
		
		for (clmns=1; clmns<=rows; clmns++)
		{
			cout<<"* ";
		}
		
		cout<<"\n";
	}
	
	return 0;
}