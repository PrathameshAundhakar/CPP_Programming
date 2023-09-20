#include<iostream>

using namespace std;

int help(int n,int prev,int i,int arr[]){
    if(i==n){
      return 0;
    }
    if (arr[i]>prev){
      return max(1+help(n,arr[i],i+1,arr),help(n,prev,i+1,arr));
      
    }
    return help(n,prev,i+1,arr);
  
}

//iterative approach
// int help(int n,int arr[]){
//   int dp[n];
//   dp[0]=1;
//   for(int i=1;i<n;i++){
//     dp[i]=1;
//     for(int j=0;j<i;j++){
//       if(arr[j]<arr[i]){
//         dp[i]=max(dp[i],dp[j]+1);
//       }
//     }
//   }
//   int ans=0;
//   for(int i=0;i<n;i++){
//     ans=max(ans,dp[i]);
//   }
//   return ans;
// }


int main(){

  int arr[]={2,8,1,4,6,3,9};
  int n=sizeof(arr)/sizeof(arr[0]);

  cout<<help(n,-1,0,arr);
  
  
  //4
    
}