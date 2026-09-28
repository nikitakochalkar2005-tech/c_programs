import java.util.Scanner;
public class Node {

    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
} 
class Mylinklist{
    /**
     * @this function is create a new node with given data and return it
     * @param data: kis data ko store karna hai
     * @return Node: return node ka address
     */
    static Node head;
    static void addNode(int data) {
        Node newNode = new Node(data);
        if(head == null){
            head = newNode;
        }
        else{
            Node current = head;
            while(current.next != null){
                current = current.next;
            }
            current.next = newNode;
        }
        
    }
    /*
     * @this function is used to print the linked list
     * @param head: head of the linked list
     * @param tail: tail of the linked list
     * @return void
     */
    static void printNode(Node head){
        Node current = head;
        if(current == null){
            System.out.println("node is empty:");
        }
        while(current != null){
            System.out.println(current.data);
            current = current.next;

        }
    }

/**
 * @this function prepend a node
 * @param head: mujhe sabe pahile node par new node add karana hai 
 * @param data: kis data ko add karana hai node ke andar
 * @return void: kuch return nahi karana hai mujhe
 */

static Node  prependNode(int data){
    Node new_node= new Node(data);
    new_node.next = head;
    head = new_node;
    return new_node;

    
}
/**
 * @brief this function append a node 
 * @param head: head node chahiye jisamai append karana hai 
 * @param  data: kis data add karana hai last mai  
 * @return Node: return node ka address karana hai 
 */

static Node appendNode(Node head,int data){
  Node new_node = new Node(data);
  Node current = head;
  if(head == null){
    return new_node;
    
  }
  while(current.next != null){
    current = current.next;
  }
  current.next = new_node;
  return head;
}
/**
 * @brief this function insert a node data at specific position 
 * @param head: head node chaiye us mai insert karana hai kiyu mujhe sirf head ka hi address pata hai 
 * @param data: kis data ko add karana hai head ke node ke andar
 * @return Node: head node return karege
 */
static Node insertNode(int data,Node head,int position){
    Node new_node = new Node(data);
    Node current = head;
    if( position == 1){
        new_node.next = head;
        return new_node;
    }
    for(int index = 1; index < position; index++){
        if(index == position-1){
            new_node.next = current.next;
           current.next = new_node;
        }
       current =  current.next;
        
    }
    return head;

}
/**
 * @brief this function delete a node 
 * @param head: kis node mai se delete karana hai mujhe sirf first node ka address pata hai isliye head liya
 * @param position: konte position ki node hatana hai 
 * @return head: after delete ki wali node return karana ahi
 */

static Node deleteNode(Node head,int position){
   // Node new_node = new Node();
    Node current = head;
    if(head == null){
        System.out.println("node empty");
        return head;
    }
    if(position == 1){
        head = head.next;
        return head;
    }
    for(int index = 1; index < position; index++){
        if(index == position -1){
          // new_node = current.next.next;
          // return new_node;
          current.next = current.next.next;

        

        }
        current = current.next;
    }

    return head;
}



    public static void main(String args[]){
        Mylinklist list = new Mylinklist();
        Scanner scanner = new Scanner(System.in);
        System.out.println("enter a node data for creating nodes:");
        int node_data_number = scanner.nextInt();
        for (int data = 1;  data <= node_data_number; data++ ){
            System.out.println("enter data node element");
            int value = scanner.nextInt();
             list.addNode(value);
             
        }
        System.out.println("nodes data is given below:");
        printNode(list.head);
        list.prependNode(89);
        printNode(list.head);
        head = appendNode(head,10);
        System.out.println("append node:");
        printNode(head);
        head = insertNode(40,head,2);
        printNode(head);
        System.out.println("");
        head = deleteNode(head,2);
        printNode(head);
        scanner.close();

       
       
    }
}
