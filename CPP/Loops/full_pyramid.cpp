
    #include<iostream>
    using namespace std;
    int main(){

    int n=9;

    for(int i = 0;i<n;i++){


    for(int j = 0;j<n-i-1;j++){

    cout<<" ";



    }
    for(int k = 0 ; k<i;k++){

        cout<<"* ";
    }
    cout<<endl;

    }




    for(int i = n;i>0;i--){


    for(int j = 0;j<n-i-1;j++){

    cout<<" ";



    }
    for(int k = 0 ; k<i;k++){

        cout<<"* ";
    }
    cout<<endl;







    }



    }


    /*
    output 
    [Running] cd "/home/krishna/Coding area/DSA/CPP/Loops/" && g++ Triangler_aryramid.cpp -o Triangler_aryramid && "/home/krishna/Coding area/DSA/CPP/Loops/"Triangler_aryramid
        
        * 
        * * 
        * * * 
    * * * * 
    * * * * * 
    * * * * * * 
    * * * * * * * 
    * * * * * * * * 
    * * * * * * * 
    * * * * * * 
    * * * * * 
        * * * * 
        * * * 
        * * 
        * 
    */