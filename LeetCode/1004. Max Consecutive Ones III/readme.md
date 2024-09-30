# Problem statement

Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.

Example 1:

```

Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
Output: 6
Explanation: [1,1,1,0,0,1,1,1,1,1,1]

```

Example 2:

```

Input: nums = [0,0,0,1,1,1,1,0,0,0,0,1,1,1,1,1,1,1], k = 3
Output: 10
Explanation: [0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1]
```

# Solution Approach

## Sliding Window

The problem is a variation of the sliding window problem. We can use the sliding window approach to solve this problem. We will keep track of the number of zeros in the window and if the number of zeros exceeds k, we will shrink the window from the left side. We will keep track of the maximum window size and return it as the answer.

### Complexity Analysis

- `Time`: O(n)
- `Space`: O(1)




