#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    cout<<"ENter elements in string"<<endl;
    for(int i=0;i<s.size();i++){
        cin>>s[i];
    }
    // Pre-Compute
    int hash[256] = {0};
    for(int i= 0;i<s.size();i++){
        hash[s[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        char ch;
        cin>>ch;
        // fetch
        cout<<hash[ch]<<endl;
    }
}