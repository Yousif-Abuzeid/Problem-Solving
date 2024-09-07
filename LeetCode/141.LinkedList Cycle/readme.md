# What is a cycle in a linked list?

A cycle in a linked list is a series of nodes in which the last node points back to a previous node in the series. This creates a loop in the linked list.

# How do you detect a cycle in a linked list?

To detect a cycle in a linked list, you can use the Floyd's Tortoise and Hare algorithm. This algorithm uses two pointers, a slow pointer and a fast pointer. The slow pointer moves one node at a time, while the fast pointer moves two nodes at a time. If there is a cycle in the linked list, the two pointers will eventually meet at some node. If there is no cycle, the fast pointer will reach the end of the linked list.


# Problem Statement

Given a linked list, determine if it has a cycle in it.

To represent a cycle in the given linked list, we use an integer pos which represents the position (0-indexed) in the linked list where the tail connects to. If pos is -1, then there is no cycle in the linked list.

# Example

```

Input: head = [3,2,0,-4], pos = 1

Output: true

Explanation: There is a cycle in the linked list, where the tail connects to the second node.

```

# Constraints

* The number of nodes in the list is in the range [0, 10^4].

* -10^5 <= Node.val <= 10^5

* pos is -1 or a valid index in the linked list.

# Follow up: Can you solve it using O(1) (i.e. constant) memory?

# Solution

## Floyd's Tortoise and Hare Algorithm

The Floyd's Tortoise and Hare algorithm is a cycle detection algorithm that uses two pointers, a slow pointer and a fast pointer. The slow pointer moves one node at a time, while the fast pointer moves two nodes at a time. If there is a cycle in the linked list, the two pointers will eventually meet at some node. If there is no cycle, the fast pointer will reach the end of the linked list.

