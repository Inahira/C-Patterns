#include <iostream>
using namespace std;

int main()
{
	//Simple Left Triangle Pattern in CPP
	int rows, clmns, n;
	
	cout<<"Enter no. of rows:\n";
	cin>>n;
	cout<<"\n";
	
	for (rows=1; rows<=n; rows++)
	{
		
		for (clmns=n; clmns>=rows; clmns--) //for printing decreasing spaces
		{
			cout<<"  ";
		}
		for (clmns=1; clmns<=rows; clmns++)  //for printing increasing triangle
		{
			cout<<"* ";
		}
		
		cout<<"\n";
	}
	
	return 0;
}