#include<iostream>
using namespace std;

char getMaxOccChar(string s){
    int arr[26]={0};
    //create array to count characters
    for (int i = 0; i < s.length(); i++)
    {
        char ch=s[i];
        int number=0;
        number=ch-'a';
        arr[number]++;
    }
    //find mac occ character
    int maxi=-1,ans=0;
    for (int i = 0; i < 26; i++)
    {
        if(maxi < arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    return 'a'+ans;
}

int main(){

    string s;
    cin>>s;
    cout<<getMaxOccChar(s);
    return 0;
}
