#include<iostream>
using namespace std;

void main()
{
    int n;
    char A[1000];
    cin>>n;
    cin.ignore();

    while(n--)
    {
        cin.getline(A,1000);
        int length = strlen(A);
        int sum=0;
        for(int i=0;i<length;i++)
        {
            if(A[i]<0)
            {
                sum++;
            }
        }
        cout<<sum/2<<endl;
    }
}
