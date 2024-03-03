#include <iostream>
using namespace std;

int main()
{
	//CPP Diamond pattern
	int n, rows, clmns;
	
	cout<<"Enter no. of rows:\n";
	cin>>n;
	cout<<"\n";
	
	for (rows=1; rows<n; rows++) // for upper rows
	{
		for (clmns=n; clmns>=rows; clmns--) //for decreasing right triangle 
		{
			cout<<"  ";
		}
		for (clmns=1; clmns<=rows; clmns++) // for increasing left triangle
		{
			cout<<"* ";
		}
		for (clmns=1; clmns<rows; clmns++) //for increasing right triangle
		{
			cout<<"* ";
		}
		
		cout<<"\n";
	}
	// reverse part
	for (rows=1; rows<=n; rows++) //for lower rows
	{
		for (clmns=1; clmns<=rows; clmns++) //for increasing right triangle
		{
			cout<<"  ";
		}
		for (clmns=n; clmns>=rows; clmns--) // for decreasing left triangle
		{
			cout<<"* ";
		}
		for (clmns=n; clmns>rows; clmns--) //for decreasing right triangle
		{
			cout<<"* ";
		}
		
		
		cout<<"\n";
	}
	
	return 0;
}