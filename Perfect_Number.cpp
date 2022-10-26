// program to check if the given number is perfect number
#include<iostream>
using namespace std;

int perfect_number(int num)
{
    int i,sum=0;
    for(i=1; i<num; i++){
        if(num%i==0){
            sum+=i;
        }
    }
    if(sum == num) return true;
    else return false;
}

int main()
{
    int num;
    cin>>num;
    if(perfect_number(num)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}