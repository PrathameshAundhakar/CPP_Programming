#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> nums1,vector<int> nums2,vector<int>& output,int n,int m){
        int i=0,j=0,k=0;
        while(i<n && j<m){
            if(nums1[i]<nums2[j]){
                output[k]=nums1[i];
                i++;
                k++;
            }
            else{
                output[k]=nums2[j];
                j++;
                k++;
            }
        }
        while(i<n){
            output[k]=nums1[i];
            i++;
            k++;
        }
        while(j<m){
            output[k]=nums2[j];
            j++;
            k++;
        }
        for(auto x:output){
            cout<<output[x]<<" ";
        }        
    }
    
    int main(){
        vector<int> nums1={1,2};
        vector<int> nums2={3,4};
        int n=nums1.size();
        int m=nums2.size();
        vector<int> output(n+m,0);
        merge(nums1,nums2,output,n,m);
        for(auto x:output){
            cout<<output[x];
        }
        int s=n+m;
        int median=s/2;
        if(s%2==0){
            cout<<(double)((output[median-1]+output[median])/2);
        }
        else{
            cout<<(double)(output[median]);
        }
    }

