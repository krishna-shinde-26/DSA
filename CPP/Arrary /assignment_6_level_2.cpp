#include <iostream>
using namespace std;
void solve(int arr[], int size)
{

    int temp = arr[size - 1];
     //Right Shift 
    for (int i = size; i > 0; i--)
    {

        arr[i] = arr[i - 1];
    }

    arr[0] = temp;
    for (int i = 0; i < size; i++)
    {

        cout << " " << arr[i];
    }
}
int main()
{

    int size = 5;
    int arr[size] = {10, 20, 30, 40, 50};

    solve(arr, size);
}