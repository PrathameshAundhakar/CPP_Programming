#include<bits/stdc++.h>
using namespace std;

void number(string s, string pat){
    if(s.length()==0){
        return;
    }
    for(int i=0;i<s.length();i++){
        bool flag=true;
        for(int j=0;j<pat.length();j++){
            
            if(pat[j]=='#'){
                continue;
            }
            if(s[i+j]!=pat[j]){
                flag=false;
                break;
            }
            if(pat[j]=='#'){
                continue;
            }
        }
        if(flag){
            cout<<i;
        }
    }
}

int main(){
    string s;
    cin>>s;
    string pat;
    cin>>pat;
    number(s,pat);
    return 0;
}