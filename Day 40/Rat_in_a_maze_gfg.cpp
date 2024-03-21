#include <iostream>
#include <vector>

using namespace std;

bool isSafe(int x, int y, int n, vector<vector<bool>> &visited, vector<vector<int>> &m) {
    // Implement your safety conditions here
    return (x >= 0 && x < n && y >= 0 && y < m[0].size() && !visited[x][y] && m[x][y] != 0);
}

void solve(vector<vector<int>> &m, int n, vector<string> &ans, int x, int y, vector<vector<bool>> &visited, string &path) {
    // Termination condition (example: reaching the destination)
    if (x == n - 1 && y == m[0].size() - 1) {
        ans.push_back(path);
        return;
    }

    // Your logic for exploring different directions
    int newx, newy;

    // Move down
    newx = x + 1;
    newy = y;
    if (isSafe(newx, newy, n, visited, m)) {
        path.push_back('D');
        visited[newx][newy] = true;
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
        visited[newx][newy] = false; // Backtrack
    }

    // Move other directions similarly...
    // Note: You need to have conditions for other directions (up, left, right) as well.

    // Mark the current position as unvisited (backtrack)
    visited[x][y] = false;
}

int main() {
    // Example maze (replace with your actual maze)
    vector<vector<int>> maze = {
        {1, 0, 1, 1},
        {1, 1, 1, 0},
        {0, 0, 1, 1},
        {0, 0, 0, 1}
    };

    int n = maze.size();
    int m = maze[0].size();

    // Initialize visited array
    vector<vector<bool>> visited(n, vector<bool>(m, false));

    // Start from the top-left corner (0, 0)
    int start_x = 0, start_y = 0;

    // Destination coordinates (replace with your actual destination)
    int destination_x = n - 1, destination_y = m - 1;

    // Store all possible paths
    vector<string> paths;

    // Start the recursive solving process
    string path = "";
    solve(maze, n, paths, start_x, start_y, visited, path);

    // Print the paths
    for (const string &p : paths) {
        cout << p << endl;
    }

    return 0;
}
