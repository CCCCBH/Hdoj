#include<iostream>  
using namespace std;

void main()
{
    int i;
    int C;
    cin>>C;
    _int64 A[100000];
    int n;
    while(C--)
    {
        cin>>n;
        A[0]=0;
        A[1]=2;
        A[2]=7;
        
        for(i=3;i<=n;i++)
        {
            A[i]=A[i-1]+4*(i-1)+1;
        }
        printf("%I64d\n",A[n]);
    }
}

