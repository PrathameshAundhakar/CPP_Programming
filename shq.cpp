#include<bits/stdc++.h>
using namespace std;

void countelement(int arr[],int n){
    int temp[n];
    
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<i;j++){
            if(arr[j]>arr[i]){
                count++;
            }
        }
        temp[i]=count;
    }
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
}

int main(){
    int arr[]={2,9,5,1,10,3};
    int n=sizeof(arr)/sizeof(arr[0]);

    countelement(arr,n);
}