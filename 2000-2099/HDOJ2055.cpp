#include<iostream>
using namespace std;

void main()
{
    int n;
    char x;
    int y;
    cin>>n;
    while(n--)
    {
        cin>>x>>y;

        if(x>=65 && x<=90)
        {
            cout<<y+x-'A'+1<<endl;
        }
        if(x>=97 && x<=122)
        {
            cout<<y-x+'a'-1<<endl;
        }
    }
}
