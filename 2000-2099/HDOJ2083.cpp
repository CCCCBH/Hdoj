#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,m,i,k;
    int A[10000];
    cin>>n;
    while(n--)
    {
        int sum=0;
        cin>>m;
        for(i=0;i<m;i++)
        {
            cin>>A[i];
        }
        sort(A,A+m);
        k=(m-1)/2;
        for(i=0;i<m;i++)
        {
            sum=sum+abs(A[i]-A[k]);
        }
        cout<<sum<<endl;
    }
    return 0;
}
