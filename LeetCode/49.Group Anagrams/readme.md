# Problmem statement: 

Given an array of strings, group anagrams together.

what is an anagram?

An anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

Example:

Input: ["eat", "tea", "tan", "ate", "nat", "bat"],

Output:
[
  ["ate","eat","tea"],
  ["nat","tan"],
  ["bat"]
]

Note:

All inputs will be in lowercase.

The order of your output does not matter.

## Solution:

The solution is simple, we can use a dictionary to store the anagrams. The key of the dictionary will be the sorted string and the value will be the list of anagrams. We can iterate over the list of strings and sort each string and then add it to the dictionary. Finally, we can return the values of the dictionary as the output.

```python
