#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverse(vector<char>& s, int left, int right) {
    while (left < right) {
        swap(s[left++], s[right--]);
    }
}

void reverseWords(vector<char>& s) {
    int n = s.size();

    // Step 1: Reverse the entire string
    reverse(s, 0, n - 1);

    // Step 2: Reverse each word
    int start = 0;
    for (int i = 0; i <= n; i++) {
        if (i == n || s[i] == ' ') {
            reverse(s, start, i - 1);
            start = i + 1;
        }
    }
}

int main() {
    vector<char> s = {'t','h','e',' ','n','a','m','e',' ','i','s',' ','a','n','s','h'};
    reverseWords(s);

    for (char c : s) cout << c;
    cout << endl;

    return 0;
}
