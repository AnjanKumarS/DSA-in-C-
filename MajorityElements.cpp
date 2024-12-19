#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {1, 2, 1, 1,2,2,2,2,2};
    int n = sizeof(arr) / sizeof(int);

    for (int val : arr){
        int freq = 0;
        for(int el : arr){
            if(el==val){
                freq++;
            }
        }
        if(freq>n/2){
            cout << val;
            break;
        }
    }
}