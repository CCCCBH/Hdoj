#include<iostream>
using namespace std;

void main()
{
    int n;
    cin>>n;
    cin.ignore();
    char A[100];
    while(n--)
    {
        cin.getline(A,100);
        int length = strlen(A);
        bool test=true;

        int low=0;
        int high=length-1;

        while(low<high)
        {
            if(A[low]!=A[high])
            {
                test=false;
                break;
            }
            low++;
            high--;
        }

        if(test==true)
            cout<<"yes"<<endl;
        if(test==false)
            cout<<"no"<<endl;
    }

}
