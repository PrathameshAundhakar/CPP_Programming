#include<bits/stdc++.h>
using namespace std;

int main(){
    int input;
    cin>>input;
    cout<<endl;
    int cut=(input*(input+1))/2;
    int ans=cut%1000000007;
    cout<<ans+1;
}