#include <iostream>   
#include <math.h>

using namespace std;

struct MaxHeap
{
    int size;
    int maxSize;
    int* array;

    MaxHeap(int maxSize) 
    {
        this->maxSize = maxSize;
        size = -1;
        array = new int[maxSize];
    }

    void Insert(int p)
    {

        if (size < maxSize - 1) 
        {
            size++;
            array[size] = p;
            Up(size);
        }
        else 
        {
            size++;
            new_mass(p);
        }
    }


    void Up(int i)
    {
        while (i > 0 && array[i] > array[Parent(i)]) 
        {
            int t = array[i];

            array[i] = array[Parent(i)];
            array[Parent(i)] = t;
            i = Parent(i);
        }
    }

    void Down(int i)
    {
        int maxIndex = i;

        if (array[LeftChild(i)] > array[i] && LeftChild(i) <= size) 
        {
            int t = array[i];

            array[i] = array[LeftChild(i)];
            array[LeftChild(i)] = t;
            maxIndex = LeftChild(i);
            Down(maxIndex);
        }
        else if (array[RightChild(i)] > array[i] && RightChild(i) <= size) 
        {
            int t = array[i];

            array[i] = array[RightChild(i)];
            array[RightChild(i)] = t;
            maxIndex = RightChild(i);
            Down(maxIndex);
        }
    }

    int ExtractMax()
    {
        int result = array[0];
        int t = array[0];

        array[0] = array[size];
        array[size] = t;
        size--;

        Down(0);
        return result;
    }

    void new_mass(int p) 
    {
        int* array_n = new int[maxSize * 2];

        for (int i = 0; i < maxSize; i++) 
        {
            array_n[i] = array[i];
        }
        array_n[size] = p;

        maxSize = maxSize * 2;
        array = array_n;
        delete array_n;
        Up(size);
    }

    int Parent(int i) { return (i - 1) / 2; }
    int LeftChild(int i) { return 2 * i + 1; }
    int RightChild(int i) { return 2 * i + 2; }

    void printAll() 
    {

        for (int i = 0; i <= size; i++) {
            cout << array[i] << endl;
        }
    }
};

int main()
{
    MaxHeap* heap = new MaxHeap(4);

    heap->Insert(15);
    heap->Insert(30);
    heap->Insert(10);
    heap->Insert(45);
    heap->Insert(60);
    heap->printAll();

    return 0;
}