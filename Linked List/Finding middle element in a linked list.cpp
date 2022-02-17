class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        Node* newNode;
        newNode=head;
        int count=0;
        while(newNode!=0){
            newNode=newNode->next;
            count++;
        }
        if(count==1){
            return head->data;
        }
        if(count>0){
            Node* currentNode;
            currentNode=head;
            int cou=0;
            while(currentNode!=0){
                currentNode=currentNode->next;
                cou++;
                if(cou==count/2){
                    return currentNode->data;
                }
            }
        }
    }
};
