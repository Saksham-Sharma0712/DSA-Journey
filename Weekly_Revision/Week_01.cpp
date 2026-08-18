#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    // for(int i=0;i < n;i++){
    //     for(int j=0;j < n;j++){
    //         cout<<j+1<<" ";
    //     }
    //     cout<<endl;
    // }

    //     for(int i=0;i < n;i++){
    //          char ch = 'A';
    //     for(int j=0;j < n;j++){
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    // }

    // for(int i=0;i < n;i++){
    //     for(int j=0;j < i+1;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }

    
    // for(int i=0;i < n;i++){
    //     for(int j=0;j < i+1;j++){
    //         cout<<i+1<<" ";
    //     }
    //     cout<<endl;
    // }

    // char ch='A';
    // for(int i=0;i < n;i++){
    //     for(int j=0;j < i+1;j++){
    //         cout<<ch<<" ";
    //     }
    //     ch++;
    //     cout<<endl;
    // }

    // for(int i=0;i < n;i++){
    //     int num=1;
    //     for(int j=0;j < i+1;j++){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }

      for(int i=0;i < n;i++){
        for(int j=i+1;j >0;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}
