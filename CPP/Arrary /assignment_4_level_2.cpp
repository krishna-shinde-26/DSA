#include <iostream>
using namespace std;

void  countValue(int arr[],int size){
  
    int i = 0;
    int countZero = 0;
     int countOne = 0;
    for(i=0 ;i<size;i++){
               if(arr[i]==0){

                      countZero = countZero+1;
            

               }
                else {

                    countOne = countOne+1;


                }


          }
             cout<<"Cout of zeros: "<<countZero<<endl;
             cout<<"Cout of Ones : "<<countOne<<endl;

         }
        

        


int main(){
   
    int size = 3;
    int arr[size] =  {0,0,1};
     countValue(arr,size);
     
    
}