#include<iostream>
#include<vector>
using namespace std;

int FirstOccrans(vector<int>&arr,int&size,int&target){

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
int LastOcc(vector<int>&arr,int&size,int&target){
 int s=0;
int e = size-1;
int ans = -1;
int mid = (s+e)/2;

while (s<=e){
  
    if(arr[mid]==target){
         ans =  mid ;
         s = mid+1;

    }
 else if(target>arr[mid]){

     s = mid+1;
 }
 else if(arr[mid]>target){

    e = mid-1;
 }
mid =  (s+e)/2;
}

return ans;

}

int TotalOccarens(){
vector<int>arr ={1,2,3,3,3,3,4,5,6,7};
int size = arr.size();
int target = 3;


int frist = FirstOccrans(arr,size,target);
int last =  LastOcc(arr,size,target);
int total = (last-frist)+1;

return total;

}


int main(){

int total = TotalOccarens();
cout<<total;









}