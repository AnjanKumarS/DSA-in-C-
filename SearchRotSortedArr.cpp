#include<iostream>
using namespace std;

int binarySearchRotSerArr(int arr[], int t) {
    int st = 0, end = 6; // Last index of the array

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (arr[mid] == t) {
            return mid;
        }

        if (arr[st] <= arr[mid]) { // Left sorted
            if (arr[st] <= t && t <= arr[mid]) {
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        } else { // Right sorted
            if (arr[mid] <= t && t <= arr[end]) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main() {
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int t = 6;
    cout << binarySearchRotSerArr(arr, t);
    return 0;
}
