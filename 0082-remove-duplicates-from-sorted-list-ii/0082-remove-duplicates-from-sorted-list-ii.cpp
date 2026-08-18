class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        // Create a dummy node pointing to head
        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;

        while (head != nullptr) {
            // Check if current node is the start of a duplicate sequence
            if (head->next != nullptr && head->val == head->next->val) {
                // Skip all nodes with the same value
                while (head->next != nullptr && head->val == head->next->val) {
                    ListNode* temp = head;
                    head = head->next;
                    delete temp; // Free memory
                }
                
                // Delete the last matching node in the duplicate sequence
                ListNode* temp = head;
                head = head->next;
                delete temp;

                // Link prev directly to the first node after duplicates
                prev->next = head;
            } else {
                // No duplicate found for head, move prev forward
                prev = head;
                head = head->next;
            }
        }

        ListNode* newHead = dummy->next;
        delete dummy; 
        return newHead;
    }
};