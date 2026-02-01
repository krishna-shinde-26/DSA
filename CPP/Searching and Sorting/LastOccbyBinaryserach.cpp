#include<iostream>
#include<vector>
using namespace std;

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

int main(){

vector<int>arr ={1,2,3,3,3,3,4,5,6,7};
int size = arr.size();
int target = 4;

int output =  LastOcc(arr,size,target);

 if(output == -1){

      cout<<"velue is not found";

 }
      else{
        cout<<"value founded on index : "<<output;
      }
}