#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;

    int n = num;
    int cnt = 0;
    int arm_no = 0;

    // Count digits
    while(n > 0){
        cnt++;
        n /= 10;
    }

    n = num;

    // Calculate Armstrong sum
    while(num > 0){
        int lastDigit = num % 10;
        arm_no = arm_no + pow(lastDigit, cnt);
        num /= 10;
    }

    if(arm_no == n){
        cout << "Armstrong";
    }
    else{
        cout << "Not an Armstrong number";
    }

    return 0;
}
