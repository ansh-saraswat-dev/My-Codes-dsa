class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        if(arr.size()<2) return -1;
        int lar=arr[0];
        int seclar=-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>lar){
                seclar=lar;
                lar=arr[i];
            }
            else if(arr[i]>seclar && arr[i]!=lar){
                seclar=arr[i];
            }
        }
        return seclar;
    }
};