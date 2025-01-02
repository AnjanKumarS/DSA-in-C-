#include<iostream>
using namespace std;

class node{
    public:
        int val;
        node *prev;
        node *next;

        node(int data){
            val = data;
            prev = NULL;
            next = NULL;
        }
};

class doublyLinkedList{
    public:
        node *head;
        node *tail;

        doublyLinkedList(){
            head = NULL;
            tail = NULL;
        }

    void display(){
        node *temp = head;
        while(temp!=NULL){
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void insertAtStart(int val){
        node *new_node = new node(val);
        if(head==NULL){
            head = new_node;
            tail = new_node;
            return;
        }

        new_node->next = head;
        head->prev = new_node;
        head = new_node;
        return;
    }

    void insertAtTail(int val){
        node *new_node = new node(val);
        if(tail==NULL){
            head = new_node;
            tail = new_node;
            return;
        }
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
        return;
    }

    void insertAtPosition(int val,int k){
        node *temp = head;
        int count = 0;
        while(count<k-1){
            temp = temp->next;
            count++;
        }
        node *new_node = new node(val);
        new_node->next = temp->next;
        temp->next = new_node;

        new_node->prev = temp;
        new_node->next->prev = new_node;
        return;
    }

    void deleteAtStart(){
        if(head==NULL){
            return;
        }
        node *temp = head;
        head = head->next;
        if(head==NULL){
            tail = NULL;
        }
        else{
            head->prev = NULL;
        }
        delete temp;
        return;
    }

    void deleteAtEnd(){
        if(head==NULL){
            return;
        }
        node *temp = tail;
        tail = tail->prev;
        if(tail==NULL){
            head = NULL;
        }
        else{
            tail->next = NULL;
        }
        delete temp;
        return;
    }

    void deleteAtPosition(int k) {
        if (k <= 1) {
            deleteAtStart();
            return;
        }
        node *temp = head;
        int count = 1;
        while (count < k && temp != NULL) {
            temp = temp->next;
            count++;
        }
        if (temp == NULL) {
            return;
        }
        if (temp->next == NULL) {
            deleteAtEnd();
            return;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        delete temp;
    }
};



int main(){
    node *new_node = new node(3);
    doublyLinkedList dll;
    dll.insertAtStart(1);
    dll.insertAtStart(2);
    dll.insertAtStart(3);
    dll.insertAtTail(4);
    dll.insertAtTail(5);
    dll.insertAtPosition(6, 3);
    dll.display();
    dll.deleteAtStart();
    dll.deleteAtEnd();
    dll.deleteAtPosition(1);
    dll.display();

    return 0;
}