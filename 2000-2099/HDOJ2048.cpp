#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n;
    int m;
    int i;
    cin>>n;
    double A[100];
    double B[100];
    while(n--)
    {
        cin>>m;
        A[1]=0;
        A[2]=1;
        A[3]=2;
        for(i=4;i<=m;i++)
        {
            A[i]=(i-1)*(A[i-1]+A[i-2]);//错排（所有人都拿不到自己的）
        }
        B[0]=1;
        for(i=1;i<=m;i++)
        {
            B[i]=B[i-1]*i;//全排（所有的可能性 m!）
        }
        cout<<fixed<<setprecision(2)<<A[m]*100.0/B[m]<<"%"<<endl;
    }
    return 0;
}
