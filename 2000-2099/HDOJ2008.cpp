#include<iostream>
using namespace std;

int main()
{
    int n;
    double num;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        int num1=0;
        int num2=0;
        int num3=0;

        for(int i=0;i<n;i++)
        {
            cin>>num;

            if(num<0)
                num1++;
            if(num==0)
                num2++;
            if(num>0)
                num3++;
        }
        cout<<num1<<" "<<num2<<" "<<num3<<endl;
    }
    return 0;
}

