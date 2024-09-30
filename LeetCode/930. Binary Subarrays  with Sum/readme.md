# Problem Statement

Given a binary array `nums` and an integer `goal`, return the number of non-empty **subarrays** with a sum `goal`.

A subarray is a contiguous part of the array.

**Example 1:**
```

Input: nums = [1,0,1,0,1], goal = 2

Output: 4

Explanation: The 4 subarrays are bolded and underlined below:
```
[`1,0,1`,0,1]

[`1,0,1,0`,1]

[1,`0,1,0,1`]

[1,0,`1,0,1`]

## Solution Approach

Since we are looking for **subarrays** we first think of **sliding window** 
Then to count the cases of zeros we can use **prefix sum**


