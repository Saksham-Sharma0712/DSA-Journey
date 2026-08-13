#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int num =2; num<= 100;num++){
        int cnt = 0;
        for(int i = 1; i <= num;i++){
            if(num % i == 0){
                cnt++;
            }
        }
        if(cnt == 2){
            cout<<num<< " ";
        }
    }
}