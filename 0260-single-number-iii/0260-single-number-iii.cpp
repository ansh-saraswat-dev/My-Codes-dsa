class Solution {
public:
    vector<int> singleNumber(vector<int>& arr) {
        int n=arr.size();
        long long a=0;
        for(int i=0;i<n;i++){
            a=a^arr[i];
        }
        a=1ll*a & 1ll*(~(1ll*a-1));
        int num1=0;
        int num2=0;
        for(int i=0;i<n;i++){
            if((arr[i]&a)==0) num1=num1^arr[i];
            else num2 =num2^arr[i];
        }
        return {num1,num2};
    }
};