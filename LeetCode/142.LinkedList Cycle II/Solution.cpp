class Solution {
public:
    ListNode* detectCycle(ListNode *head) {
        if (head == nullptr) {
            return nullptr;
        }

        ListNode *slow = head;
        ListNode *fast = head;

        // Phase 1: Detect if there is a cycle
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                // Cycle detected
                break;
            }
        }

        // If no cycle was detected
        if (fast == nullptr || fast->next == nullptr) {
            return nullptr;
        }

        // Phase 2: Find the start of the cycle
        ListNode *entry = head;
        while (entry != slow) {
            entry = entry->next;
            slow = slow->next;
        }

        return entry;
    }
};
