#include<iostream>  
using namespace std;  
void main()
{
    int n;
    int A[100000]={0};
    while(cin>>n)
    {
        for(int i=1;i*i<=n;i++)
        {
            A[i*i]=1;
        }
        cout<<A[n]<<endl;
    }
}

