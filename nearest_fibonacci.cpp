// program to print nearest fibonocci number for the given integer input
#include<iostream>
using namespace std;

int main(){
    int num,first=0,second=1,next=0;
    cin>>num;
    while(num>next){
        next = first + second;
        first = second;
        second = next;
    }
    if(num - first > second - num) cout<<second;
    else if(num - first==second - num){
        cout<<first<<" "<<second;
    }
    else cout<<first;
    return 0;
}