// Problem Link: https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/0/?company[]=Amazon&problemStatus=unsolved&problemType=functional&page=1&sortBy=submissions&query=company[]AmazonproblemStatusunsolvedproblemTypefunctionalpage1sortBysubmissions

void removeLoop(Node* head)
{
    Node* slow;
    Node* fast;

    slow = head;
    fast = head;

    slow = slow -> next;
    fast = fast -> next -> next;

    // Loop Detection
    while(fast != NULL && fast -> next != NULL){

        if(slow == fast) break;

        slow = slow -> next;
        fast = fast -> next -> next;
    }

    // Loop Removeal - 1
    // This code is for when the loop directly starts from the last node to the very first node in the LinkedList
    if(slow == head){

        while(slow -> next != head){
            slow = slow -> next;
        }

        slow -> next = NULL;
    }

    // Loop Removal - 2
    if(slow == fast){
        slow = head;
        while(slow -> next != fast -> next){

            fast = fast -> next;
            slow = slow -> next;
        }

        fast -> next = NULL;
    }
}
