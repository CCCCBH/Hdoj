#include<iomanip>
#include <iostream>
using namespace std;

void main()
{
    int n;
    while(cin>>n)
    {
        int num;
        int temp;
        int MAX=0;
        int MIN=100;
        double sum=0;

        for(int i=0;i<n;i++)
        {
            cin>>num;
            
            sum=sum+num;

            temp=num;
            if(temp>MAX)
                MAX=temp;

            temp=num;
            if(temp<MIN)
                MIN=temp;
        }
        sum=(sum-MAX-MIN)/(n-2);
        cout<<setprecision(2)<<std::fixed<<sum<<endl;
    }
}

