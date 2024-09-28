class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> a;
        map<char, int> b;

        for (char c : ransomNote) {
            a[c]++;
        }

        for (char c : magazine) {
            b[c]++;
        }

        for (const auto& pair : a) {
            char key = pair.first;
            int valueInA = pair.second;

            if (b.find(key) == b.end()) {
                return false;
            }

            int valueInB = b.at(key);

            if (valueInA > valueInB) {
                return false;
            }
        }
        return true;
    }
};
