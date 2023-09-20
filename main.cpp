#include<iostream>

using namespace std;

//Function to find biggest number

int big(int arr[] ) {

   int i=0 ,biggest ;

   while (arr[i]>=0 ){

        biggest = arr[i] ;

       if( biggest < arr[i+1]){

           biggest = arr[i+1] ;

       }

       i++ ;

   }

   return biggest ;

}

int main ( ){

   int num,i=0 ,arr[20], flag = 0;

//Codes to take numbers as input

   while(num>=0){

       cout<<"Enter numbers: ";

       cin>>num;

       arr[i] = num  ;

       i++;

   }

//Codes to check number is less than 100 as well as biggest number.

   i=0;

   while(arr[i]>=0) {

      if(arr[i]<100 && arr[i]==big(arr)){

           flag = 1 ;

           break;

      }

       i++ ;

   }

   if(flag==1) {

       cout<<"\nThe highest number is " <<arr[i] ;

   }

   else cout<<"\nThe result is : 0" ;

//Codes to see the array elements for cross verification

   i=0;

   cout<<"\n\nArray contains: " ;

   while(arr[i]>=0) {

       cout<<arr[i] <<" " ;

       i++ ;

   }
   

return 0;

}

