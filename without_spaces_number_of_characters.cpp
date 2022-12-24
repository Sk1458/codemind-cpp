#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    int i,c=0;
    for(i=0;i<str.length();i++){
        if(str[i]==' ') c++;
    }
    cout<<str.length()-c;
    return 0;
}