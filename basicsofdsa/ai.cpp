#include<bits/stdc++.h>
using namespace std;
int main(){
   
    // int cnt=0;
    // for(int i = 1; i <= num;i++){
    //     if(num % i ==0){
    //         cnt++;
    //     }
    // }
    // if(cnt == 2){
    //     cout<<"PRIME";
    // }
    // else{
    //     cout<<"NOT PRIME";
    // // }
    // int n = num;
    // int rev = 0;
    // while(num > 0){
    //     int lastDigit = num % 10;
    //     rev = rev * 10 + lastDigit;
    //     num/=10;
    // }
    // if(rev == n){
    //     cout << "Palindorme";
    // }
    // else{
    //     cout<<"Not a Palindrome";
    // }
    // cout<<rev;
    // int num;
    // cin>>num;
    // int cnt = 0;
    // int arm_no = 0;
    // int n = num;
    // while(n > 0){
    //     cnt++;
    //     n/=10;
    // }
    // n = num;
    // while (num > 0)
    // {
    //     int lastDigit = num % 10;
    //     arm_no = arm_no + pow(lastDigit,cnt);
    //     num/=10;
    // }
    // if(arm_no == n){
    //     cout<<"Armstrong";
    // }
    // else{
    //     cout<<"Not an Armstrong no";
    int num;
    cin >> num;

    int cnt = 0;
    int arm_no = 0;
    int n = num;

    // count digits
    while (n > 0) {
        cnt++;
        n /= 10;
    }

    n = num;

    // calculate Armstrong sum
    while (num > 0) {
        int lastDigit = num % 10;
        arm_no = arm_no + pow(lastDigit, cnt);
        num /= 10;
    }

    if (arm_no == n) {
        cout << "Armstrong";
    } else {
        cout << "Not an Armstrong no";
    }

    return 0;
}