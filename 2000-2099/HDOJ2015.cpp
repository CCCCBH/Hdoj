#include<iomanip>
#include <iostream>
using namespace std;

double min(double a, double b)  
{  
    return a < b ? a : b;  
}

void main()
{
    int n;
    int m;
    int A[100];

    while(cin>>n>>m)
    {
        int i;
        int j;
        
        for(i=0;i<n;i++)
        {
            A[i]=(i+1)*2;
        }

        for(i=0;i<n;i=i+m)
        {
            int sum=0;
            for(j=i;j<min(m+i,n);j++)
            {
                sum=sum+A[j];
            }
            sum=sum/(min(m+i,n)-i);
            if(i==0)
                cout<<sum;
            else
                cout<<" "<<sum;
            
        }
        cout<<endl;
    }
}

