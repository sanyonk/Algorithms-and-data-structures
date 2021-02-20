#include <iostream>
using namespace std;

int main()
{
	int N, a;
	int sum = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> a;
		sum = sum + a;
	}
	cout << sum;
}