#include<iostream>
using namespace std;

char A[100][100];

int main(void)
{
    int n,i,j,N,temp,o=0;
    char a,b;
    while(cin>>n>>a>>b)
    {
        N=n;
        if(o++)
        {
            cout<<endl;
        }
        if(n==1)
        {
            cout<<a<<endl;
            continue;
        }
        if(((n+1)/2)%2==0)
        {
            temp=a;
            a=b;
            b=temp;
        }
        for(i=1;i<=((N+1)/2);i=i+2,n=n-2)
        {
            for(j=i;j<=n;j++)
            {
                A[i][j]=a;
                A[j][i]=a;
                A[n][j]=a;
                A[j][n]=a;
            }
        }
        n=N;
        for(i=2,n=n-1;i<=(N+1/2);i=i+2,n=n-2)
        {
            for(j=i;j<=n;j++)
            {
                A[i][j]=b;
                 A[j][i]=b;
                A[n][j]=b;
                A[j][n]=b;
            }
        }
        
        for(i=1;i<=N;i++)
        {
            for(j=1;j<=N;j++)
            {
                if((i==1 && j==1) || (i==1 && j==N) || (i==N && j==1) || (i==N && j==N))
                {
                    cout<<' ';
                }
                else
                {
                    cout<<A[i][j];
                }
            }
            cout<<endl;
        }
    }
}
