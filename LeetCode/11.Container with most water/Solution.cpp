#include <vector>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxArea = 0;

        while (left < right) {
            int minHeight = min(height[left], height[right]);
            int currentArea = minHeight * (right - left);
            maxArea = max(maxArea, currentArea);

            // Move the pointer with the smaller height
            if (height[left] <= height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxArea;
    }
};
