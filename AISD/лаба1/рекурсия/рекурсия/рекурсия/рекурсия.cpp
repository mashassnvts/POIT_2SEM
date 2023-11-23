#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "rus");

	int n, number_fibonachi(int);
	cout << "Введите N числа последовательности Фибоначчи: ";
	cin >> n;
	int a = 0, b = 1;

	unsigned int start_time = clock();

	cout << n << " элемент последовательности Фибоначчи равен " << number_fibonachi(n) << "\n";

	unsigned int end_time = clock();
	unsigned int search_time = end_time - start_time;
	cout << "Время выполнения рекурсии: " << search_time << " мс." << endl;
	return 0;
}
int number_fibonachi(int n) 
{
	if (n <= 3) {
		if (n == 3) 
		{
			return 1;
		}
		if (n == 2) 
		{
			return 1;
		}
		if (n == 1) 
		{
			return 0;
		}
	}
	return number_fibonachi(n - 1) + number_fibonachi(n - 2);
}

