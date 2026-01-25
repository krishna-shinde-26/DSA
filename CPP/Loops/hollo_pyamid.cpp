#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = n; i >= 1; i--) {

      for(int j = 0 ; j<n-i;j++){
          cout<<" ";
      }
      for(int k = 0 ; k<i;k++){
          
          if(k==0||k==i-1){
              cout<<"* ";
              
              
          }
          else{
              
              cout<<" ";
              
          }
      }
                cout<<endl;

    }

    return 0;
}
/*[Running] cd "/home/krishna/Coding area/DSA/CPP/Loops/" && g++ hollo_pyamid.cpp -o hollo_pyamid && "/home/krishna/Coding area/DSA/CPP/Loops/"hollo_pyamid
*      * 
 *    * 
  *  * 
   ** 
    * 
*/