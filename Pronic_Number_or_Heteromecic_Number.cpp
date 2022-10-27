#include<iostream>
using namespace std;

int main(){
    int num,i,j,c=0;
    cin>>num;
    for(i=0,j=1;i<j,j<num; i++,j++){
        if(i*j==num){
          cout<<"YES";
          c++;
          break;
        } 
    }
    if(c==0){
        cout<<"NO";
    } 
    return 0;
}