#include <iostream>
using namespace std;
#define M 100
void main()
{
    int n;
    int i;
    cin>>n;
    cin.ignore();
    
    while(n--)
    {
        char A[M];
        //输入字符串
        cin.getline(A,M);
        int length=strlen(A);
        int num=0;
        for(i=0;i<length;i++)
        {
            if(A[i]>='0' && A[i]<='9')
                num++;
        }
        cout<<num<<endl;
    }
}

