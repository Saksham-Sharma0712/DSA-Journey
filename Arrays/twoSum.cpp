#include<bits/stdc++.h>
using namespace std;
// void twoSum(int arr[],int n,int target){
//     for(int i=0;i < n;i++){
//         for(int j = i+1;j < n;j++){
//             if(arr[i] + arr[j] == target){
//                 cout<<i << " "<< j;
//             }
//         }
//     }
// }

void twoSum(int arr[],int n,int target){
    unordered_map<int,int> mpp;
    for(int i=0;i < n;i++){
        int first = arr[i];
        int second = target - first;
        if(mpp.find(second) != mpp.end()){
            cout<<mpp[second]<< " "<< i;
        }
        // remember current number
        mpp[first] = i;
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i < n;i++)cin >> arr[i];
    int target;
    cin >> target;
    twoSum(arr,n,target);
}