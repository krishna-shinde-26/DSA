#include<iostream>
#include<vector>
using namespace std;
   
int binartSearching(vector<int>&arr, int&size, int&target){
    
    int start = 0;
    int end  = size -1  ;
    int mid  =(start+end)/2;
    
     while(start<=end){
          
          if(arr[mid]==target){

               return mid;
          }
          else if(arr[mid]>target){
                  
               end = mid-1;
             

          }

          else if(target>arr[mid]){

            start = mid+1;                

          }

            mid = (start+end)/2;
     }
    return -1;
}


int main(){     
     vector<int>arr ={10,20,30,40,50,60,70};
    int target = 70; 
    int size = arr.size();

  int index =   binartSearching(arr,size,target);
   
  if (index == -1)
  {
     cout<<"index not found";
  }
  else{
             cout<<"element found at "<<index;

  }
  
 

}