#include<iostream>
#include<cmath>
using namespace std;

int main(void)
{
    int n,m;
    double x;
    while(cin>>n>>m && (n!=0 || m!=0))
    {
        x=(n+sqrt(n*n-4*m))/2;
        if(x==(int)x)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    
}
