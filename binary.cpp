#include<bits/stdc++.h>
using namespace std;

 int binarysearch(int arr[],int n,int key){
    int start=0,end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
            if(arr[mid]==key){
                return mid;
            }
            if(arr[mid]>key){
                end=mid-1;
            }
            if(arr[mid]<key){
                start=mid+1;
            }

        
    }
    return -1;
 }
 int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key";
    cin>>key;
    int pos=binarysearch(arr,n,key);

    if(pos==-1){
        cout<<"Element not found";
    }
    else{
        cout<<"Element found at "<<pos;
    }
 }