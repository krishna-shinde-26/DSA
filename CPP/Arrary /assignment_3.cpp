#include<iostream>


using namespace std;

void counter(int arr[],int size){
int count_zero = 0;
int count_one = 0;
for(int i = 0 ;i<size;i++ ){

if(arr[i]==0){
 
count_zero = count_zero+1;

}
else{

    count_one = count_one+1;

}



}
cout<<"count of one's "<<count_one<<endl;
cout<<"count of zero's "<<count_zero<<endl;

}
int main(){
 
    int size = 4;
    int arr[size]={0,0,0,0};

        

counter(arr,size);




}