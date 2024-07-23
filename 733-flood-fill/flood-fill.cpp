
class Solution {
    int rows, cols;   // Dimensions of the image
    int condition;    // The initial color at the starting pixel
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        rows = image.size();         // Number of rows in the image
        cols = image[0].size();      // Number of columns in the image
        condition = image[sr][sc];   // The color of the starting pixel

        // If the color to be filled is the same as the original color, no need to proceed
        if (condition == color) return image;
        
        floodFillUtil(image, sr, sc, color);  // Call the recursive function
        return image;                // Return the modified image
    }

    void floodFillUtil(vector<vector<int>>& image, int sr, int sc, int color) {
        // Check if the current position is out of bounds or not the target color
        if (!(sr >= 0 && sr < rows && sc >= 0 && sc < cols && image[sr][sc] == condition))
            return;  // If not, exit the function
        
        image[sr][sc] = color;  // Change the color of the current pixel
        
        // Recursively call floodFillUtil on adjacent pixels
        floodFillUtil(image, sr + 1, sc, color);  // Down
        floodFillUtil(image, sr - 1, sc, color);  // Up
        floodFillUtil(image, sr, sc + 1, color);  // Right
        floodFillUtil(image, sr, sc - 1, color);  // Left
    }
};
