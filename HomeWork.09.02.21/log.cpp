#include <iostream>   
#include <math.h>

using namespace std;

int main()
{
    int a;
    int i = 0;

    cin >> a;
    
    while (a > 1) 
    {
        a = a / 2;
        i++;
    }
    cout << i;
    return 0;
}
