#include<iostream>  
using namespace std;

void main()
{
    int n;
    int a;
    int b;
    int c;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        if(a>6)
        {
            a=a-6;
            b=b+a*1+a*7+2+3+4+5+6+7;
        }
        else
        {
            int temp=a;
            int k=7;
            while(temp)
            {
                b=b+k;
                k--;
                temp--;
            }
        }
        
        if(b>=c)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}

