#include <string>

class Solution {
public:
    std::string removeDuplicates(std::string s) {
        bool hasDuplicates = true;
        
        while (hasDuplicates) {
            hasDuplicates = false;
            int i = 0;
            
            while (i < s.length() - 1) {
                if (s[i] == s[i + 1]) {
                    s.erase(i, 2);  // Remove the adjacent duplicate characters.
                    hasDuplicates = true;
                } else {
                    i++;
                }
            }
        }
        
        return s;
    }
};
