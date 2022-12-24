#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    int i,len,c=0;
    getline(cin,str);
    len=str.length();
    for(i=0;i<=len;i++){
        if(str[i]==32){
            c++;
        }
    }
    cout<<c+1;
    return 0;
}