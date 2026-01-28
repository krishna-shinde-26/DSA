#include <iostream>
using namespace std;
void solve(int arr[],int size){

 
    int temp = arr[0];
     //left shift of array     
     for(int i=0  ;i< size;i++){

          arr[i] = arr[i+1];   
         

     }
       
     arr[size-1]= temp;
    for(int i = 0 ; i<size ;i++){

        
        cout<<" "<<arr[i];
           

    }
    
}
int main(){
   
    int size = 5;
    int arr[size] =  {10,20,30,40,50};
          
    solve(arr,size);

   
    
     
    
}