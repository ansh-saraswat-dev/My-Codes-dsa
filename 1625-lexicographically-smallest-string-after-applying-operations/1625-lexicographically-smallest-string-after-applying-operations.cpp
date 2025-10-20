class Solution {
public:
    string addOperation(string s, int a) {
        for (int i = 1; i < s.size(); i += 2) {
            s[i] = ((s[i] - '0' + a) % 10) + '0';
        }
        return s;
    }

    string rotateOperation(string s, int b) {
        int n = s.size();
        b %= n;
        return s.substr(n - b) + s.substr(0, n - b);
    }

    string findLexSmallestString(string s, int a, int b) {
        unordered_set<string> visited;
        queue<string> q;
        string smallest = s;
        q.push(s);
        visited.insert(s);

        while (!q.empty()) {
            string curr = q.front(); q.pop();
            if (curr < smallest) smallest = curr;

            string added = addOperation(curr, a);
            string rotated = rotateOperation(curr, b);

            if (!visited.count(added)) {
                visited.insert(added);
                q.push(added);
            }
            if (!visited.count(rotated)) {
                visited.insert(rotated);
                q.push(rotated);
            }
        }
        return smallest;
    }
};
