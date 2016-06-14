#include<iostream>  
#include<cmath>  
using namespace std;

void main()
{
    int M;
    int N;
    while(cin>>N>>M && (N!=0 && M!=0))
    {
        int d=sqrt(2*M);
        while(d)
        {
            int a=(2.0*M/d-d+1)/2;
            if(d*(d+2*a-1)/2==M)
            {
                cout<<"["<<a<<","<<a+d-1<<"]"<<endl;
            }
            d--;
        }
        cout<<endl;
    }
}

