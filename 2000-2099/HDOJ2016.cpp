#include<iomanip>
#include <iostream>
using namespace std;

double min(double a, double b)  
{  
    return a < b ? a : b;  
}

int main()
{
    int n;
    int i;
    
    int A[100];
    while(cin>>n)
    {
        if(n==0)
            return 0;
        for(i=0;i<n;i++)
        {
            cin>>A[i];
        }

        int temp=A[0];
        int k=0;

        for(i=0;i<n;i++)
        {
            if(A[i]<temp)
            {
                temp=A[i];
                k=i;
            }
        }
        swap(A[0],A[k]);
        for(i=0;i<n;i++)
        {
            if(i==0)
                cout<<A[i];
            else
                cout<<" "<<A[i];
        }
        cout<<endl;

    }
    return 0;
}

