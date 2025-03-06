#include<iostream>
using namespace std;
bool linearSearch(int arr[],int size,int k){
    
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == k)
        {
            return 1;
        }
    }
    return 0;
}

int main(){

    int arr[5]={27,2,1,3,67};
    cout<<"Enter the value u want to search:-"<<endl;
    int k;
    cin>>k;
    bool ans = linearSearch(arr,5,k);
    if (ans)
    {
        cout<<"key is present"<<endl;
    }
    else
        cout<<"key is not present"<<endl;
    
    return 0;
}

// OUTPUT 
// Enter the value u want to search:-
// 4
// key is not present