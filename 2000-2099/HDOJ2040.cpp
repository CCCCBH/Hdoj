#include<iostream>  
using namespace std;  

void main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b;
        int i;
        int k;
        int A[1000];
        int B[1000];
        cin>>a>>b;
        

        A[0]=1;
        k=0;
        int sum1=A[0];
        for(i=2;i<a;i++)
        {
            if(a%i==0)
            {
                A[++k]=i;
                sum1=sum1+A[k];
            }
        }

        B[0]=1;
        k=0;
        int sum2=A[0];
        for(i=2;i<b;i++)
        {
            if(b%i==0)
            {
                A[++k]=i;
                sum2=sum2+A[k];
            }
        }

        if((sum1==b) && (sum2==a))
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
