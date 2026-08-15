#include<bits/stdc++.h>
using namespace std;
void f(int l,int r,int arr[]){
    if(l >= r){
        return;
    }
    swap(arr[l],arr[r]);
    f(l+1,r-1,arr);
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i < n;i++ )cin >> arr[i];
    // cout<<"Reversed array is"<<endl;
    // for(int i=n-1;i>=0;i--){
    //     cout<<arr[i]<<" ";
    // }

    // TWO PTR by reccursion
    f(0,n-1,arr);
    for(int i=0;i < n;i++) cout<<arr[i]<<" ";
}