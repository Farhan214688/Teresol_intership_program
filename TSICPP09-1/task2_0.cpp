#include <iostream>
using namespace std;

class MaxHeap
{
private:
    int *heap;
    int capacity;
    int size;

    void heapifyUp(int index);
    void heapifyDown(int index);

public:
    MaxHeap(int cap);
    void insert(int value);
    int extractMax();
    void heapify(int arr[], int n);
    void printHeap();
};

MaxHeap::MaxHeap(int cap)
{
    capacity = cap;
    size = 0;
    heap = new int[capacity];
}

void MaxHeap::insert(int value)
{
    if (size >= capacity)
    {
        std::cout << "Heap is full!" << std::endl;
        return;
    }
    heap[size] = value;
    size++;
    heapifyUp(size - 1);
}

void MaxHeap::heapifyUp(int index)
{
    while (index > 0)
    {
        int parentIndex = (index - 1) / 2;
        if (heap[index] > heap[parentIndex])
        {

            int temp = heap[index];
            heap[index] = heap[parentIndex];
            heap[parentIndex] = temp;
            index = parentIndex;
        }
        else
        {
            break;
        }
    }
}

int MaxHeap::extractMax()
{
    if (size <= 0)
    {
        cout << "Heap is empty!" << endl;
        return -1;
    }
    int maxValue = heap[0];
    heap[0] = heap[size - 1];
    size--;
    heapifyDown(0);
    return maxValue;
}

void MaxHeap::heapifyDown(int index)
{
    int largest = index;
    int leftChild = 2 * index + 1;
    int rightChild = 2 * index + 2;

    if (leftChild < size && heap[leftChild] > heap[largest])
    {
        largest = leftChild;
    }

    if (rightChild < size && heap[rightChild] > heap[largest])
    {
        largest = rightChild;
    }

    if (largest != index)
    {
        int temp = heap[index];
        heap[index] = heap[largest];
        heap[largest] = temp;
        heapifyDown(largest);
    }
}

void MaxHeap::heapify(int arr[], int n)
{
    size = n;
    for (int i = 0; i < n; i++)
    {
        heap[i] = arr[i];
    }
    for (int i = (size / 2) - 1; i >= 0; i--)
    {
        heapifyDown(i);
    }
}

void MaxHeap::printHeap()
{
    for (int i = 0; i < size; i++)
    {
        cout << heap[i] << " ";
    }
    cout << endl;
}

int main()
{
    MaxHeap maxHeap(10);

    maxHeap.insert(10);
    maxHeap.insert(20);
    maxHeap.insert(5);
    maxHeap.insert(30);
    maxHeap.insert(15);

    cout << "Heap elements after insertion: ";
    maxHeap.printHeap();

    cout << "Extracted Max: " << maxHeap.extractMax() << std::endl;

    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    maxHeap.heapify(arr, n);
    cout << "Heap after heapifying the array: ";
    maxHeap.printHeap();

    return 0;
}