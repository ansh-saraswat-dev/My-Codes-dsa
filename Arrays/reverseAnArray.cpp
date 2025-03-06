#include<iostream>
using namespace std;
void reverse(int arr1[],int n){
    int start=0;
    int end=n-1;
    while (start<=end)
    {
        swap(arr1[start],arr1[end]);
        start++;
        end--;
    }
}
void printArray(int arr1[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr1[i]<<" ";
    }
        
}
int main(){

    int arr1[5]={2,3,1,5,7};
    reverse(arr1,5);
    printArray(arr1,5);
    return 0;
}
// OUTPUT 
// 7 5 1 3 2 