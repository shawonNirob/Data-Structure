/*node class of the linked list
class Node
{
    int data;
    Node next;
    Node(int key)
    {
        data = key;
        next = null;
    }
}
*/
class GfG
{
    public static int getNth(Node node, int index)
    {
       
       while(index>1){
           node= node.next;
           index--;
        }
    return node.data;
    }
}
