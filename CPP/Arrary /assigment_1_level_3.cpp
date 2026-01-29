#include <iostream>
#include<limits>
using namespace std;


int main(){

int size  = 6   ;
int arr[size]={1,2,-2,3,-1,-4};
int j =0;
for(int i =0;i<size;i++){


           if(arr[i]<0){

             swap(arr[i],arr[j]);
             j++;
           }
 
        
}

for (int i = 0; i < size; i++)
{
       cout<<arr[i];
}

}






