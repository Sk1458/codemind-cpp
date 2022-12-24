#include<bits/stdc++.h>
using namespace std;

int main(){
    string str,str2,vowels="aeiou";
    getline(cin,str);
    int len,c=0,i,j;
    len=str.length();
    for(i=0;i<5;i++){//vowels string
        for(j=0;j<len;j++){// input string
            if(vowels[i]==str[j]){
                c++;
            }
        }
        if(c==0){
            str2+=vowels[i];
        }
        c=0;
    }
    sort(str2.begin(),str2.end());
    if(str2.length()==0){
        cout<<0;
    }
    else{
        for(i=0;i<str2.length();i++){
            cout<<str2[i]<<" ";
        }
    }    
    return 0;    
}