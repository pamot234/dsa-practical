/*
 * sparce_matrics.cpp
 *
 *  Created on: 19-Jul-2019
 *      Author: administartor
 */




#include<iostream>
using namespace std;
class sparce
{	private:
	int i,j;
	int r,c,t;
	int m[100][3];
	public:
	void get()
	{
		cout<<"\n Enter no. of rows = ";
		cin>>r;
		m[0][0]=r;
		cout<<" Enter no. of columns = ";
		cin>>c;
		m[0][1]=c;
		cout<<" Enter no. of terms = ";
		cin>>t;
		m[0][2]=t;
		cout<<"\n Enter matrix elements= ";
		for(int i=1;i<=t;i++)
		{
			for(int j=0;j<3;j++)
			{
				cin>>m[i][j];
			}
		}
	}
	void display()
	{
		cout<<"\n The sparce matrix is as follows\n"<<endl;
		for(int i=0;i<=t;i++)
		{
			for(int j=0;j<3;j++)
			{
				cout<<m[i][j]<<"\t";
			}
			cout<<endl;
		}
	}
	void addition(sparce s1,sparce s2)
	{
		int i=1;
        int j=1;
		int k=1;

		m[0][0]=s1.m[0][0];
		m[0][1]=s1.m[0][1];
		while(i<=s1.t && j<=s2.t)
		{
			if(s1.m[i][0]==s2.m[j][0])
			{
				m[k][0]=s1.m[i][0];
				m[k][1]=s1.m[i][1];
				m[k][2]=s1.m[i][2] + s2.m[j][2];
				i++,j++,k++;
			}
			else if(s1.m[i][1]<=s2.m[j][1])
			{
				m[k][0]=m[i][0];
			    m[k][1]=m[i][1];
			    m[k][2]=m[i][2];
			  i++,k++;
			}
			else
			{
				m[k][0]=s2.m[j][0];
				m[k][1]=s2.m[j][1];
				m[k][2]=s2.m[j][2];
               	j++,k++;
			}
		}
		while(i<=s1.t)
		{
			m[k][0]=s1.m[i][0];
			m[k][1]=s1.m[i][1];
			m[k][2]=s1.m[i][2];
			i++,k++;

		}
		while(j<=s2.t)
		{
			m[k][0]=s2.m[j][0];
			m[k][1]=s2.m[j][1];
		    m[k][2]=s2.m[j][2];
			j++,k++;
		}
	   m[0][2]=k-1;
	}

     void addition_display()
     {
    	 cout<<"\n ROW   COL   NON ZERO.E "<<endl;
    	 for(int i=0;i<=m[0][2];i++)
    	 {cout<< m[i][0]<<"   "<< m[i][1]<<"   "<< m[i][2]<<"\n";
    	 }


     }

     void simple_transpose(sparce s1)
     {
    	 m[0][0]=s1.m[0][0];
    	 m[0][1]=s1.m[0][1];
    	 m[0][2]=s1.m[0][2];
    	 int k=1;
    	 for(int j=1;j<=m[0][1];j++)
    	 {
    		 for(int i=1;i<=m[0][2];i++)
    		 {
    			 m[k][0]=s1.m[i][0];
    			 m[k][1]=s1.m[i][1];
    			 m[k][2]=s1.m[i][2];
    			 k++;
    		 }


    	 }

     }

     void stdisplay()
     {
    	cout<<"\n Simple transpose matrix is "<<endl;
    	cout<<"\n ROW  COL NON.E";
    	cout<< m[i][0]<<"   "<< m[i][1]<<"   "<< m[i][2]<<"\n";




     }

};
int main()
{
	sparce s1,s2,s3,s4;
	cout<<" Enter your  first matrix"<<endl;
	s1.get();
	cout<<"\n Enter second matrix"<<endl;
	s2.get();
	cout<<"\n First matrix is \n"<<endl;
	s1.display();
	cout<<"\n Second matrix is"<<endl;
	s2.display();
	cout<<"\n Addition is "<<endl;
	s3.addition(s1,s2);
	s3.addition_display();
	s4.simple_transpose(s1);
	s4.stdisplay();
    return 0;
}

