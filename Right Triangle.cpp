/*
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
*/

// converted into functioned program

#include <iostream>
using namespace std;

void rightTriangle(int n) //function for right triangle
{
	for (int row=1; row<=n; row++)
	{
		for (int clmn=1; clmn<=row; clmn++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
}

int main ()
{
	int n;
	cout<<"Enter number of rows: ";
	cin>>n;
	cout<<"\n";
	rightTriangle(n); //call for rightTriangle function
	
	return 0;
}
