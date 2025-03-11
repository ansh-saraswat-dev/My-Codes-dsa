#include <iostream>
using namespace std;

void intersection(int *input1, int *input2, int size1, int size2)
{
    for(int i = 0; i < size1; i++) {
        int element = input1[i];
        for(int j = 0; j < size2; j++) {  // Fixed `j` here
            if(element == input2[j]) {
                cout << element << " ";  // Print the matching element
                input2[j] = -1;          // Mark it so it’s not reused
                break;                  // Move to the next element in input1
            }
        }
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};
    int size1 = 5, size2 = 5;
    
    cout << "Intersection: ";
    intersection(arr1, arr2, size1, size2);
    
    return 0;
}
// OUTPUT 
// Intersection: 3 4 5 