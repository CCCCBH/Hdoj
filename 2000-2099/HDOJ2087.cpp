#include<iostream>
#include<cstring>
using namespace std;

int main(void)
{
    char a[1000],b[1000];
    int s1,s2,i,j;

    while(cin>>a && a[0]!='#' &&cin>>b)
    {
        int flag=1,sum=0;
        s1=strlen(a);
        s2=strlen(b);

        for(i=0; i<s1; i++)
        {
            if(b[0]==a[i])
            {
                for(j=1; j<s2; j++)
                {
                    if(b[0+j]!=a[i+j])
                    {
                        flag=0;
                        break;
                    }
                    i=i+j;
                }
                if(flag==1)
                {
                    sum++;
                }
            }
        }
        cout<<sum<<endl;
    }
}
