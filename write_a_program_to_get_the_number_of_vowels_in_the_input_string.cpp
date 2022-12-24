#include<bits/stdc++.h>
using namespace std;

int main(){
    string str,vowels="aeiouAEIOU";
    int c=0,i,j;
    getline(cin,str);
    for(i=0;i<vowels.length();i++){
        for(j=0;j<str.length();j++){
            if(vowels[i]==str[j]){
                c++;
            }
        }
    }
    cout<<c;
    return 0;
}