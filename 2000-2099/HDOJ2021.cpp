#include<iostream>
using namespace std;

void main()
{
    int n;
    int A[100];
    while(cin>>n && n!=0)
    {
        int sum=0;
        int count;
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
            count = A[i]/100;
            int t1 = A[i]%100;
            int t2 = t1%10;
            
            if(t1<50)
            {
                count=count+t1/10;
            }
            
            if(t1>=50)
            {
                count=count+(t1-50)/10+1;
            }
            
            switch(t2)
            {
            case 1:
            case 2:
            case 5:
                count=count+1;
                break;
            case 3:
            case 4:
            case 6:
            case 7:
                count=count+2;
                break;
            case 8:
            case 9:
                count=count+3;
                break;
            }
            sum=sum+count;
        }
        cout<<sum<<endl;
    }
    
}
