#include<bits/stdc++.h>
using namespace std;

int  main(){
    int count=0;
    int n;
    cin>>n;
    int arr[n];
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]!=0){
            v.push_back(arr[i]);
        }
        else{
            count++;
        }
    }
    for(int i=0;i<count;i++){
        v.push_back(0);
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    
}