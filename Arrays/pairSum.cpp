#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int n, int target) {
    vector<vector<int>> ans; // Fix: Changed from int to vector of vectors

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                vector<int> temp; // Fix: Changed from int to vector<int>
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp); // Add the pair to the answer
            }
        }
    }

    sort(ans.begin(), ans.end()); // Sort pairs in ascending order
    return ans;
}

int main() {
    vector<int> arr = {1, 3, 2, 2, 4, 5};
    int target = 4;

    vector<vector<int>> result = pairSum(arr, arr.size(), target);

    for(const auto &pair : result) {
        cout << "[" << pair[0] << ", " << pair[1] << "] ";
    }

    return 0;
}
// OUTPUT 
// [1, 3] [2, 2] 
