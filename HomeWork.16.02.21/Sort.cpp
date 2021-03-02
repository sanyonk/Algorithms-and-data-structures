#include <iostream>
#include <ctime>
using namespace std;

void SortMass(int* m, int n)
{
    for (int i = n - 1; i >= 1; i--)
        for (int j = 0; j < i; j++)
        {
            if (m[j] > m[j + 1])
            {
                int foo = m[j];
                m[j] = m[j + 1];
                m[j + 1] = foo;
            }
        }
}

int main()
{
    int n = 0;
    int* m;
    cin >> n;
    m = new int[n];
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        int x = rand() % 100;
        m[i] = x;
        cout << m[i] << ' ';
    }
    cout << endl;
    SortMass(m, n);
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << m[i] << ' ';
    cin.get();
    cin.get();
}