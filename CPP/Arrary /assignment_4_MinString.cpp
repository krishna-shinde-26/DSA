#include<iostream>


using namespace std;

void minValue(int arr[],int size){

int MinValue = 0;
for(int i = 0 ; i<size;i++){

    if(arr[0]> arr[i]){

     MinValue = arr[i];    

    }



}

cout<<"min Value is : "<<MinValue<<endl;
}



int main(){

    int size = 5;

    int arr[size]={6,4,3,2,0};

    minValue(arr,size);

}