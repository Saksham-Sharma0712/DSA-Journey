#include<bits/stdc++.h>
using namespace std;
void changeArr(int arr[], int n){
    cout<<"In funcn"<<endl;
    for(int i = 0; i < n; i++){
        arr[i]= 2* arr[i];
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    // int max = INT_MIN;
    // int min = INT_MAX;
    // for(int i = 0; i < n; i++){
    //     cin>>arr[i];
    //     if(arr[i] > max){
    //         max = arr[i];
    //     }
    //     if(min> arr[i]){
    //         min = arr[i];
    //     }
    // }
    // cout<<"The largest elem is "<< max;
    // cout<<"The smallest elem  is"<<min;
    for(int i =0; i < n;i++){
        cin >> arr[i];
    }
    changeArr(arr,n);
    cout<<" In main funcn"<<endl;
    for(int i=0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}