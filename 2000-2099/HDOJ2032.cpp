#include<iostream>
using namespace std;

void main()
{
    int A[100][100];
    int n;
    int i;
    int j;

    while(cin>>n)
    {
        for(i=0;i<n;i++)
        {
            A[i][0]=1;
            A[i][i]=1;
        }

        for(i=2;i<n;i++)
        {
            for(j=1;j<i;j++)
            {
                A[i][j]=A[i-1][j]+A[i-1][j-1];
            }
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<=i;j++)
            {
                if(j==0)
                {
                    cout<<A[i][j];
                }
                else
                {
                    cout<<" "<<A[i][j];
                }
            }
            cout<<endl;
        }
        cout<<endl;
    }
}
