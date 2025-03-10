#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(vector<int>& arr){
    for (int i = 0; i < arr.size(); i++)
    {
        int index = abs(arr[i]);
        if (arr[index]<0)
        {
            return index;
        }
        arr[index]=-arr[index];
    }
    return -1;
}
int main(){
    vector<int> arr={3,1,1,4,2};
    cout<<"Duplicate number : " << findDuplicate(arr) << endl;
    return 0;
}
// OUTPUT 
// Duplicate number : 1