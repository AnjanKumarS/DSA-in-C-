#include<iostream>
using namespace std;

class node{
    public:
    int val;
    node *next;

    node(int data){
        val = data;
        next = NULL;
    }
};

void insertAtHead(node* &head,int val){
    node* temp = new node(val);
    temp->next = head;
    head = temp;
}

void insertAttail(node* &head,int val){
    node *new_node = new node(val);
    node *temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = new_node;
}

void display(node* head){
    node *temp = head;
    while(temp!=NULL){
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void deleteAlternative(node* &head){
    node *curr_node = head;
    while(curr_node!=NULL && curr_node->next!=NULL){
        node *temp = curr_node->next;
        curr_node->next = temp->next;
        delete temp;
        curr_node = curr_node->next;
    }
}

void deleteDuplicate(node* &head){
    node *curr_node = head;
    while(curr_node!=NULL){
        while(curr_node->next!=NULL && curr_node->val==curr_node->next->val){
            node *temp = curr_node->next;
            curr_node->next = temp->next;
            delete temp;
        }
        curr_node = curr_node->next;
    }
}

int main(){
    node *head = NULL;
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    insertAttail(head, 2);
    insertAttail(head, 3);
    insertAttail(head, 3);
    insertAttail(head, 3);
    display(head);
    deleteDuplicate(head);
    display(head);
}