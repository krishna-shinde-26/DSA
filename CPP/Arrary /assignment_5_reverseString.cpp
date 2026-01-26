        #include<iostream>
        #include<limits>
        using namespace std;
           
        void Reverse_String(int arr[],int size){
           int left = 0;
           int right = size-1;


             for( left = 0; left<=right ;left++ , right--){
                        //left<=righ 
                        // this the are compairing the index with each other 
                        // if the both index get equl it will stop 
                        // but if not it will start swap there values 
                        
                swap(arr[left],arr[right]);
             


             }
             

             for(int i = 0; i<size;i++){
                        
                cout<<arr[i];
             


             }
             

        }


        int main(){
            
            int size = 5;
            int arr[size]={2,5,6,8,9};

             Reverse_String(arr,size);

           

        }