#include<iostream>
using namespace std;

int amicable(int n1,int n2){
    int sum=0,i;
    for(i=1;i<n1;i++){
        if(n1%i==0) sum+=i;
    }
    if(sum==n2) return 1;
    else return 0;
}

int main(){
    int n1,n2,ans;
    cin>>n1>>n2;
    if(amicable(n1,n2)) cout<<"Amicable";
    else cout<<"Not Amicable";
    return 0;
}