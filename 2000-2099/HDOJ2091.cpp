#include<iostream>
using namespace std;

int main(void)
{
    char a;
    int b,i,j,flag=0;;
    while(cin>>a>>b && a!='@')
    {
        if(flag==1)
        {
            cout<<endl;
        }
        
        for(i=0; i<b; i++)
        {
            for(j=1; j<=b+i; j++)
            {
                if(i==b-1)
                {
                    cout<<a;
                }
                else if(j==b-i || j==b+i)
                {
                    cout<<a;
                }
                else
                {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
        flag=1;
    }
}
