class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {
            // Skip non-alphanumeric characters from the left
            while (left < right && !isalnum(s[left])) {
                left++;
            }
            // Skip non-alphanumeric characters from the right
            while (left < right && !isalnum(s[right])) {
                right--;
            }
            
            // Compare the valid characters (converted to lowercase)
            if (tolower(s[left]) != tolower(s[right])) {
                return false; 
            }
            
            // Move both pointers inward
            left++;
            right--;
        }
        
        return true; // If they cross without a mismatch, it's a palindrome!

    }
};