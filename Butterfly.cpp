#include <iostream>
using namespace std;

int main()
{
	// Butterfly pattern
	int n, rows, clmns;
	
	cout<<"Enter no. of rows:\n";
	cin>>n;
	cout<<"\n";
	
	for (rows=1; rows<=n; rows++)
	{
		for (clmns=1; clmns<=rows; clmns++)
		{
			cout<<"* ";
		}
		for (clmns=n; clmns>rows; clmns--)
		{
			cout<<"  ";
		}
		for (clmns=n; clmns>rows; clmns--)
		{
			cout<<"  ";
		}
		for (clmns=1; clmns<=rows; clmns++)
		{
			cout<<"* ";
		}
		
		cout<<"\n";
	}
	for (rows=1; rows<=n; rows++)
	{
		for (clmns=n; clmns>rows; clmns--)
		{
			cout<<"* ";
		}
		for (clmns=1; clmns<=rows; clmns++)
		{
			cout<<"  ";
		}
		for (clmns=1; clmns<=rows; clmns++)
		{
			cout<<"  ";
		}
		
		for (clmns=n; clmns>rows; clmns--)
		{
			cout<<"* ";
		}
		
		cout<<"\n";
	}
	
	return 0;
}