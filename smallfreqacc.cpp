#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    unordered_map<int,int> map;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        map[arr[i]]++;
    }
    int max=0;int temp;
    for(auto it:map){
        if(it.second>max){
            max=it.second;
            temp=it.first;
        }
        if(it.second==max){
            if(it.first<temp){
                temp=it.first;
            }
        }
    }
    cout<<"smaller one with more freq"<<" ";
    cout<<temp;
}