#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin >> num;
    // if(num <= 1){
    //     cout<<"NOT prime";
    // }
    // else if(num>1){
    //     for(int i =2; i < num;i++){
    //         if(num % i ==0){
    //             cout<<"Not prime";
    //         }
    //         else{
    //             cout<<"Prime";
    //             break;
    //         }
    //     }
    // }
    int cnt = 0;
    for(int i =1; i <= num;i++){
        if(num % i == 0){
            cnt++;
        }
    }
            if(cnt == 2){
            cout<< "Prime";
        }
        else{
            cout<<"Not Prime";
        }
}