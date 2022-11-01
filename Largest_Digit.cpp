#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num,digits,temp=0,ldigit;
    cin>>num;
    digits = (int)log10((double)num)+1;
    while(digits>0){
        ldigit=num%10;
        if(ldigit>temp){
            temp=ldigit;
        }
        num=num/10;
        digits--;
    }
    cout<<temp;
    return 0;
}