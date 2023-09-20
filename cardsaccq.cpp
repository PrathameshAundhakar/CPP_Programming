#include<bits/stdc++.h>
using namespace std;

int cards(int n){
    if(n==0){
        return 0;
    }

    int smalans=2*n+(n-1);
    return smalans+cards(n-1);
}


int main(){
    int n;
    cout<<"ENTER N";
    cin>>n;

    int ans=cards(n);
    cout<<ans;
}