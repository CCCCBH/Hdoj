#include <iostream>
using namespace std;

void main()
{
    int A[100];
    int n;
    int m;
    int i;
    int j;
    while(cin>>n>>m && n!=0 && m!=0)
    {
        for(i=0;i<n;i++)
        {
            cin>>A[i];
        }

        for(i=0;i<n;i++)
        {
            if(m<A[i])
            {
                for(j=n;j>i;j--)
                {
                    A[j]=A[j-1];
                }
                A[i]=m;
                break;
            }
        }

        for(i=0;i<n+1;i++)
        {
            if(i==0)
                cout<<A[i];
            else
                cout<<" "<<A[i];
        }
        cout<<endl;
    }
}
