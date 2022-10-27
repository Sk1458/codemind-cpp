#include<iostream>
using namespace std;

int lcm(int n1,int n2){
    int ans;
    if(n1>n2) ans=n1;
    else ans =n2;
    while(true){
        if(ans%n1==0 && ans%n2==0){
            return ans;
            break;
        }
        ans++;
    }
}

int main(){
    int n1,n2,ans;
    cin>>n1>>n2;
    ans = lcm(n1,n2);
    cout<<ans;
    return 0;
}