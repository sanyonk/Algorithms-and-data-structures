#include <iostream>
#include <ctime>

using namespace std;

int f_1(int* arr, int size, int* summ)
{
    for (int i = 0; i < size; i++)
    {
        *summ += *(arr + i);
    }
    return *summ;
}

int main()
{
    srand(time(NULL));
    const int size = 5;
    int arr[size];
    int summ = 0;
    int* summ_1 = &summ;
    
    for(int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }
    int* a = &arr[0];
    cout << f_1(a, size, summ_1);

    return 0;
}