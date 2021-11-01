#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, int i)
{
	cout << "a[i] = "; cin >> a[i];
	if (i < size - 1)
		Create(a, size, i + 1);
}
void Print(int* a, const int size, int i)
{
	cout << setw(4) << a[i];
	if (i < size - 1)
		Print(a, size, i + 1);
	else
		cout << endl;

}
void Inverse(int* a, const int n, int i)
{
		int tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;

		if (i < n / 2 - 1)
			Inverse(a, n, i + 1);
}
int main()
{
	int n;
	cout << "n = "; cin >> n;
	int* a = new int[n];

	Create(a, n, 0);
	Print(a, n, 0);

	Inverse(a, n, 0);
	Print(a, n, 0);

	return 0;
}