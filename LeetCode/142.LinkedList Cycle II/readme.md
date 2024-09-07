# Problem statement

You are given a linked list with a cycle. Find the starting node of the cycle.

# Example

```

Input: head = [3,2,0,-4], pos = 1

Output: 1

Explanation: The cycle starts at the second node.

```

# Constraints

* The number of nodes in the list is in the range [0, 10^4].

* -10^5 <= Node.val <= 10^5

* pos is -1 or a valid index in the linked list.

# Follow up: Can you solve it using O(1) (i.e. constant) memory?

# Solution

## Floyd's Tortoise and Hare Algorithm

The Floyd's Tortoise and Hare algorithm is a cycle detection algorithm that uses two pointers, a slow pointer and a fast pointer. The slow pointer moves one node at a time, while the fast pointer moves two nodes at a time. If there is a cycle in the linked list, the two pointers will eventually meet at some node. If there is no cycle, the fast pointer will reach the end of the linked list.

To find the starting node of the cycle, we first need to find the meeting point of the two pointers. Once we have the meeting point, we reset one of the pointers to the head of the linked list and move both pointers one node at a time until they meet at the starting node of the cycle.

The time complexity of this solution is O(n), where n is the number of nodes in the linked list. The space complexity is O(1) since we are using only two pointers.
