#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter k"<<endl;
    cin>>k;
    sort(arr,arr+n);
    cout<<arr[n-1-k];

}