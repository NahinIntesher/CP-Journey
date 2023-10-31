
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    LinkedListNode<int>* forward;
    LinkedListNode<int>* curr = head;
    LinkedListNode<int>* prev = NULL;
    while (curr != NULL){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    head = prev;
    return head;
}