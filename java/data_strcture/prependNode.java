class Node<E>{
    E data;
    Node<E> next;
    Node(E data){
        this.data = data;
        this.next = null;
    }
}


class prependNode{
    static Node head;
    static <E> void createNode(E data){
        Node <E> newNode = new Node<>(data);
        if(head == null){
            head = newNode;
            return;
        }
        Node current = head;
        while(current.next != null){
          current = current.next;
        }
        current.next = newNode;
   
    }
    static <E> Node addNodeInFirstPosition(E data){
         Node<E> newNode =new Node<>(data);
         newNode.next = head;
         head = newNode;
         return newNode;

    }

    static <E> void printNodes(){
        Node current = head;
        while(current != null){
            System.out.println(current.data);
            current = current.next;
        }
    }
    static <E> void printNode(Node head){
        Node current = head;
        if(current == null){
            System.out.println("node is empty");
        }
        while(current != null){
            System.out.println(current.data);
            current = current.next;
        }
    }

    //static Node prependNode(Node head,E data)
    public static void main(String args[]){
        
        createNode(20);
        createNode(30);
        addNodeInFirstPosition(34);
        printNodes();
    }
}