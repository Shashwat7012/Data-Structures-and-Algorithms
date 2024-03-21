// Iterative Way

/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };
        

*****************************************************************/

Node* reverseLinkedList(Node *head)
{
    if(head == NULL || head -> next == NULL){
        return head;
    }
    Node*prev = NULL;
    Node*current = head;
    Node*forword = NULL;

    while(current != NULL){
        forword = current -> next;
        current -> next = prev;
        prev = current;
        current = forword;
    }
    return prev;
}
//t.c = O(n)
// s.c = O(1)



// recursive way
void reverse(Node* &head, Node* curr, Node* prev) {
    // Base case 
    if (curr == NULL) {
        head = prev;
        return;
    }

    // Recursive relation
    Node* forward = curr->next;
    reverse(head, forward, curr);
    curr->next = prev;
}


Node* reverseLinkedList(Node *head)
{
    Node*curr = head;
    Node*prev = NULL;
    reverse(head, curr, prev);
    return head;
}
