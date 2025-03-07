#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void swapAlternative(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i+1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{

    int arr[8] = {4, 5, 23, 43, 53, 32, 43, 2};
    swapAlternative(arr, 8);
    printArray(arr, 8);

    return 0;
}
// OUTPUT 
// 5 4 43 23 32 53 2 43 