public class InsertNewNodeOnLastInLL {
     static NodeClass headNode; // creating a head node 
     static NodeClass lastNode; // defing the lastnode type node class
      //
    public static void main(String[] args) {
    NodeClass nodeAfterInsert = null;
        nodeAfterInsert = insertNewNodeOnLastInLL(1);
        insertNewNodeOnLastInLL(10);
        insertNewNodeOnLastInLL(23);

       while (nodeAfterInsert!=null) {
        System.out.println(nodeAfterInsert.data);
        nodeAfterInsert = nodeAfterInsert.nextNode;
       }
    }
    //Inserting last node in created linked list
    public static NodeClass insertNewNodeOnLastInLL(int key){
        NodeClass afterInsertLastNodeInLL = new NodeClass();
         afterInsertLastNodeInLL.data = key;
         afterInsertLastNodeInLL.nextNode = null;
         
         if (headNode==null) {
           headNode = lastNode = afterInsertLastNodeInLL;
         }else {
            NodeClass currentNode = headNode;
            while (currentNode.nextNode!=null) {
                currentNode = currentNode.nextNode;
            }   
            currentNode.nextNode = afterInsertLastNodeInLL;
            lastNode = afterInsertLastNodeInLL;
         }
         return afterInsertLastNodeInLL;
         //here we need to handle the last node carefull
         //here we handle the special case suppose if we have no node betweeen start & last then we need to handle the pointing the updation properly 
         //let's see how we can update 
       }
}
