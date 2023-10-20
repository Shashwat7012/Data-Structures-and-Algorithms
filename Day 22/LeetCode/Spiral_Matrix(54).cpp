#include <vector>

class Solution {
public:
    std::vector<int> spiralOrder(std::vector<std::vector<int>>& matrix) {
        std::vector<int> ans;

        int row = matrix.size();
        int col = matrix[0].size();

        int count = 0;
        int total = row * col;

        // Initialize indexes
        int startingrow = 0;
        int startingcol = 0;
        int endingrow = row - 1;
        int endingcol = col - 1;

        while (count < total) {
            // Traverse the starting row from left to right
            for (int index = startingcol; count < total && index <= endingcol; index++) {
                ans.push_back(matrix[startingrow][index]);
                count++;
            }
            startingrow++;

            // Traverse the ending column from top to bottom
            for (int index = startingrow; count < total && index <= endingrow; index++) {
                ans.push_back(matrix[index][endingcol]);
                count++;
            }
            endingcol--;

            // Traverse the ending row from right to left
            for (int index = endingcol; count < total && index >= startingcol; index--) {
                ans.push_back(matrix[endingrow][index]);
                count++;
            }
            endingrow--;

            // Traverse the starting column from bottom to top
            for (int index = endingrow; count < total && index >= startingrow; index--) {
                ans.push_back(matrix[index][startingcol]);
                count++;
            }
            startingcol++;
        }

        return ans;
    }
};

//complexity :- O[n][m];
