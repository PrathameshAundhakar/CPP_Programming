#include<bits/stdc++.h>
using namespace std;

int zeros(int n){
    if(n==0){
        return 1;
    }
    int samllans=zeros(n/10);
    int lastdigit=n%10;
    if(lastdigit==0){
        return samllans+1;
    }
    else{
        return samllans;
    }
}

double gsum(int k){
    if(k==0){
        return 1;
    }
    double smallans=gsum(k-1);
    return smallans+1.0/pow(2,k);
}

int main(){
    int n;
    cin>>n;
    cout<<zeros(n);
}