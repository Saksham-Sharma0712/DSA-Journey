#include<bits/stdc++.h>
using namespace std;
void Maxm(int arr[],int n){
    int max=INT16_MIN;
    for(int i=0;i < n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout<<max<<endl;
}

void Minm(int arr[],int n){
    int min=INT16_MAX;
    for(int i=0;i < n;i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout<<min<<endl;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i < n;i++){
        cin >> arr[i];
    }
    Maxm(arr,n);
    Minm(arr,n);
}
