#include <iostream>
using namespace std;

int main()
{
	//Simple Sandglass Pattern in CPP
	int rows, clmns, n;
	
	cout<<"Enter no. of rows:\n";
	cin>>n;
	cout<<"\n";
	
	for (rows=1; rows<=n; rows++) //for upper reverse pyramid
	{
		
		for (clmns=1; clmns<=rows; clmns++)
		{
			cout<<"  ";
		}
		for (clmns=n; clmns>rows; clmns--)
		{
			cout<<"* ";
		}
		for (clmns=n; clmns>=rows; clmns--)
		{
			cout<<"* ";
		}
		
		cout<<"\n";
	}
	for (rows=1; rows<=n; rows++) //for lower pyramid
	{
		
		for (clmns=n; clmns>=rows; clmns--)
		{
			cout<<"  ";
		}
		for (clmns=1; clmns<=rows; clmns++)
		{
			cout<<"* ";
		}
		
		for (clmns=1; clmns<rows; clmns++)
		{
			cout<<"* ";
		}
		
		
		cout<<"\n";
	}
	
	return 0;
}