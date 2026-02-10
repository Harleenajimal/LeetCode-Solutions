class MyLinkedList {
public:
class node{
    public:
    int data;
    node* next;

    node(int x){
        data = x;
        next = nullptr;
    }
};
node* head;
node*tail;
int size;

   
    MyLinkedList() {
         head = nullptr;
        tail = nullptr;
        size =0;
    }
    
    
    int get(int index) {
        if (index < 0 || index >= size) return -1;
        node* temp = head;
       for(int i=0; i<index; i++){
        temp = temp -> next;
       }
       return temp -> data;
    }
    
    void addAtHead(int val) {
        node* newnode = new node(val);
        newnode->next = head;
        head = newnode;

        if (size == 0)
            tail = newnode;

        size++;
    }
    
    void addAtTail(int val) {
        node* newnode = new node(val);
        if (size == 0) {
            head = tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if (index < 0 || index > size) return;
        if (index == 0) {
            addAtHead(val);
            return;
        }
        if (index == size) {
            addAtTail(val);
            return;
        }
        node* temp = head;
        for (int i = 0; i < index - 1; i++)
            temp = temp->next;
        node* newnode = new node(val);
        newnode->next = temp->next;
        temp->next = newnode;
        size++;

    }
    
    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) return;
        if (index == 0) {
            node* del = head;
            head = head->next;
            delete del;
            if (size == 1)
                tail = nullptr;
            size--;
            return;
        }

        node* temp = head;
        for (int i = 0; i < index - 1; i++)
            temp = temp->next;
            node* del = temp->next;
        temp->next = del->next;
        if (del == tail)
            tail = temp;
        delete del;
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
