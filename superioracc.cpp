#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={2,8,9,7,4,2};
    int count=0;
    bool flag=true;
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            if(j==5){
                flag=true;
            }
            if(arr[i]<=arr[j]){
                flag=false;
                break;
            }
            
        }
        cout<<"i";
        cout<<i<<endl;

        if(flag){
            count++;
        }
        cout<<"count"<<endl;
        cout<<count<<endl;
    }
    cout<<count;
}