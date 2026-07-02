/*
class Node {
   public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
} */

class Solution {
  public:
    bool detectLoop(Node* head) {
        // code here
        Node * fast = head ;
        Node * slow = head ; 
        while(fast != nullptr && fast->next != nullptr){
            fast = fast -> next -> next ; 
            slow = slow -> next;
            if(fast == slow){
                return true;
            }
        }
        return false;
    }
};