#include<iostream>
#include<algorithm>
using namespace std;

int n;

bool com(int A[])
{
    int i;
    for(i=0; i<n; i++)
    {
        if(A[i]!=A[0])
        {
            return true;
        }
    }
    return false;
}

int main(void)
{
    int i,flag=1;
    int A[1000];
    while(cin>>n && n!=0)
    {
        if(flag==0)
        {
            cout<<endl;
        }
        int sum=0;
        for(i=0; i<n; i++)
        {
            cin>>A[i];
        }
        while(com(A))
        {
            sort(A,A+n);
            A[n-1]--;
            A[0]++;
            sum++;
        }
        cout<<sum<<endl;
        flag=0;
    }
}
