#include<iostream>
#include<cmath>
using namespace std;

int reverse(int num){
    int rev,r;
    while(num!=0){
        r=num%10;
        rev=rev*10+r;
        num=num/10;
    }
    return rev;
}

int automorphic(int num){
    int sqr,digitcount,sum=0;
    digitcount = (int)log10((double)num)+1;
    if(digitcount==1){
        sqr=num*num; 
        if(num == sqr%10) return 1;
        else return 0;
    }
    else{
        while(digitcount>0){
            sum += sqr%10;
            sqr/10;
            digitcount--;
        }
        sum = reverse(sum);
    }
}

int main(){
    int num;
    cin>>num;
    if(automorphic(num)) cout<<"Automorphic Number";
    else cout<<"Not an Automorphic Number";
    return 0;
}