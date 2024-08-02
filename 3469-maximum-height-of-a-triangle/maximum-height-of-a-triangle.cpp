#include <map>
#include <tuple>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxHeightOfTriangle(int red, int blue) {
        memo.clear();
        return max(Util(red, blue, true, 1), Util(red, blue, false, 1));
    }

private:
    // Custom key struct for the map
    struct Key {
        int red;
        int blue;
        bool startWithRed;
        int level;

        bool operator<(const Key& other) const {
            // Define a strict weak ordering for the key
            return tie(red, blue, startWithRed, level) < tie(other.red, other.blue, other.startWithRed, other.level);
        }
    };

    map<Key, int> memo;

    int Util(int red, int blue, bool startWithRed, int level) {
        Key key = { red, blue, startWithRed, level };
        if (memo.find(key) != memo.end()) {
            return memo[key];
        }

        if (startWithRed) {
            if (red < level) return memo[key] = 0;
            return memo[key] = 1 + Util(red - level, blue, !startWithRed, level + 1);
        }

        if (blue < level) return memo[key] = 0;
        return memo[key] = 1 + Util(red, blue - level, !startWithRed, level + 1);
    }
};
