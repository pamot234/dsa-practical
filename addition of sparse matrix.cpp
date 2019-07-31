#include <iostream>
using namespace std;

class sparse {
public:

	int a[100][100],b[100][100],c[100][100];
	int k,l,i,j,m,n,o,p;
	void matrix_a()
	{

	cout<<"enter number of rows in matrix a :"<<endl;
	cin>>m;
	cout<<"enter number of columns in matrix a :"<<endl;
	cin>>n;
	cout<<"enter elements is matrix a :"<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{ cout<<"enter a "<<i<<j<<" :";
			cin>>a[i][j];
		}
	}
	}
	void matrix_b()
	{
		cout<<"enter number of rows in matrix b :"<<endl;
				cin>>o;
		cout<<"enter number of columns in matrix b :"<<endl;
				cin>>p;
				cout<<"enter elements is array b :"<<endl;
				for(i=0;i<o;i++)
				{
					for(j=0;j<p;j++)
					{ cout<<"enter b "<<i<<j<<" :";
						cin>>b[i][j];
					}
				}
	}

	void display()
	{

	cout<<"matrix a is :"<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"matrix b is :"<<endl;
	for(i=0;i<o;i++)
		{
			for(j=0;j<p;j++)
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
	cout<<"sparse of matrix b :"<<endl;
	cout<<"r"<<" "<<"c"<<" "<<"+no"<<endl;
	for(i=0;i<o;i++)
		{
			for(j=0;j<p;j++)
			{
				if(b[i][j]!=0)

				cout<<i<<" "<<j<<" "<<b[i][j]<<endl;
			}
		}
	}
	void addition()
	{

		for(i=0;i<m;i++)
			for(k=0;k<o;k++)
			{
				for(j=0;j<n;j++)
					for(l=0;l<p;l++)
				{


					if(i==k&&j==l)
						{c[i][j]=a[i][j]+b[k][l];

				}
			}
			}
		cout<<"addition of sparse a and b is :"<<endl;
		cout<<"r"<<" "<<"c"<<" "<<"+no"<<endl;
					for(i=0;i<m;i++)

						{
							for(j=0;j<n;j++)
							{
								if(c[i][j]!=0)

		cout<<i<<" "<<j<<" "<<c[i][j]<<endl;

							}
						}
	}
};

	int main()
	{  sparse s1;

	  s1.matrix_a();
	  s1.matrix_b();

	   s1.display();
	   s1.addition();

	}
