#include<iostream>
using namespace std;

void changeArr(int marks[],int size){
    int sum = 0;
    for (int i = 0; i < size;i++){
        sum = sum + marks[i];
    }
    cout << sum;
}

int main(){
    int marks[] = {10,20,30,40,50,60};
    int size = sizeof(marks)/sizeof(int);

    for (int i = 0; i < size;i++){
        cout << marks[i] << endl;
    }
    changeArr(marks, size);
    return 0;
}

