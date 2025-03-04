/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        int size1 = 0, size2 = 0;
        ListNode t1 = l1, t2 = l2;
        ListNode big, small, head;
        boolean carry = false;
        while (l1 != null) {
            size1++;
            l1 = l1.next;
        }
        while (l2 != null) {
            size2++;
            l2 = l2.next;
        }
        if (size1 > size2) {
            big = t1;
            small = t2;
        } else {
            big = t2;
            small = t1;
        }
        head = big;

        while (small != null) {
            big.val += small.val;
            if (carry) big.val++;
            if (big.val >= 10) {
                big.val %= 10;
                carry = true;
                if (big.next == null) {
                    big.next = new ListNode(1);
                    carry = false;
                    break;
                }
            } else 
                carry = false;
            
            big = big.next;
            small = small.next;
        }

        while (carry && big != null) {
            big.val++;
            if (big.val >= 10) {
                big.val %= 10;
                carry = true;
                if (big.next == null) {
                    big.next = new ListNode(1);
                    carry = false;
                    break;
                }
            } else 
                carry = false;
            big = big.next;
        }

    
        return head;
    }
}
