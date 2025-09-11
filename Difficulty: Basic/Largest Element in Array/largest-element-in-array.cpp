class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int temp=arr[0];
        for(int i=0;i<arr.size();i++){
            if(arr[i]>temp){
                temp = arr[i];
            }
        }
        return temp;
    }
};
