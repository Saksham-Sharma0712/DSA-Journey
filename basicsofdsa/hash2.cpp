#include<bits/stdc++.h>
using  namespace std;
int main(){
    string s;
    cin>>s;
    cout<<"Enter elements of string"<<endl;
    for(int i=0;i<s.size();i++){
        cin>>s[i];
    }
    // Pre-compute
    int hash[26] = {0};
    for(int i=0;i<s.size();i++){
        hash[s[i] - 'a']++;
    }
    int q;
    cin>>q;
    while(q--){
        char ch;
        cin>>ch;
        // fetch
        cout<<hash[ch - 'a']<<endl;
    }
}