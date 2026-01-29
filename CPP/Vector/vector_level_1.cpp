#include<iostream>
#include<vector>


using namespace std;


int main(){

    vector<int>v;
           
    v.push_back(1);       
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    
    //copying the vector into the another vector 
    vector<int>a(v);

    for(int i = 0 ;i<v.size();i++){

         cout<<a.at(i)<<endl;

    }
    cout<<v.size();


}