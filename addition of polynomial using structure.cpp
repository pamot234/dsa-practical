#include<iostream>
using namespace std;
struct poly
{
    int coeff;
    int expo;
};
class polynomial
{
    struct poly p1[100],p2[100],p3[100];
public:
    int n1,n2,i,j,k;
    int get()

    {

       cout<<"enter number of coeff in polynomial 1 :"<<endl;
       cin>>n1;
        for(i=0;i<n1;i++)
        {cout<<"enter coeff & expo :";
        cin>>p1[i].coeff>>p1[i].expo;

        }
        cout<<"enter number of coeff in polynomial 2 :"<<endl;
        cin>>n2;
        for(j=0;j<n2;j++)
        {
            cout<<"enter coeff & expo :";
            cin>>p2[j].coeff>>p2[j].expo;
        }
    }

        int conditions()
        {
            while(i<n1&&j<n2)
               {
            if(p1[i].expo==p2[j].expo)
             {

        p3[k].expo=p1[i].expo+p2[j].expo;
        p3[k].coeff=p1[i].coeff;
            i++;
            j++;
            k++;
            }
            else
                if(p1[i].expo>p2[j].expo)
              {
                  p3[k].expo=p1[i].expo;
            k++;
            i++;
               }
               else
               {p3[k].expo=p2[j].expo;
               j++;
               k++;
               }
               while(i<n1)
               {
                   p3[k].expo=p1[i].expo;
                   p3[k].coeff=p1[i].coeff;
               }
               }
               while(j<n2)
               {
                   p3[k].expo=p2[j].expo;
                   p3[i].coeff=p1[j].coeff;
               }
               }
                int display()
        {


             for(i=0;i<n1;i++)
        {
            cout<<p1[i].coeff<<"x^"<<p1[i].expo;

        if(i!=n1-1)
            cout<<"+";
        else
           cout<<endl;
        }
        for(j=0;j<n2;j++)
        {
            cout<<p2[j].coeff<<"x^"<<p2[j].expo;
            if(j!=n2-1)
            cout<<"+";
        else
           cout<<endl;
        }
        cout<<"addition of polynomial 1 & 2 is :"<<endl;
        if(n1>n2)
     {
         for(k=0;k<n1;k++)
        {


            cout<<p3[k].coeff<<"x^"<<p3[k].expo;
             if(k!=n1-1)
            cout<<"+";
        else
           cout<<endl;
        }}
        else
        {
            for(k=0;k<n2;k++)
        {
            cout<<p3[k].coeff<<"x^"<<p3[k].expo;
             if(k!=n2-1)
            cout<<"+";
        else
           cout<<endl;
        }

    }
        }
        };
        int main()
        {
            polynomial c;
            c.get();
            c.conditions();
            c.display();
            return 0;
        }










