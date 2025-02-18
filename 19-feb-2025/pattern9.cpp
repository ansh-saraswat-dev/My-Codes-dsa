#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    char cj;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cj='A'+j-1;
            cout<<cj;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}
// OUTPUT
// 3
// ABC
// ABC
// ABC