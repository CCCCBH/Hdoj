#include<iostream>
using namespace std;

int main(void)
{
    int n,a,b;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        if(a!=0 && b!=0 && a%b==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

