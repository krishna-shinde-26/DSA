#include<iostream>


using namespace std;


int main(){

               //here it will use the " 0 "  th base indexing 
               //which start with 0 and end with n-1 
   long long arr[60]= {2,5,2,3,4,5,6,7,8,9,2,5,2,3,4,5,6,7,8,9,2,5,2,3,4,5,6,7,8,9,2,5,2,3,4,5,6,7,8,9,
        2,5,2,3,4,5,6,7,8,9,2,5,2,3,4,5,6,7,8};
                int leaght = sizeof(arr)/sizeof(arr[0]);
 
                 for(int j ; j < leaght-1;j++){
            cout<<" : "<<arr[j];

                 }
        cout<<endl;
        
        
        // it will return the address of frist memory location
        cout<<arr<<endl;
        
        //Here we are giving the sizeof function with give the output in the Byte format 
        
        cout<<"Size of arr: "<<sizeof(arr)<<endl;
        
        //logic here total size is 8 so we are doing the dividing it with 4 byte 
        //so it give it 2 besuce it have to 2 like 8/4 = 2
        
        cout<<"lenght "<< sizeof(arr)/sizeof(arr[0])<<endl;

//here it using " 1 " based indexing for accessing the verible 
//which start with the 1 and end with 0 


 int arr2[] = {1,2,3,4,5,6,8,4,7,8,9,4,23,34,5};
 int arrleaght = sizeof(arr2)/sizeof(arr2[0]);
 for(int i=1 ;i<arrleaght;i++){ 
     
     cout<<" : "<<arr2[i] ;
     


 }















 
}