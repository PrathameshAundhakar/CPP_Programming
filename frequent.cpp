#include<bits/stdc++.h>
using namespace std;

char freq(string s){
    unordered_map<char,int> map;
    for(int i=0;i<s.length();i++){
        map[s[i]]++;
    }
    int max=0;
    for(auto it:map){
        if(it.second>max){
            max=it.second;
        }
    }
    char temp;
    for(auto i:map){
        if(i.second==max){
            temp=i.first;
        }
    }
    return temp;
}
int main(){
    string s="bbbabba";
    int n=s.length();
    char a=freq(s);
    char x='t';
    for(int i=0;i<n;i++){
        if(s[i]==a){
            s[i]=x;
        }
    }
    cout<<s;

}