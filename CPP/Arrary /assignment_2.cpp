#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[5];

    cout << "enter the number " << endl;
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {

        sum = sum + arr[i];
    }

    cout << "total sum is : " << sum << endl;
}
/* 
enter the number 200 200 100 200 100 total sum is : 800

    == = Code Execution Successful == = */ 