#include<iostream>
using namespace std;
 Function for printing array
void printArray(int arr[],int size){
    cout<<"PRINTING THE ARRAY"<<endl;
    for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"PRINTING DONE"<<endl;
}

function for printing characters
void charprint(char ch[],int size){
    cout<<"start printing characters"<<endl;
    for(int i=0;i<=size;i++){
        cout<<ch[i]<<" ";
    }
}
int main(){
    int arr[10];
    for(int i=0;i<=9;i++){
        arr[i]=1;
        cout<<arr[i]<<" ";
    }
    int arr1[25];
        cout<<arr1[6];

    ARRAY INITILIZE
    int arr[3]={10,20,30};
    // cout<<"array at index 2 is "<<arr[0]<<" ";
    for(int i=0;i<=2;i++){
        arr[i];
        cout<<arr[i]<<" ";
    }
    int arr[5];
    for(int i=0;i<=4;i++){
        arr[i]={1};
        cout<<arr[i]<<" ";
    }
    int first[5]={10,20,30,40,50};
    printArray(first,4);

    int second[4]={2,4,6,78};
    printArray(second,3);
    char ch[5]={'a','b','c','d','e'};
    charprint(ch,4);
    char vowel[5]={'a','e','i','o','u'};
    charprint(vowel,4);
    int num[10];
    int size;
    cout<<"Enter size of array"<<endl;
    cin>>size;
    for(int i=0;i<=size;i++){
        cout<<"Enter elements of array"<<endl;
        cin>>num[i];
        cout<<num[i];
    }
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int nums[n];
    cout<<"Enter elements of array"<<endl;
    for(int i = 0; i < n; i++){
        cin>>nums[i];
    }
    for(int i = n; i > 0; i--){
        cout<<nums[i];
    }
}
