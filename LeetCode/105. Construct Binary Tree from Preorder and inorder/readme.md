# Problem Statement: https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/

## Problem Statement
Given preorder and inorder traversal of a tree, construct the binary tree.

Note:
You may assume that duplicates do not exist in the tree.

For example, given
```
preorder = [3,9,20,15,7]
inorder = [9,3,15,20,7]
```

Return the following binary tree:
```
    3
   / \
  9  20
    /  \
   15   7
```

## Solution

The solution is to use the preorder traversal to get the root of the tree and then use the inorder traversal to get the left and right subtree of the root. We can then recursively build the left and right subtree using the same logic.

The time complexity of this solution is O(n) where n is the number of nodes in the tree.

