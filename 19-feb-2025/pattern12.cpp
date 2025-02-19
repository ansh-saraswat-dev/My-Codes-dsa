#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i+1; j++)
        {
            cout<<j;
        }
        for (int k = 1; k <= i-1; k++)
        {
            cout<<"*";
            cout<<"*";
        }
        int num = n-i+1;
        for (int l = 1; l <= n-i+1; l++)
        {
            cout<<num;
            num--;
        }
        cout<<endl;
    }
    return 0;
}
// OUTPUT  
// 5
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1