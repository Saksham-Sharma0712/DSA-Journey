#include<bits/stdc++.h>
using namespace std;
void Armstrong(int n){
    int cnt = 0;
    int arm_no = 0;
    int num = n;
    while(num > 0){
        cnt++;
        num/=10;
    }
    num = n;

    while(n > 0){
      int lastD = n% 10;
      arm_no = arm_no + pow(lastD,cnt);
      n/=10;
    }
    if(arm_no == num){
        cout<<"Armstrong";
    }
    else{
    cout<<"Not an Armstrong";
    }
}
int main(){
    int n;
    cin >> n;
    Armstrong(n);
}
