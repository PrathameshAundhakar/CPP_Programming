#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="a2b2c2d1";
    string ans="";
  
    int len=s.length();
    for(int i=0;i<len-1;i+2){
        for(int j=1;j<len;j+2){
            int a =s[j]-'0';
            while(a>0){
                ans+=s[i];
                a--;
            }
        }

    }
    cout<<ans;

}