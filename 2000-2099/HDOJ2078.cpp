#include<iostream>
#include<algorithm>
using namespace std;

int main(void)
{
    int T,n,m,i;
    int A[100];
    cin>>T;
    while(T--)
    {
        int sum=100;
        cin>>n>>m;
        for(i=0; i<n; i++)
        {
            cin>>A[i];
        }
        sort(A,A+n);
        sum=(sum-A[0])*(sum-A[0]);
        cout<<sum<<endl;
    }
}
