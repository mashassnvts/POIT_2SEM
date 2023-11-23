#include <iostream>
#include <ctime>

using namespace std;

int main() {

	setlocale(LC_ALL, "rus");

	int n;
	cout << "Введите N числа последовательности Фибоначчи: ";
	cin >> n;

	unsigned int start_time = clock();
	int a = 0, b = 1, c;
	if (n <= 3) 
	{
		if (n == 1) 
		{
			cout << n << " элемент последовательности Фибоначчи равен " << a << "\n";
		}
		if (n == 2) 
		{
			cout << n << " элемент последовательности Фибоначчи равен " << b << "\n";
		}
		if (n == 3) 
		{
			cout << n << " элемент последовательности Фибоначчи равен " << b << "\n";
		}
	}
	else {
		for (int i = 4; i <= n + 1; i++) 
		{
			c = a + b;
			a = b;
			b = c;
		}
		cout << n << " элемент последовательности Фибоначчи равен " << b << "\n";
	}
	unsigned int end_time = clock();
	unsigned int search_time = end_time - start_time;
	cout << "Время выполнения : " << search_time << end_time << start_time << " мс." << endl;
	return 0;
}