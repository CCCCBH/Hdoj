#include<iostream>
using namespace std;

void main()
{
    int n,i;
    _int64 A[100];
    while(cin>>n && n!=-1)
    {
        A[0]=0;
        A[1]=1;
        for(i=2;i<=n;i++)
        {
            A[i]=A[i-1]+A[i-2];
        }
        printf("%I64d\n",A[n]);
    }
}
