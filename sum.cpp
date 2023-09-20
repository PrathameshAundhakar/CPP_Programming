#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }
    int d,s1=0;

    d=n%10;
    s1 = d + sum(n/10);
    
    return s1;
}
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    cout<<sum(n);
}