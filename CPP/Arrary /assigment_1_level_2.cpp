#include <iostream>
using namespace std;

int Getuqine(int arr[],int size){
  
    int i = 0;
    int ans = 0;
     
    for(i=0 ;i<size;i++){
                       
             ans^=arr[i];
             

         }
        return ans;

}


int main()
{
   
    int size = 5;
    int arr[size] =  {1,1,2,2,7};
     
   int unqiceValue = Getuqine(arr,size);
     
       cout<<unqiceValue<<endl;


}