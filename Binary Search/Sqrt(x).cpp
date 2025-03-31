//leetcode #69
class Solution {
public:
    long long int binarySearch(int n){
        int s = 0, e = n;
        long long int ans = -1;
        
        while (s <= e) {  // Fix: Use "s <= e" instead of "s < e"
            long long int m = s + (e - s) / 2;
            long long int square = m * m;

            if (square == n) {
                return m;
            }
            if (square < n) {
                ans = m;  // Store possible answer
                s = m + 1; // Move to the right half
            } else {
                e = m - 1; // Move to the left half
            }
        }
        return ans;
    }

    int mySqrt(int x) {
        return binarySearch(x);
    }
};
