#include<bits/stdc++.h>
using namespace std;
int main(){
int sum=0;
    
    int n=6;
    int arr[]={-1,6,4,3,2,-5};
    vector<int> ans;
    for(int i=0;i<n;i++){
        int count=1;
        if(arr[i]>0){
            ans.push_back(1);
        }
        else if(i==n-1 && arr[i]<0){
            ans.push_back(0);
        }
        else{
            sum=arr[i];
            for(int j=i+1;j<n;j++){
                sum=sum+arr[j];
                count++;
                if(sum>0){
                    ans.push_back(count);
                    break;
                }

            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}