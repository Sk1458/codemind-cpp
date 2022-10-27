#include<iostream>
using namespace std;

int reverse_integer(int num){
    int rev=0,r;
    if(num<0){
        num=num*-1;
        while(num!=0){
            r = num%10;
            rev = rev*10+r;
            num = num/10;
        }
        rev=rev*-1;
        return rev;
    }
    else{
        while(num!=0){
            r = num%10;
            rev = rev*10+r;
            num = num/10;
        }
        return rev;
    }
}
int main(){
    int num,ans;
    cin>>num;
    ans = reverse_integer(num);
    cout<<ans;
    return 0;
}