# Problem statement: 

 All DNA is composed of a series of nucleotides abbreviated as 'A', 'C', 'G', and 'T', for example: "ACGAATTCCG". When studying DNA, it is sometimes useful to identify repeated sequences within the DNA.

 Write a function to find all the 10-letter-long sequences (substrings) that occur more than once in a DNA molecule.

## Example 1:

 Input: s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT"

 Output: ["AAAAACCCCC", "CCCCCAAAAA"]

## Example 2:

 Input: s = "AAAAAAAAAAAAA"

 Output: ["AAAAAAAAAA"]

## Constraints:

 0 <= s.length <= 10^5
# s[i] is 'A', 'C', 'G', or 'T'.

## Solution:

 The problem is to find all the 10-letter-long sequences (substrings) that occur more than once in a DNA molecule.

 We Can use a sliding window of size 10 to find all the 10-letter-long sequences (substrings) that occur more than once in a DNA molecule.
 use unorderd_map using the sequence as key and the count of the sequence as value.

 