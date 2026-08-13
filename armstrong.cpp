#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin >> num;

    int arm_no = 0;
    int count = 0;
    int n = num;
    while(n> 0){
        count++;
        n/=10;
    }
    n = num;

    while(num > 0){
        int digit= num %10;
        arm_no = arm_no + pow(digit,count);
        num/=10;
    }
    if(n == arm_no){
        cout<<"It is an armstrong no";
    }
    else{
        cout<<"Not an armstrong number";
    }
}