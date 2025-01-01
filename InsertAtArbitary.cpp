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
    node *new_node = new node(val);
    new_node->next = head;
    head = new_node;
}

void insertAtPosition(node* &head,int val,int pos){
    if(pos==0){
        insertAtHead(head, val);
        return;
    }
    node *new_node = new node(val);
    node *temp = head;

    int cur_pos = 0;

    while(cur_pos!=pos-1){
        temp=temp->next;
        cur_pos++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}

void updateAtPosition(node* &head,int val,int k){
    node *temp = head;
    int cur_pos = 0;

    while(cur_pos!=k){
        temp = temp->next;
        cur_pos++;
    }

    temp->val = val;
}

void deleteAtHead(node* &head){
    node *temp = head;
    head = head->next;
    free(temp);
}

void deleteAtTail(node* &head){
    node *second_last = head;
    while(second_last->next->next!=NULL){
        second_last = second_last->next;
    }

    node *temp = second_last->next;
    second_last->next = NULL;
    free(temp);
}

void deleteAtPosition(node* head,int pos){
    if(pos==0){
        deleteAtHead(head);
        return;
    }
    
    node *pre = head;
    int cur_pos = 0;

    while(cur_pos!=pos-1){
        pre = pre->next;
        cur_pos++;
    }

    node *temp = pre->next;
    pre->next = pre->next->next;
    free(temp);
}

void display(node* head){
    node *temp = head;
    while(temp!=NULL){
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main(){
    node *head = NULL;
    insertAtHead(head, 2);
    display(head);
    insertAtHead(head, 3);
    display(head);
    insertAtPosition(head, 5, 1);
    display(head);
    updateAtPosition(head, 10, 1);
    display(head);
}