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
        gets(A);
        int num1=0;
        int num2=0;
        int num3=0;
        int num4=0;
        int num5=0;
        int length=strlen(A);
        for(int i=0;i<length;i++)
        {
            if(A[i]=='a')
                num1++;
            if(A[i]=='e')
                num2++;
            if(A[i]=='i')
                num3++;
            if(A[i]=='o')
                num4++;
            if(A[i]=='u')
                num5++;
        }
        cout<<"a:"<<num1<<endl;
        cout<<"e:"<<num2<<endl;
        cout<<"i:"<<num3<<endl;
        cout<<"o:"<<num4<<endl;
        cout<<"u:"<<num5<<endl;
        if(n>0)
            cout<<endl;
    }
}
