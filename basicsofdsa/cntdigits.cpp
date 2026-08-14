#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin >> num;
    int cnt = 0;
    while(num > 0){
        cnt++;
        num/=10;
    }
    cout << cnt;
}