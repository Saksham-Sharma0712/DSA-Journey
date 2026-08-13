#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin >> num;
    int n = num;
    int rev = 0;
    while(num > 0){
        int lastD= num % 10;
        rev = rev * 10 + lastD;
        num/=10;
    }
    if(rev == n){
        cout<<"Palindrome";
    }
    else{
        cout<< "Not Palindrome";
    }
}