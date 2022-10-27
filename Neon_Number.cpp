// program to check if the given number is a neon number.
#include<iostream>
using namespace std;

int neon_number(int num){
    int sqr=0,sum=0;
    sqr=num*num;
    while(sqr!=0){
        sum+=sqr%10;
        sqr=sqr/10;
    }
    if(num==sum) return 1;
    else return 0;
}

int main(){
    int num;
    cin>>num;
    if(neon_number(num)) cout<<"Neon Number";
    else cout<<"Not Neon Number";
    return 0;
}