#include<iostream>
using namespace std;

void main()
{
    int i;
    int j;
    while(cin>>i>>j)
    {
        int sum1=0;
        int sum2=0;
        if(i<j)
        {
            for(i;i<=j;i++)
            {
                if(i%2==0)
                {
                    sum1=sum1+i*i;
                }
                if(i%2!=0)
                {
                    sum2=sum2+i*i*i;
                }
            }
            cout<<sum1<<" "<<sum2<<endl;
        }
        else
        {
            for(j;j<=i;j++)
            {
                if(j%2==0)
                {
                    sum1=sum1+j*j;
                }
                if(j%2!=0)
                {
                    sum2=sum2+j*j*j;
                }
            }
            cout<<sum1<<" "<<sum2<<endl;
        }
        
    }
}

