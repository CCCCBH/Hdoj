#include<iomanip>
#include<iostream>
using namespace std;

void main()
{
    int n;
    int m;
    while(cin>>n>>m)
    {
        int i;
        int j;
        double A[50][5];
        double B[50];
        double C[5];
        

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>A[i][j];
            }
        }

        for(i=0;i<n;i++)
        {
            double sum1=0;
            for(j=0;j<m;j++)
            {
                sum1=sum1+A[i][j];
            }
            B[i]=sum1/m;
            if(i==0)
                cout<<setprecision(2)<<std::fixed<<B[i];
            else
                cout<<setprecision(2)<<std::fixed<<" "<<B[i];
        }

        cout<<endl;

        for(i=0;i<m;i++)
        {
            double sum2=0;
            for(j=0;j<n;j++)
            {
                sum2=sum2+A[j][i];
            }
            C[i]=sum2/n;
            if(i==0)
                cout<<setprecision(2)<<std::fixed<<C[i];
            else
                cout<<setprecision(2)<<std::fixed<<" "<<C[i];
        }

        cout<<endl;

        int num=0;
        for(i=0;i<n;i++)
        {
            int k=0;
            for(j=0;j<m;j++)
            {
                if(A[i][j] >= C[j])
                    k++;
            }
            if(k==m)
                num++;
        }
        cout<<num<<endl<<endl;
    }
}
