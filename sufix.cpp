#include<iostream>
#include<cstring>
using namespace std;

void print_sufix(char str[]){
    for(int i=strlen(str)-1;i>=0;i--){
        for(int j=strlen(str)-1;j>=i;j--){
            cout<<str[j];
        }
        cout<<endl;
    }
}

 int main(){
    char str[100];
    cout<<"Enter a string: ";
    cin>>str;
    print_sufix(str);
    return 0;
 }