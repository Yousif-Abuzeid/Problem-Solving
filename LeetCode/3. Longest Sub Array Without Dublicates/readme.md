# Problem Statment

Given a string `s`, find the length of the longest substring without repeating characters.

## Example 1:

```
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
```

## Example 2:

```
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
```

## Example 3:

```

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
```

## Constraints:

* `0 <= s.length <= 5 * 10^4`
* `s` consists of English letters, digits, symbols and spaces.

# URL
    https://leetcode.com/problems/longest-substring-without-repeating-characters/

# Solution

## Explanation of the Longest Substring Without Repeating Characters Solution

## Approach: Sliding Window with a Set

To solve this problem, we can use a sliding window technique combined with a set to efficiently track the characters in the current substring. The sliding window will help us maintain a range of characters (`left` to `right` pointers) where no characters are repeated.

### Key Concepts

- **Sliding Window**: This technique involves expanding a window by moving the `right` pointer across the string. If a repeat character is found, we contract the window by moving the `left` pointer to remove the duplicate.

- **Set Data Structure**: A set is used to track the characters currently in the window. It allows for quick checks and deletions, making it suitable for detecting and handling duplicates.

### Detailed Steps

1. **Initialization**:
   - Start with an empty set `MyChars` to store characters.
   - Initialize `maxLen` to keep track of the maximum length of the substring without repeating characters.
   - Use two pointers, `left` and `right`, both starting at the beginning of the string.

2. **Expand the Window**:
   - Move the `right` pointer across the string from left to right.
   - For each character `s[right]`, check if it is already in the set `MyChars`.

3. **Handle Repeating Characters**:
   - If `s[right]` is already in the set, it means we have found a repeat within the current window.
   - To remove the repeat, move the `left` pointer to the right, removing characters from the set until `s[right]` is no longer in the set.
   - This ensures that the window only contains unique characters.

4. **Update Maximum Length**:
   - After ensuring the current window is valid (i.e., contains no repeating characters), calculate the length of the current window as `right - left + 1`.
   - Update `maxLen` if the current window length is greater than the previously recorded maximum.

5. **Return the Result**:
   - After processing the entire string, `maxLen` will hold the length of the longest substring without repeating characters.

### Code Implementation

```cpp
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.empty()) {
            return 0;
        }

        int maxLen = 0;
        int left = 0;
        set<char> MyChars;

        for (int right = 0; right < s.size(); right++) {
            // If the character is already in the set, move the left pointer
            // and remove characters until the duplicate is removed.
            while (MyChars.count(s[right])) {
                MyChars.erase(s[left]);
                left++;
            }

            // Add the current character to the set.
            MyChars.insert(s[right]);

            // Update the maximum length of the substring found.
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};

