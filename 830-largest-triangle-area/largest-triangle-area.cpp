class Solution {
public:
    // Method to calculate the area of a triangle formed by three points
    double largestTriangleArea(vector<vector<int>>& points) {
        double res = 0; // Initialize the maximum area result to 0
        
        // Iterate through all unique triplets of points
        for (int i = 0; i < points.size(); ++i) {
            for (int j = i + 1; j < points.size(); ++j) {
                for (int k = j + 1; k < points.size(); ++k) {
                    // Calculate the area using the Shoelace formula
                    double area = 0.5 * abs((points[i][0]*(points[j][1]-points[k][1]))+
                                             (points[j][0]*(points[k][1]-points[i][1]))+
                                             (points[k][0]*(points[i][1]-points[j][1]))
                                            );
                    // Update the maximum area found
                    res = max(res, area);
                }
            }
        }

        return res; // Return the largest area found
    }
};
