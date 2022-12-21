#include<bits/stdc++.h>
using namespace std;

int count_distinct_characters(string &str, int len){
    map<char,int> mp;
    for (int i=0; i<len; i++){
        if (str[i] == ' ')continue;
    	mp[str[i]]++;                                                                                                                                                                                  
	}
	return mp.size();
}

int main(){
    string str;
    int len,count;
    getline(cin,str);
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    len=str.length();
    count = count_distinct_characters(str,len);
    cout<<count;
    return 0;
}

//Madam Arora teaaches Malayalam