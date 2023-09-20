#include<bits/stdc++.h>
using namespace std;

int countvowels(string s){
    if(s.length()==0){
        return 0;
    }
    int smallans= countvowels(s.substr(1));
    if(s[0]=='a' || s[0]=='e' || s[0]=='i' || s[0]=='o' || s[0]=='u'){
        return 1+smallans;
    }
    else{
        return smallans;
    }
}


int main(){
    string s="Prathamesh";
}