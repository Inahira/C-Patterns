#include <iostream>
using namespace std;

int main()
{
	// CPP Pyramid pattern
	int n, rows, clmns;
	
	cout<<"Enter no. of rows:\n";
	cin>>n;
	cout<<"\n";
	
	for (rows=1; rows<=n; rows++) //for rows
	{
		
		for (clmns=n; clmns>=rows; clmns--) // for 1st decreasing revrse space triangle
		{
			cout<<"  ";
		}
		for (clmns=1; clmns<=rows; clmns++) //for 2nd increasing left triangle
		{
			cout<<"* ";
		}
		for (clmns=1; clmns<rows; clmns++)// for 3rd increasing right triangle
		{
			cout<<"* ";
		}
		
		cout<<"\n";
	}
	
	return 0;
}