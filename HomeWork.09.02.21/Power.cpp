#include <iostream>
using namespace std;

int power(int x, int p)
{
    {
        if (p == 0)
            return 1;
        else
            return pow(x, p);
    }
}

int main()
{
    int x, p;
    cout << "Enter a number:\n";
    cout << "x = ";
    cin >> x;
    cout << "Enter a power:\n";
    cout << "p = ";
    cin >> p;
    cout << "Number " << x << " powered by " << p << ": " << power(x, p) << "\n\n\n";
    system("pause");
    return 0;
}