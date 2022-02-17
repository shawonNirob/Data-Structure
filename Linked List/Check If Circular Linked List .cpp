bool isCircular(Node *head)
{
   Node* currentNode = head;
   Node* slowNode = head;
   while(currentNode!= NULL && currentNode->next!=NULL){
       slowNode=slowNode->next;
       currentNode = currentNode->next->next;
       if(slowNode == currentNode){
           return 1;
       }
   }
   return 0;
}
