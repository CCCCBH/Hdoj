#include<iostream>  
using namespace std;  
void main()
{
    _int64 A[100];
    int n;
    cin>>n;
    int a;
    int b;
    int k;
    while(n--)
    {
        cin>>a>>b;
        k=b-a+1;

        A[1]=0;
        A[2]=1;
        A[3]=2;

        for(int i=4;i<=k;i++)
        {
            A[i]=A[i-1]+A[i-2];
        }
        printf("%I64d",A[k]);//cout没有对_int64重载 输出只能用printf
        cout<<endl;
    }
}
