#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int A[1000000];
int main(void)
{
    int n,i;
    while(scanf("%d",&n) && n!=0)
    {
        for(i=0; i<n; i++)
        {
            scanf("%d",&A[i]);
        }

        sort(A,A+n);
        for(i=0; i<n-1; i++)
        {
            if(A[i]!=A[i+1])
            {
                if(A[i+1]!=A[i+2])
                {
                    printf("%d\n",A[i+1]);
                }
            }
        }
        memset(A,0,sizeof(A));
    }
}
