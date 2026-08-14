#include<bits/stdc++.h>
using namespace std;
int linSer(int arr[], int n,int target){
    for(int i =0; i < n; i++){
        if(target == arr[i]){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cin >> n;
    int target ;
    cin >> target;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int ans= linSer(arr,n,target);
    if(ans == -1){
        cout<<"Elem nmot found";
    }
    else{
        cout<<"Elem found at index "<<ans;
    }
    // int arr[n];
    // for(int i = 0; i < n; i++){
    //     cin >> arr[i];
    // }
    // for(int i =0; i < n; i++){
    //     if(target == arr[i]){
    //         cout<<i;
    //     }
    // }
}