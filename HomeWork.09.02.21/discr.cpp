#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, x;
    
    cin >> a >> b >> c;

    if ((b * b - 4 * a * c) >= 0)
    {
        x = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << "The first root is" << x << endl;
        x = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << "The second root is" << x << endl;
    }
    else
    {
        cout << "The discriminant is less than 0, the roots are immaterial." << endl;
    }

    return 0;
}