#include<bits/stdc++.h>
using namespace std;

void mru(int arr[],int n,int k){
    k=k%n;
    int x=k;
    int app_id=arr[k];
    while(x>0){
        arr[x]=arr[x-1];
    }
    arr[0]=app_id;
}


int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> output;
    int k;
    cout<<"Enter the value of k: ";
    cin>>k;

    mru(arr,n,k);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}