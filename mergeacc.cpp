#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1;
    int n2;
    cout<<"enter n1";
    cin>>n1;
    cout<<"enter n2";
    cin>>n2;
    int arr1[n1];
    int arr2[n2];
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cout<<endl;
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    int i=0,j=0;
    int x=n1+n2;
    int a[x];
    int k=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            a[k]=arr1[i];
            i++;
            k++;
        }
        else{
            a[k]=arr2[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        a[k]=arr1[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=arr2[j];
        j++;
        k++;
    }

    for(int i=0;i<x;i++){
        cout<<a[i];
    }
}