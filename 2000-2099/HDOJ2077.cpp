#include<iostream>
#include<cmath>
using namespace std;

int main(void)
{
    int m,n,i;
    long long sum;
    long long A[1000];
    cin>>m;
    while(m--)
    {
        cin>>n;
        A[1]=1;
        A[2]=4;
        for(i=3; i<n; i++)
        {
            A[i]=A[i-1]+pow(3,i-1);
        }
        sum=2*A[n-1]+2;
        cout<<sum<<endl;
    }
}
