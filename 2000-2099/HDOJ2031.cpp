#include<iostream>
using namespace std;

void main()
{
    char A[17]="0123456789ABCDEF";
    char B[100];
    int N;
    int R;
    int i;
    int j;
    int temp;
    
    while(cin>>N>>R)
    {
        if(N<0)
        {
            cout<<"-";
            N=-N;
        }
        int i=0;
        B[i]=N%R;
        temp=N/R;
        while(temp>=R)
        {
            B[++i]=temp%R;
            temp=temp/R;
        }
        B[++i]=temp;
        
        for(j=i;j>=0;j--)
        {
            cout<<A[B[j]];
        }
        cout<<endl;
    }
}
