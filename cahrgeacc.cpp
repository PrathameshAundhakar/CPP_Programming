#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr1[n];
    char arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr2[i]=='P'){
            sum+=arr1[i];
        }
        else{
            sum=sum-arr1[i];
        }
    }
    cout<<"SUM"<<endl;
    cout<<sum;
}