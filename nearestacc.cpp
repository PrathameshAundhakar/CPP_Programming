#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    int m;
    cin>>m;

    int q=num/m;
    int n1=m*q;
    int n2=m*(q+1);
    int ans;
    int x=num-n1;
    int y=abs(num-n2);
    if(x<y){
        ans=n1;
    }
    else if(x>y){
        ans=n2;
    }
    cout<<ans;
}