import org.w3c.dom.Node;

/**
 * LinkedListClass
 */
public class LinkedListClass {
 static NodeClass headNode; // creating a head node 
 static NodeClass lastNode; // defing the lastnode type node class;
 static NodeClass newNode;
 static int i;
    public static void main(String[] args) {
     // int a[] = {1,2,3,4,56,67};
    // NodeClass p = new NodeClass();
     //display(p);
     //recursiveDisplay(p);
     //countTheLinkedListChain(p);
     //sumOfTheLinkedList(p);
     for (i = 1; i < 10; i++) {
      newNode = insertNewNodeOnLastInLL(i);  
     }
     display(newNode);
    // NodeClass newNodeAfterInsertion =  insertOnPosByuserInLL(p, key,3);
    // display(newNodeAfterInsertion);
     //System.out.println(maxInLinkedList(p));
    }
    public static NodeClass createLinkedList(int[] a){
      
      NodeClass temNode; // define the temp node type node class;
      headNode.data = a[0]; // intializing the headNode data with array 1
      headNode.nextNode = null;
      lastNode = headNode;
      //creating the linked list 
      for (int i = 1; i < a.length; i++) {
        //creating a temporary node
        temNode = new NodeClass();
        //populate temporary node 
        temNode.data = a[i];
        temNode.nextNode = null;
        // last's next is pointing to temp
        lastNode.nextNode = temNode;
        lastNode = temNode;
      }
      return headNode;
    }
    public static void display(NodeClass newlyCreatedLinkedlist){
      while (newlyCreatedLinkedlist!=null) {
        System.out.print(newlyCreatedLinkedlist.data + "->");
        newlyCreatedLinkedlist=newlyCreatedLinkedlist.nextNode;
      }
      System.out.println();
    }
    public static void recursiveDisplay(NodeClass newlyCreatedLinkedlist){
      if (newlyCreatedLinkedlist==null) {
      }
      while (newlyCreatedLinkedlist!=null) {
        recursiveDisplay(newlyCreatedLinkedlist.nextNode);
        System.out.print(newlyCreatedLinkedlist.data + "->");
      }
    }
    public static void countTheLinkedListChain(NodeClass newlyCreatedLinkedlist){
      int count = 0;
        while (newlyCreatedLinkedlist!=null) {
        count++;
        newlyCreatedLinkedlist=newlyCreatedLinkedlist.nextNode;
      }
      System.out.println(count);
    }
    public static void sumOfTheLinkedList(NodeClass chainlist){
      int sum = 0;
      while (chainlist!=null) {
        sum+=chainlist.data;
        chainlist =  chainlist.nextNode;
      }
      System.out.println(sum);
    }
    public static int maxInLinkedList(NodeClass comingChainList){
      int max = 0;
      if(comingChainList==null){
        return 0;
      }
      if (comingChainList!=null) {
        max = maxInLinkedList(comingChainList.nextNode);
        if(max>comingChainList.data){
          return max;
        }else{
          return maxInLinkedList(comingChainList.nextNode);
        }
      }
      return max;
    }
    public static NodeClass getSearchKeyFromLinkedList(NodeClass searchList, int key){
      while (searchList!=null) {
        if (key==searchList.data) {
          return searchList;
        }
        searchList = searchList.nextNode; 
      }
        return null;
    }

    //using recursion searching key in linked list 
    public static NodeClass getKeyInLLUsingRecurson(NodeClass list, int key){
      while (list!=null) {
        if (key==list.data) {
          return list;
        }
        return getKeyInLLUsingRecurson(list.nextNode, key);
      }
      return null;
    }
    //how to improve when we have two type of search first one is binary search & second one is linear search
    // Binary search is not possible beause we can't get the mid value in one shot for getting mid value we need to traverese n time's so that's why binary search is not possible
    // for improving the search in linkedlist need to fast using two technique 1.Transposition & 2. Move to head. But here, we can go with the only move to head technique 
    public static NodeClass getFasterSearchUsingMoveToHeadTeq(NodeClass list2, int key){
      NodeClass preList2 = new NodeClass();// taking as second pointer
      // list2 act as first pointer
      while (list2!=null) {
        // firt start traversing using two pointers
        if (key==list2.data) {
          // when git the key need to move in front as head for faster search of key
          preList2.nextNode = list2.nextNode;
          list2.nextNode = headNode;
          headNode = list2;
          return list2;
        }
        //then assign the first pointer two second
        preList2 = list2;
        list2 = list2.nextNode;
      }
      return null;      
    }
    //here we are understanding the insertion on linkedList i.e done by two approach which has given below :
    // 1. at head 
    public static NodeClass insertionInLinkedList(NodeClass insertionList, int keyAtTop){
      NodeClass insertionNewNode = new NodeClass();
      
                // we need to store the new data in new node & second point to the head 
      insertionNewNode.data = keyAtTop;
      insertionNewNode.nextNode = insertionList;
      headNode = insertionNewNode;
      return insertionNewNode;
    }
    // 2. at any position
    public static NodeClass insertOnPosByuserInLL(NodeClass reqInsertKeyPosOnList, int key, int pos){
      NodeClass insertNewPosNodeList;
      if (pos == 0) {
        insertNewPosNodeList = new NodeClass();
        insertNewPosNodeList.data = key;
        reqInsertKeyPosOnList = headNode; 
        headNode = reqInsertKeyPosOnList;
      }else if (pos>0) {
        reqInsertKeyPosOnList = headNode; 
        for (int i = 0; i < pos-1&&reqInsertKeyPosOnList!=null; i++) {
        reqInsertKeyPosOnList =  reqInsertKeyPosOnList.nextNode;
      }if (reqInsertKeyPosOnList!=null){
        insertNewPosNodeList = new NodeClass();
        insertNewPosNodeList.data = key;
        insertNewPosNodeList.nextNode = reqInsertKeyPosOnList.nextNode;
        reqInsertKeyPosOnList.nextNode = insertNewPosNodeList;
      }
    }
      return reqInsertKeyPosOnList;
    }

    //Inserting last node in created linked list
    
}

