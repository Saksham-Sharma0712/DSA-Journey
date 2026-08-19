#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr[size];
    cout << "Enter elements of array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    // Pre compute
    map<int, int> mpp;
    for (int i = 0; i < size; i++)
    {
        mpp[arr[i]]++;
    }
        for(auto it : mpp){
        cout<<it.first<<" -> "<<it.second<<endl;
        }
    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        // fetch
        cout << mpp[number] << endl;
    }
}