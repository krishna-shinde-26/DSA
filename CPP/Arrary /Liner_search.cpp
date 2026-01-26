        #include<iostream>
        using namespace std;

        int main(){
            
           int n = 5;
           int arr[n]{1,2,7,8,9};
            int target = 7;
                bool flag = 0;
               for(int i = 0 ; i<n;i++){
                if(arr[i] == target){
                  flag = 1;
                    break;
                }
            
               }

                 if(flag == 1 ){

                    cout<<"target is founded";

                 }

                 else {
                    
                    cout<<"target is founded";
                    
                 }
            


               }


   /*      
   
   output :
   
   [Running] cd "/home/krishna/Coding area/DSA/CPP/Arrary /" && g++ Liner_search.cpp -o Liner_search && "/home/krishna/Coding area/DSA/CPP/Arrary /"Liner_search
target is founded
[Done] exited with code=0 in 0.225 seconds
 
[Running] cd "/home/krishna/Coding area/DSA/CPP/Arrary /" && g++ Liner_search.cpp -o Liner_search && "/home/krishna/Coding area/DSA/CPP/Arrary /"Liner_search
target is founded
[Done] exited with code=0 in 0.243 seconds
 */






    