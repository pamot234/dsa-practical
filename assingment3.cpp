/*
 * assingment2.0.cpp
 *
 *  Created on: 02-Jul-2019
 *      Author: administartor
 */

#include<iostream>
#include<string.h>
using namespace std;
#define arr 20

class sports
{
private: int m;
         string name[arr];
         int rollno[arr];
         int i,k;
         int count = 0;

public:
         void get_data()
     { cout<<"\n ENTER THE NUMBER OF STUDENT =  "<<endl;
          cin>>m;



        for(i=0;i<m;i++)
        { cout<<"\n ENTER YOUR ROLL NO = ";
          cin>>rollno[i];
          cout<<"\n ENTER NAME PLEASE  = ";
          cin>>name[i];

        }

     }


        void display()
        {
        	for(int i=0;i<count;i++){

        	cout<<"ROLL NO IS"<<rollno[i];
        	cout<<"NAME IS"<<name[i];

        	}



        }




        void union_set(sports Sc,sports Sb)
        { int flag;
        	for(int i=0;i<Sc.count;i++)
        	{ rollno[i]=Sc.rollno[i];
              name[i]=Sc.name[i];
              count++;
            }

          for(int i=0;i<Sb.count;i++)
        	{ for(int j=0;j<Sc.count;j++)
        	  { if(Sb.rollno[i]== Sc.rollno[i])

        	  { flag=1;
        	    break;
        	  }
        	else
        	{flag = 0;}
        	  }
        	if(flag==0)
        	{rollno[count]=Sb.rollno[i];
        	 name[count]=Sb.name[i];
        	 count++;
        	}


        	  }

            }

};



		int main()

		{ sports Sc,Sb,Su;
		Sc.get_data();

		cout<<"\n ENTER NO OF STUDENT WHO PLAY CRICKET  =";
		  Sc.get_data();

		  cout<<"\n ENTER NO OF STUDENT WHO PLAY BADMINTON =";
		 Sb.get_data();

		 Sc.display();
		 Sb.display();
		 Su.union_set(Sc,Sb);
		 Su.display();

         return 0;


		}







