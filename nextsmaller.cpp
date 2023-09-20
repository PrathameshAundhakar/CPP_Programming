#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter n";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    vector<int> v;
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                v.push_back(arr[j]);
                flag=true;
                break;
            }
        }
        if(!flag){
            v.push_back(-1);
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}