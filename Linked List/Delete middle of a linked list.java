
class Solution {
    Node deleteMid(Node head) {
        if(head==null){
            return null;
        }
        Node slow =head;
        Node fast =head;
        Node prev =head;
        while(fast!=null && fast.next!=null){
            prev=slow;
            slow=slow.next;
            fast=fast.next.next;
        }
        prev.next=slow.next;

        return head;

        // This is method only submission.
        // You only need to complete the method.
    }
}
