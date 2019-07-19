#include <iostream>

using namespace std;

class operations
{ private:
    char str1[100],str2[100];
public:
    int copy()
    {
        int i;
        cout<<"enter in str1"<<endl;
        cin>>str1;
        for(i=0;str1[i]!='\0';i++)
        {
            str2[i]=str1[i];

        }
        str2[i]='\0';

        cout<<"copied string str1 to str2 is :"<<endl<<str2<<endl;
    }
    int reverse()
    {
        int i,n;




       cout<<"enter in str1"<<endl;
        cin>>str1;
        for(n=0;str1[n]!='\0';n++)
        {
            n;
        }

        cout<<"the reverse of str1 is :"<<endl;


         for(i=n-1;i>=0;i--)
         {
             cout<<str1[i];
         }
    }
    int length()
    {
        int i,j;
        cout<<"enter in str1"<<endl;
        cin>>str1;
        cout<<"enter in str2"<<endl;
        cin>>str2;

       for(i=0;str1[i]!='\0';i++)
        {  i;
        }
        for(j=0;str2[j]!='\0';j++)
        {
            j;
        }
        cout<<"length of str1 is :"<<i<<endl<<"length of str2 is :"<<j<<endl;
    }
    int concate()
   {

   char str3[100];
         int i,j;
    cout<<"enter in str1"<<endl;
        cin>>str1;
        cout<<"enter in str2"<<endl;
        cin>>str2;

        for(i=0;str1[i]!='\0';i++)
          {
             str3[i]=str1[i];
    }

     for(j=0;str2[j]!='\0';j++)
     {
         str3[i+j]=str2[j];
     }
     cout<<"concated string of str1 and str2 is :"<<str3<<endl;
   }

     int compare()
     {

int i,j,x;
         cout<<"enter in str1"<<endl;
        cin>>str1;
        cout<<"enter in str2"<<endl;
        cin>>str2;
        for(i=0;str1[i]!='\0';i++)
        {
            for(j=0;str2[j]!='\0';j++)
         {


            if(str1[i]==str2[j])
               {
                   x=1;
               }
               else{
                x=0;
               }
        }
}
               if(x==1)
               {
                   cout<<"entered strings are similar "<<endl;
               }
               else{
                    cout<<"entered strings are not similar "<<endl;

               }

         if(i==j)
          {

             cout<<"entered strings have equal length "<<endl<<"str1 has length :"<<i<<endl<<"str2 has length :"<<j<<endl;
          }
         else
         {


           cout<<"entered strings have unequal length "<<endl<<"str1 has length :"<<i<<endl<<"str2 has length :"<<j<<endl;
         }

         }
};

         int main()
         {  int o;
             operations p1;

             cout<<" 1: to copy one str1 to str2"<<endl<<"2: to find reverse of str1 "<<endl<<"3: to find length of both strings "<<endl;
             cout<<"4: to move one or more string objects to another string"<<endl<<"5: to compare str1 and str2"<<endl;

             cout<<"enter your choice :";
             cin>>o;
             switch(o)
{


                 case 1:cout<<p1.copy();
                 break;
                 case 2:cout<<p1.reverse();
                 break;
                 case 3:cout<<p1.length();
                 break;
                 case 4:cout<<p1.concate();
                 break;
                 case 5:cout<<p1.compare();
                 break;

}
      return 0;
      }


