#include<math.h>
#include<iomanip>
#include<iostream>
using namespace std;

void main()
{
    double n;
    int m;
    while(cin>>n>>m)
    {
        double sum=0;
        for(int i=0;i<m;i++)
        {
            sum=sum+n;
            n=sqrt(n);
        }
        cout<<setprecision(2)<<std::fixed<<sum<<endl;
    }
}

