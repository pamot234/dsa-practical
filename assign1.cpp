/*
 * assign1.cppCX
 *
 *  Created on: 21-Jun-2019
 *      Author: administrator
 */

#include<iostream>
using namespace std;

class student
{
private:
	int n,rollno[10];
	string name[10];
	char attendance[10];
	int dsamarks[10];
public: int i;
		void get_info()
		{
			cout<<"\n enter no of students   ";
			cin>>n;
			for(i=0;i<n;i++)
				{
			cout<<"\n enter your roll no   ";
			cin>>rollno[i];
			cout<<" \n name     ";
			cin>>name[i];
			cout<<"\n attendance A or P   ";
			cin>>attendance[i];
				if(attendance[i]=='P')
						{
					cout<<"\n enter your dsa marks   ";
					cin>>dsamarks[i];
						}
				else if(attendance[i]=='A')
						{
					dsamarks[i]=-1;
					cout<<"\n you were absent for exam \n  ";

						}
				else
						{
					dsamarks[i]=0;
					cout<<"\n you entered wrong key \n    ";
						}
					}
		}
	void dis_info()
		{
		for(int i=0;i<n;i++)
			cout<<"\n roll no  "<<rollno[i]<<"\n name  "<<name[i]<<"\n attendance  "<<attendance[i]<<"\n dsa marks  "<<dsamarks[i];
		}
		};
		int main()
			{
			student s1;
			s1.get_info();
			s1.dis_info();
				return(0);
			}


