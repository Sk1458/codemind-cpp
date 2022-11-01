#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num,r;
    cin>>num;
    r=sqrt(num);
    if(r*r==num) cout<<"True";
    else cout<<"False";
    return 0;
}