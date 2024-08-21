#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;


struct Node 
{
    string key;
    string value;
    Node* next;

    Node(string k, string v) : key(k), value(v), next(nullptr) {}
};

class HashMap 
{
private:
    int numOfElements;
    int capacity;
    Node** arr;

    int hashFunction(const string& key) 
    {
        int sum = 0, factor = 31;
        for (char ch : key) 
        {
            sum = (sum + (static_cast<int>(ch) * factor)) % capacity;
            factor = (factor * 31) % INT16_MAX;
        }
        return sum % capacity;
    }

public:
    HashMap(int cap = 100) : capacity(cap), numOfElements(0) 
    {
        arr = new Node*[capacity];
        for (int i = 0; i < capacity; ++i) 
        {
            arr[i] = nullptr;
        }
    }

    void insert(const string& key, const string& value) 
    {
        int bucketIndex = hashFunction(key);
        Node* newNode = new Node(key, value);

        // Collision handling: insert at the head of the linked list
        newNode->next = arr[bucketIndex];
        arr[bucketIndex] = newNode;
        numOfElements++;
    }

    string search(const string& key) 
    {
        int bucketIndex = hashFunction(key);
        Node* bucketHead = arr[bucketIndex];

        while (bucketHead) {
            if (bucketHead->key == key) {
                return bucketHead->value;
            }
            bucketHead = bucketHead->next;
        }
        return "No data found.\n";
    }
};

// Driver code
int main() {
    HashMap mp;

    mp.insert("Yogaholic", "Anjali");
    mp.insert("pluto14", "Vartika");
    mp.insert("elite_Programmer", "Manish");
    mp.insert("GFG", "GeeksforGeeks");
    mp.insert("decentBoy", "Mayank");

    cout << mp.search("elite_Programmer") << endl;
    cout << mp.search("Yogaholic") << endl;
    cout << mp.search("pluto14") << endl;
    cout << mp.search("decentBoy") << endl;
    cout << mp.search("GFG") << endl;

    cout << mp.search("randomKey") << endl;




    return 0;
}