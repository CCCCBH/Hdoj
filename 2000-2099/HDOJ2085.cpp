#include<iostream>
using namespace std;
long long high[100];
long long low[100];
int main(void)
{
    int n,i;
    while(cin>>n && n!=-1)
    {
        high[0]=1;
        low[0]=0;
        for(i=1; i<=n; i++)
        {
            high[i]=3*high[i-1]+2*low[i-1];
            low[i]=high[i-1]+low[i-1];
        }
        cout<<high[n]<<", "<<low[n]<<endl;
    }
}
