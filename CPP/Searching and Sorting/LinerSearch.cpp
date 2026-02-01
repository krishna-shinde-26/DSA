#include<iostream>

using namespace std;

int linerSerach(int arr[],int&size,int&target){
        
          for(int i= 0;i<size-1;i++){

            if(arr[i] == target){

               return i;

            }
      
 
             

       }
return -1;



    }


int main(){

    int arr[] = {1,2,3,4,5};
    int size = 5 ;
          int target = 1;
      int index = linerSerach(arr,size,target);
        if(index==-1){

            cout<<"there is a no element found like that "<<endl;
            
            
        }
        
        else{
            
            cout<<"i have found the element "<< index;

        }

}