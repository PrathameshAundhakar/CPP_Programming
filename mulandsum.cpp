#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> mul;
    for(int i=1;i<=10;i++){
        mul.push_back(n*i);
    }
    for(int i=0;i<mul.size();i++){
        cout<<mul[i]<<" ";
    }
    int sum=0;
    for(int i=0;i<mul.size();i++){
        sum+=mul[i];
    }
    cout<<sum<<endl;

}