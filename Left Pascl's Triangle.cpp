#include <iostream>
using namespace std;

int main()
{
	// Left Pascal's Triangle
	int n, rows, clmns;
	
	cout<<"Enter no. of rows:\n";
	cin>>n;
	cout<<"\n";
	
	for (rows=1; rows<=n; rows++) // for upper right triangle
	{
		for (clmns=1; clmns<=rows; clmns++)
		{
			cout<<"* ";
		}
		
		cout<<"\n";
	}
	for (rows=1; rows<=n; rows++) // for lower decreasing right triangle
	{
		for (clmns=n; clmns>rows; clmns--)
		{
			cout<<"* ";
		}
		
		cout<<"\n";
	}
	
	return 0;
}