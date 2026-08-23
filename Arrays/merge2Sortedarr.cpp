#include <bits/stdc++.h>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[]) {

    int i = 0;
    int j = 0;
    int k = 0;

    // Compare both arrays
    while(i < n && j < m) {

        if(arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        }
        else {
            arr3[k++] = arr2[j++];
        }
    }

    // Remaining elements of arr1
    while(i < n) {
        arr3[k++] = arr1[i++];
    }

    // Remaining elements of arr2
    while(j < m) {
        arr3[k++] = arr2[j++];
    }
}

void print(int ans[], int n) {

    for(int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }

    cout << endl;
}

int main() {

    int n;
    cin >> n;

    int m;
    cin >> m;

    int arr1[n];
    int arr2[m];
    int arr3[n + m];

    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    for(int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    merge(arr1, n, arr2, m, arr3);

    print(arr3, n + m);

    return 0;
}