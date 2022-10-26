#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double p,r,t,val;
    cin>>p>>r>>t;
    val = pow(1+(r/100),t);
    printf("%.2f",p*val);
    return 0;
}
