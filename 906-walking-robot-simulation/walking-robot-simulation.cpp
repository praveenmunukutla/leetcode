#define edist(x, y) (((x) * (x)) + ((y) * (y)))

class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        int max_distance = 0;  // Maximum Euclidean distance squared
        unordered_map<int, unordered_set<int>> obstacle_map;  // Stores obstacles by x-coordinate

        // Populate obstacle_map with obstacles
        for (auto& obstacle : obstacles) {
            obstacle_map[obstacle[0]].insert(obstacle[1]);
        }

        int x = 0, y = 0;  // Starting position
        int direction = 0; // 0: up, 1: right, 2: down, 3: left

        // Directional deltas for (up, right, down, left)
        vector<pair<int, int>> deltas = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

        // Process each command
        for (int command : commands) {
            if (command == -1) {
                // Turn right
                direction = (direction + 1) % 4;
            } else if (command == -2) {
                // Turn left
                direction = (direction + 3) % 4;
            } else {
                // Move forward by `command` steps
                int dx = deltas[direction].first;
                int dy = deltas[direction].second;

                for (int step = 1; step <= command; ++step) {
                    int nx = x + dx;
                    int ny = y + dy;

                    // Check if next position is an obstacle
                    if (obstacle_map.count(nx) && obstacle_map[nx].count(ny)) {
                        break;  // Stop if obstacle is encountered
                    }

                    // Update position
                    x = nx;
                    y = ny;
                }

                // Update maximum distance
                max_distance = max(max_distance, edist(x, y));
            }
        }

        return max_distance;
    }
};
