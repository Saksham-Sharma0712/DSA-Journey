#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i < n;i++) cin >> arr[i];


    // Brute force Approach

    // int slargest=-1;
    // sort(arr,arr+n);
    // int element = arr[n-1];
    // for(int i=n-2;i >= 0;i--){
    //     if(arr[i] < element){
    //         slargest=arr[i];
    //         break;        
    //     }
    // }
    // cout<<slargest;

    // Better SOL BY TWO PASS
    // int largest =arr[0];
    // for(int i=0;i < n;i++){
    //     if(arr[i] > largest ){
    //         largest =arr[i];
    //     }
    // }

    // int slargest = -1;
    // for(int i=0;i<n;i++){
    //     if(slargest < arr[i] && arr[i] != largest){
    //         slargest = arr[i];
    //     }
    // }
    // cout<<slargest;

    // Optimal Approach

    int largest =INT16_MIN;
    int slargest =INT16_MIN;
    for(int i=0;i < n;i++){
        if(arr[i] > largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > slargest && arr[i] != largest){
            slargest = arr[i];
        }
    }
    cout<< slargest;
}