#include<iostream>
using namespace std;

void main()
{
    int year;
    int month;
    int day;
    char l;
    
    while(cin>>year>>l>>month>>l>>day)
    {
        int monthday[]={31,28,31,30,31,30,31,31,30,31,30,31};
        int monthdays=0;
        int alldays=0;
        if((year%4==0 && year%100!=0) || year%400==0)
        {
            monthday[1]=29;
        }
        for(int m=0;m<month-1;m++)
        {
            monthdays = monthdays + monthday[m];
        }
        alldays = monthdays+day;
        cout<<alldays<<endl;
    }
}
