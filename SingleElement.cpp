#include <iostream>
using namespace std;

int singleElement(int arr[], int n) {
    for (int i = 0; i < n; i += 2) {
        if (i == n - 1 || arr[i] != arr[i + 1]) {
            return arr[i];
        }
    }
    return -1;
}

int main() {
    int arr[] = {1,1, 2, 2, 3, 3, 4, 4, 5, 5,6};
    int n = sizeof(arr) / sizeof(int);
    cout << "The unique element is: " << singleElement(arr, n) << endl;
    return 0;
}
