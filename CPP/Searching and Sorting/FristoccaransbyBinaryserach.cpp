#include<iostream>
#include<vector>

using namespace std;

int CheckOccrans(vector<int>&arr,int&size,int&target){

int start = 0;
int end = size-1;
int mid = (start+end)/2;
 int ans = -1;
while(start<=end){

   if(arr[mid]==target){

        ans = mid;
        //then go left 
         end = mid-1;

          
   }
   else if (target>arr[mid]){
              
           start = mid+1;

   }
 else if (arr[mid]>target){
              
           end = mid-1;

   }

      mid = (start+end)/2;

    
}
return ans;


}


int main(){

vector<int>arr={1,2,3,3,3,5,6,7};
int size = arr.size();
int target =3;

     int output = CheckOccrans(arr,size,target);

     if(output==-1){

         cout<<"not found";
     }
     else{

         cout<<output;
     }

}
