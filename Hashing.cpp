#include <iostream>
#include <vector>
#include <list>
#include <algorithm> // for std::find
using namespace std;

class Hashing {
    vector<list<int>> hashtable;
    int buckets;

public:
    // Constructor
    Hashing(int size) {
        buckets = size;
        hashtable.resize(size);
    }

    // Hash function
    int hashvalue(int key) {
        return key % buckets; // Division method
    }

    // Add a key to the hash table
    void add(int key) {
        int idx = hashvalue(key);
        hashtable[idx].push_back(key);
    }

    // Search for a key in the hash table
    list<int>::iterator search(int key) {
        int idx = hashvalue(key);
        return find(hashtable[idx].begin(), hashtable[idx].end(), key);
    }

    // Delete a key from the hash table
    void deleteKey(int key) {
        int idx = hashvalue(key);
        auto it = search(key);
        if (it != hashtable[idx].end()) {
            hashtable[idx].erase(it);
        } else {
            cout << "Key " << key << " not found!" << endl;
        }
    }

    // Display the hash table
    void display() {
        for (int i = 0; i < buckets; ++i) {
            cout << "Bucket " << i << ": ";
            for (int val : hashtable[i]) {
                cout << val << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Hashing h(10); // Create a hash table with 10 buckets

    h.add(5);
    h.add(9);
    h.add(3);
    h.add(15);

    cout << "Hash table after additions:" << endl;
    h.display();

    h.deleteKey(9);
    cout << "Hash table after deleting 9:" << endl;
    h.display();

    return 0;
}
