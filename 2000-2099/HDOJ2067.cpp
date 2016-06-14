#include<iostream>
using namespace std;

_int64 sum;
_int64 A[100][100];

void main()
{
    int n,i,j,num=0;
    while(cin>>n && n!=-1)
    {
        num++;

        for(i=0;i<=n;i++)
        {
            A[0][i]=1;
        }

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(i==j)
                {
                    A[i][j]=A[i-1][j];
                }
                else
                {
                    A[i][j]=A[i-1][j]+A[i][j-1];
                }
            }
        }
        printf("%d %d %I64d\n",num,n,2*A[n][n]);
    }
}

