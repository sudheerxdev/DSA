/*
class Node {
	int data;
	Node* next;
	
	Node(int x) {
		data = x;
		next = nullptr;
	}
	
}; */

class Solution {
	public:
	int getMiddle(Node* head) {
		// code here
		Node * fast = head ;
		Node * slow = head ;
		while (fast != nullptr && fast->next != nullptr) {
			fast = fast -> next -> next ;
			slow = slow -> next;
			
		}
		return slow->data;
	}
};
