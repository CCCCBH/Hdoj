#include<iostream>
#include<string>
using namespace std;

string A[1000],B[1000];

int main(void)
{
    int n,i,j;
    string temp;
    while(cin>>n && n!=0)
    {
        int flag=0;
        for(i=1; i<=n; i++)
        {
            cin>>A[i];
            cin>>B[i];
        }

        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(B[i]==A[j])
                {
                    A[j]="0";
                }
            }
        }

        for(i=1; i<=n; i++)
        {
            if(A[i]!="0" && A[i]!=temp)
            {
                flag++;
                temp=A[i];
            }
        }
        if(flag==1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
