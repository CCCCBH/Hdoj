#include <iostream>
using namespace std;

void main()
{
    int A[100];
    int n;
    while(cin>>n && n!=0)
    {
        for(int i=0;i<=n;i++)
        {
            A[i]=i;
            if(i>=4)
            {
                A[i]=A[i-1]+A[i-3];
            }
        }
        cout<<A[n]<<endl;
    }
}
