#include<bits/stdc++.h>
using namespace std;


int profit_max(vector<int> &arr){
    int n=arr.size();
    int profit;
    int max=0;
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n;j++){
            if(arr[j]>arr[i]){
                profit=arr[j]-arr[i];
                if(profit>max){
                    max=profit;
                }
            }
        }
        
    }
    return max;

}
int main(){
    vector<int> price;
    //vector input
    int n;
    cout<<"Enter the number of days"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        price.push_back(x);
    }

    int ans=profit_max(price);
    cout<<"The maximum profit is "<<ans<<endl;
}