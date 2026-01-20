/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        // iterate through original, insert new node in between old
        // on second pass, update newNode.next = next.next (nullptr if so)
        // newNode.random = oldNode.random.next
        if (!head) return nullptr;
        Node* node = head;
        while (node) {
            Node* clone = new Node(node->val);
            clone->next = node->next;
            node->next = clone;
            node = clone->next;
        }

        node = head;
        while (node) {
            Node* clone = node->next;
            clone->random = node->random ? node->random->next : nullptr;
            node = clone->next;
        }

        node = head;
        Node* newHead = head->next;
        while (node) {
            Node* clone = node->next;
            node->next = clone->next;
            clone->next = clone->next ? clone->next->next : nullptr;
            node = node->next;
        }
        return newHead;

    }
};
