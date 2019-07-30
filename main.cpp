#include <algorithm>
#include <cstring>
#include <climits>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>


#include "../utils/VectorUtils.hpp"
#include "../utils/PrintUtils.hpp"
// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"

using namespace std;

// https://leetcode.com/problems/number-of-segments-in-a-string/

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() {              // NOLINT
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    int countSegments(string s) {
        int it = 0;
        bool found_segment = false;
        int r = 0;
        while (it < s.length()) {
            // consume chars
            while (it < s.length() && s[it] != ' ') {
                found_segment = true;
                ++it;
            }
            if (found_segment) ++r;
            // consume all spaces
            while (it < s.length() && s[it] == ' ') ++it;
            found_segment = false;
        }

        return r;
    }
};

void test1() {
    string s = "Hello, my name is John";


    cout << "5 ? " << Solution().countSegments(s) << endl;

    cout << "0 ? " << Solution().countSegments("      ") << endl;

    cout << "1 ? " << Solution().countSegments("hello") << endl;
    cout << "1 ? " << Solution().countSegments("    hello") << endl;
    cout << "1 ? " << Solution().countSegments("hello    ") << endl;
    cout << "2 ? " << Solution().countSegments("    hello   sdf    ") << endl;
}


void test2() {

}

void test3() {

}