
class Solution {
public:
    int getSecondLargest(std::vector<int> &arr) {
        if (arr.size() < 2) return -1;

        int largest = INT_MIN;
        int secondLargest = INT_MIN;

        for (int num : arr) {
            if (num > largest) {
                secondLargest = largest;
                largest = num;
            } else if (num > secondLargest && num != largest) {
                secondLargest = num;
            }
        }

        return (secondLargest == INT_MIN) ? -1 : secondLargest;
    }
};
