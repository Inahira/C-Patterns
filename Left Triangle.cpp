/*
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
*/

// converted same program into function / steuctured program

#include <iostream>
using namespace std;

void leftTriangle(int n)
{
    // Simple Left Triangle Pattern in C++
    int clmns;

    for (int rows = 1; rows <= n; rows++)
    {
        for (clmns = n; clmns >= rows; clmns--) // for printing decreasing spaces
        {
            cout << "  ";
        }
        for (clmns = 1; clmns <= rows; clmns++) // for printing increasing triangle
        {
            cout << "* ";
        }

        cout << "\n";
    }
}

int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "\n";

    leftTriangle(rows);
    return 0;
}

