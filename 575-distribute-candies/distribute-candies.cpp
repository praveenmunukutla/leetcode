class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> uset(candyType.begin(), candyType.end());
        int nby2 = candyType.size()/2;
        return nby2 < uset.size() ? nby2 : uset.size();
    }
};