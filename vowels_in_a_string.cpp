#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    int i,c=0;
    for(i=0;i<str1.length();i++){
        if(str2[0]==str1[i]){
            cout<<"True"<<endl;
            cout<<i;
            c++;
            break;
        }
    }
    if(c==0){
        cout<<"False";
    }
    return 0;
}