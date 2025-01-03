#include<iostream>
#include<vector>
using namespace std;

class queue{
    int front;
    int back;
    vector<int> v;

public:
    queue(){
        this->back = -1;
        this->front = -1;
    }

    void enqueue(int data){
        this->v.push_back(data);
        this->back++;
        if(this->back==0){
            this->front = 0;
        }
    }

    void dequeue(){
        if(this->front==this->back){
            this->back = -1;
            this->front = -1;
            v.clear();
        }
        else{
            this->front++;
        }
    }

    int getfront(){
        if(this->front==-1){
            return -1;
        }
        return this->v[this->front];
    }

    int isEmpty(){
        return this->front == -1;
    }
};

int main(){
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    while(not q.isEmpty()){
        cout << q.getfront() << " ";
        q.dequeue();
    }
}