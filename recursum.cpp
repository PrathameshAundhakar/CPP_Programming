#include<bits/stdc++.h>
using namespace std;


int multiplication(int m,int n){
    if(n==0){
        return 0;
    }
    int ans=multiplication(m,n-1);

    return ans+m;

}

int main(){
    int m;
    cin>>m;
    int n;
    cin>>n;
    cout<<multiplication(m,n);

}