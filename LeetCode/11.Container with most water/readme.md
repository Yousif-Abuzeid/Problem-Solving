# Problem Statment

You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines, which, together with the x-axis forms a container, such that the container contains the most water.

Return the area of water it can contain.

Notice that you may not slant the container.

# Example 1:

```

Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49

```

# Constraints:

* n == height.length
* 2 <= n <= 3 * 10^4
* 0 <= height[i] <= 3 * 10^4

# Follow up: Could you solve this in O(n) time complexity?

# Solution

## Brute Force

The brute force solution is to calculate the area of all possible containers and return the maximum area. This solution has a time complexity of O(n^2).

## Two Pointer Approach

The two pointer approach is to use two pointers, one at the start and one at the end of the array. The area of the container is the minimum of the two heights multiplied by the distance between the two pointers. The maximum area is the maximum of the current area and the maximum area so far. The time complexity of this solution is O(n).



