#include<iostream>  
using namespace std;

char A[100000];
char B[100000];

char *str(char *s)
{
    int i;
    int length=strlen(s);

    while(strchr(s,'.')!=NULL && (s[length-1]=='0' || s[length-1]=='.'))
    {
        s[length-1]='\0';
        length=length-1;

        if(s[length-1]=='.')
        {
            s[length-1]='\0';
            length=length-1;
        }
        
    }

    while(s[0]=='0' && length!=1)
    {
        for(i=0;i<length-1;i++)
        {
            s[i]=s[i+1];
        }
        s[length-1]='\0';
        length=length-1;
    }

    return s;
}

void main()
{
    while(cin>>A>>B)
    {
        str(A);
        str(B);
        if(strcmp(A,B)==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

