#include <iostream>
using namespace std;

int main()
{
	//Simple Double Hill Pattern in CPP
	int rows, clmns, n;
	
	cout<<"Enter no. of rows:\n";
	cin>>n;
	cout<<"\n";
	
	for (rows=1; rows<=n; rows++) //for rows
	{
		
		for (clmns=n; clmns>=rows; clmns--) //for decreasing right triangle
		{
			cout<<"  ";
		}
		for (clmns=1; clmns<=rows; clmns++)//for increasing left triangle
		{
			cout<<"* ";
		}
		for (clmns=1; clmns<rows; clmns++) //increasing right triangle
		{
			cout<<"* ";
		}
		for (clmns=n; clmns>rows; clmns--) //decreasing left triangle
		{
			cout<<"  ";
		}
		for (clmns=n; clmns>rows; clmns--) //decreasing right triangle
		{
			cout<<"  ";
		}
		for (clmns=1; clmns<=rows; clmns++) //increasing left triangle
		{
			cout<<"* ";
		}
		for (clmns=1; clmns<rows; clmns++) //increasing right trinagle
		{
			cout<<"* ";
		}
		
		cout<<"\n";
	}
	
	return 0;
}