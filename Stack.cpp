#include <iostream>
using namespace std;

class stack {
    int capacity;
    int *arr;
    int top;

public:
    // Constructor
    stack(int c) {
        this->capacity = c;
        arr = new int[c];
        top = -1;
    }

    // Destructor
    ~stack() {
        delete[] arr;
    }

    // Push operation
    void push(int data) {
        if (this->top == this->capacity - 1) {
            cout << "Overflow\n";
            return;
        }
        this->top++;
        this->arr[top] = data;
    }

    // Pop operation
    int pop() {
        if (this->top == -1) {
            cout << "Underflow\n";
            return -1;
        }
        return this->arr[this->top--];
    }

    // Get the top element
    int getTop() {
        if (this->top == -1) {
            cout << "Underflow\n";
            return -1;
        }
        return this->arr[top];
    }

    // Check if the stack is empty
    bool isempty() {
        return this->top == -1;
    }

    // Get the size of the stack
    int size() {
        return this->top + 1;
    }

    // Check if the stack is full
    bool isfull() {
        return this->top == this->capacity - 1;
    }
};

int main() {
    stack st(5);

    st.push(1);
    st.push(2);
    st.push(3);
    cout << "Top element: " << st.getTop() << endl;

    st.push(4);
    st.push(5);
    st.push(6); // Overflow should occur

    cout << "Top element after pushes: " << st.getTop() << endl;
    cout << "Is stack empty: " << (st.isempty() ? "Yes" : "No") << endl;
    cout << "Is stack full: " << (st.isfull() ? "Yes" : "No") << endl;
    cout << "Current stack size: " << st.size() << endl;

    st.pop();
    cout << "Top element after pop: " << st.getTop() << endl;

    return 0;
}
