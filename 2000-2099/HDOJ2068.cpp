#include<iostream>
using namespace std;

__int64 c(int n,int m){  
        _int64 a=1;  
        if(m==0)  
           return 1;  
        for(int i=1;i<=m;i++){  
            a=a*(n-i+1);  
            a=a/i;
        }  
        return a;  
}  

void main()
{
    int n,m,i;
    _int64 A[100];
    _int64 B[100];
    while(cin>>n && n!=0)
    {
        m=n/2;

        A[0]=0;
        A[1]=0;
        A[2]=1;
        //错排
        for(i=3;i<=m;i++)
        {
            A[i]=(i-1)*(A[i-1]+A[i-2]);
        }

        //C(m,n)
        B[0]=1;
        for(i=1;i<=n;i++)
        {
            B[i]=B[i-1]*i;
        }

        _int64 sum=1;
        for(i=1;i<=m;i++)
        {
            sum=sum+A[i]*c(n,i);
        }
        printf("%I64d\n",sum);  
    }
}
