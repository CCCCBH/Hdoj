#include<math.h>
#include<iomanip>
#include<iostream>
using namespace std;
void main()
{
    double a;
    double b;
    double c;
    double d;
    while(cin>>a>>b>>c>>d)
    {
        cout<<setprecision(2)<<std::fixed<<sqrt((a-c)*(a-c)+(b-d)*(b-d))<<endl;
    }
}
