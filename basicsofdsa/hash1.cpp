#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[size];
    cout<<"Enter elements in an array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    // Pre-compute
    int hash[13]={0};
    for(int i=0;i<size;i++){
        hash[arr[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        // fetch
        cout<<hash[number]<<endl;
    }
}