#include<bits/stdc++.h>
using namespace std;

void removevowels(string s){
    if(s.length()==0){
        return;
    }
    for(int i=0;i<s.length();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            s[i]=s[i+1];
        }
    }
}

int main(){
    string s="Prathamesh";
    removevowels(s);
    cout<<s<<endl;

}