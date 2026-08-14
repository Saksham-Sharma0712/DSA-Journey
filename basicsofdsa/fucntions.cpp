#include<iostream>
using namespace std;
// int res=1;
// int power(int a,int b){
//     for(int i=1;i<=b;i++){
//         res=res*a;
//     }
//     return res;
// }

// int evo(int num){
//     if(num%2==0){
//         cout<<"EVEN";
//     }
//     else{
//         cout<<"ODD";
//     }
//     return num;
// }

int main(){
    // int a,b;
    // cout<<"enter value of a";
    // cin>>a;
    // cout<<"enter value of b";
    // cin>>b;
    // int ans=power(a,b);
    // cout<<ans;
    // int num;
    // cout<<"enter value of num"<<endl;
    // cin>>num;
    // int ans=evo(num);
    // cout<<ans;
int n;
    cout<<"Enter number";
    cin>>n;
    int res=1;
   for(int i=0;i<n;i++){
    res = res * (n - i);
}
cout << res;


    return 0;
}