#include<iostream>
using namespace std;

void main()
{
    int n;
    cin>>n;
    cin.ignore();
    
    while(n--)
    {
        bool test = true;
        char A[50];
        
        cin.getline(A,50);
        int length=strlen(A);
        
        for(int i=0;i<length;i++)
        {
            if(i==0)
            {
                if((A[i]>='A' && A [i]<='Z') || (A[i]>='a' && A[i]<='z') || (A[i]=='_'))
                {
                    test=true;
                }
                else
                {
                    test=false;
                    cout<<"no"<<endl;
                    break;
                }
            }
            else
            {
                if( (A[i]>='A' && A [i]<='Z') || (A[i]>='a' && A[i]<='z') || (A[i]>='0' && A[i]<='9') || (A[i]=='_') )
                {
                    test=true;
                }
                else
                {
                    test=false;
                    cout<<"no"<<endl;
                    break;
                }
            }
        }
        if(test)
            cout<<"yes"<<endl;
        
    }
}
