class Solution {
    int maxH = INT_MIN;
public:
    int maxHeightOfTriangle(int red, int blue) {
        return max(maxHeightOfTriangleUtil(red,blue,true,1), maxHeightOfTriangleUtil(red,blue,false,1));
    }

    int maxHeightOfTriangleUtil(int red, int blue, bool startWithRed, int level){
        if(startWithRed){
            if(red < level) return 0;
            return 1 + maxHeightOfTriangleUtil(red-level, blue, !startWithRed, level+1);
        }

        if(blue < level) return 0;
        return 1 + maxHeightOfTriangleUtil(red, blue-level, !startWithRed, level+1);
    }
};