#include<bits/stdc++.h>
using namespace std;
void Lcm(int n1, int n2){
    int lcm = max(n1,n2);
    while (true)
    {
        if(lcm % n1 == 0 && lcm % n2 == 0){
            break;
        }
        lcm++;
    }
    cout<<lcm;
    
}
int main(){
    int n1,n2;
    cin >> n1 >> n2;
    Lcm(n1,n2);
}
