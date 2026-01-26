        #include<iostream>
        using namespace std;

        int main(){
 
    
            int number = 0 ;
            cout<<"ender the number which you need to double"<<endl;
           
            int a[10]; 
            
            for(int i = 1 ; i<10 ;i++){
         
                        cin>>a[i];
                         
                     
             
            }
             for(int i = 1 ; i<10 ;i++){
         
                       cout<<"printing the number: "<<a[i]<<endl;
                         
           
             
            }
             for(int i = 1 ; i<10 ;i++){
                              a[i] = a[i]*2;
                       cout<<"printing the double value: "<<a[i]<<endl;
                         
           
             
            }





        }
/*
Output 
    ender the number which you need to double
    1 2 3 4 5 6 7 8 9
    printing the number: 1
    printing the number: 2
    printing the number: 3
    printing the number: 4
    printing the number: 5
    printing the number: 6
    printing the number: 7
    printing the number: 8
    printing the number: 9
    printing the double value: 2
    printing the double value: 4
    printing the double value: 6
    printing the double value: 8
    printing the double value: 10
    printing the double value: 12
    printing the double value: 14
    printing the double value: 16
    printing the double value: 18
    

=== Code Execution Successful ===
*/