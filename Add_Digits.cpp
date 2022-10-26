#include<iostream>
#include<cmath>
using namespace std;

int sum_of_digits(int n)
{
    int sum=0,l,dc=0;
    while(n!=0)
    {
        l=n%10;
        sum+=l;
        n=n/10;
    }
    dc = (int)log10((double)sum)+1;
    if(dc==1)
    {
        return sum;
    }
    else
    {
        sum_of_digits(sum);
    }
}

int main()
{
    int num,ans;
    cin>>num;
    ans = sum_of_digits(num);
    cout<<ans;
    return 0;
}