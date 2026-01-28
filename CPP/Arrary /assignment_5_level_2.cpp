#include <iostream>
using namespace std;

void countValue(int arr[], int size)
{

     int i = 0;
     int j = size;
     int countZero = 0;
     int countOne = 0;

     for (i = 0; i < size; i++)
     {

          if (arr[i] == 0)
          {

               countZero++;
          }
          else
          {

               countOne++;
          }
     }

     cout << "Count of Zero's : " << countZero << endl;
     cout << "Count of One's  : " << countOne << endl
          << endl;

     int k = 0;
     // run until count of zero get 0
     while (countZero--)
     {

          arr[k] = 0;

          k++;
     }
     while (countOne--)
     {

          arr[k] = 1;

          k++;
     }
     int index = 0;
     for (index = 0; index < size; index++)
     {

          cout << arr[index];
     }
}

int main()
{

     int size = 10;
     int arr[size] = {0, 1, 0, 1, 1, 0, 0, 1, 0, 1};
     countValue(arr, size);
}