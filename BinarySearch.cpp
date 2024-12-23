#include <iostream>
using namespace std;

int binarySearch(int a[], int n, int t) {
    int l = 0;
    int h = n - 1;
    while (l <= h) {
        int mid = (l + h )/ 2;
        if (a[mid] == t) {
            cout << "Element found at index: " << mid << endl;
            return mid;
        } else if (a[mid] < t) {
            l = mid + 1;
        } else {
            h = mid - 1;
        }
    }
    cout << "Element not found" << endl;
    return -1;
}

int main() {
    int a[] = {2, 4, 6, 8, 10, 12};
    int n = sizeof(a) / sizeof(int);
    int t = 8;
    binarySearch(a, n, t);
    return 0;
}
