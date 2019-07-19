//============================================================================
// Name        : p11.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int i,j,m,n,a[100][100];
	cout<<"enter number of rows in matrix a :"<<endl;
	cin>>m;
	cout<<"enter number of columns in matrix a :"<<endl;
	cin>>n;
	cout<<"enter elements is array a :"<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{ cout<<"enter a "<<i<<j<<" :";
			cin>>a[i][j];
		}
	}
	cout<<"matrix a is :"<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"sparse of matrix a :"<<endl;
	cout<<"r"<<" "<<"c"<<" "<<"+no"<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]!=0)

			cout<<i<<" "<<j<<" "<<a[i][j]<<endl;

		}
	}
	cout<<"transpose of matrix a is :"<<endl;
	for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				cout<<a[j][i]<<" ";
			}
			cout<<endl;
		}
	cout<<"sparse of transpose matrix :"<<endl;
	cout<<"r"<<" "<<"c"<<" "<<"+no"<<endl;
	for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i][j]!=0)

				cout<<i<<" "<<j<<" "<<a[i][j]<<endl;

			}
		}






	return 0;
}
