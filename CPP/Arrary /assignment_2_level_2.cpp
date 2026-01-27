#include <iostream>
using namespace std;

void Pair(int arr[],int size){
  
    int i = 0;
    int ans = 0;
     
    for(i=0 ;i<size;i++){
                       
          for(int j = 0;j<size;j++){

               cout<<arr[i]<<","<<arr[j]<<endl                                     ;


          }
             

         }
        

        }


int main(){
   
    int size = 3;
    int arr[size] =  {10,20,30};
     Pair(arr,size);
     
    
}