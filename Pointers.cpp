#include<iostream>
using namespace std;

int main(){
    int a = 10;
    cout << &a << endl;

    float price = 100.25f;
    float *ptr = &price;

    cout << ptr << endl;
    cout << &price << endl;
}