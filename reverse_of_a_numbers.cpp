#include<iostream>
using namespace std;

int reverse(int num){
    int rev=0,rem;
    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    return rev;
}

int main(){
    int num;
    cin>>num;
    num = reverse(num);
    cout<<num;
    return 0;
}