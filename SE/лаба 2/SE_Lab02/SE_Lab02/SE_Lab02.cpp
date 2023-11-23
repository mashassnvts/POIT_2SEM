#include <iostream>
#include <cmath>

// 2
#define X 22
#define Y 23
#define Z 24
#define S 14.000

void func();
void func2();
int main()
{
	setlocale(LC_ALL, "rus");

	//задание 4
	bool tr = true; //01
	bool fl = false; //00
	bool test = -1;

	//задание 5,6
	char lat = 'o';// 6f
	char rus = 'о';// ee

	//задание 7,8
	wchar_t lat_t = 's';// UTF-16,00 73
	wchar_t rus_t = 'с';// UTF-16, ff f1


	size_t size = sizeof(wchar_t);

	//задание 9
	short a91 = X;//0000 0000 0000 0110(пк) = 00 16
    short a92 = -X;//0000 0000 1001 0110(пк) = 1111 1111 1110 1001(ок) = 1111 1111 1110 1010(дк) = ff ea

	//задание 10
	short big = 0x7fff; // 32767 = 0111 1111 1111 1111(пк) = 7f ff
	short small = 0x8000; // -32768 = 0111 1111 1111 1111 (пк) = 1000 0000 0000 0000 (ок) = 1000 0000 0000 0001 (дк) = 80 00

	//задание 11
	unsigned short big_u = 0xffff; // 1111 1111 1111 1111 = 65535 = ff  ff
	unsigned short small_u = 0; // 0x0000 = 00 00

	//задание 12
	int a121 = Y;// 0000 0000 0000 0000 0000 0000 0001 0111(пк) = 0000 0017
	int a122 = -Y;// 0000 0000 1001 0111(пк) = 1111 1111 1110 1000(ок) = 1111 1111 1110 1001(дк) = ffff  ffe9

	//задание 13
	int big1 = 0x7fffffff; // 2147483647 = 0111 1111 1111 1111 1111 1111 1111 1111 = ff ff ff 7f
	int small1 = 0x80000000; // -2147483648 = = 0111 1111 1111 1111 1111 1111 1111 1111(пк) = 1000 0000 0000 0000 0000 0000 0000 0000(ок) = 1000 0000 0000 0000 0000 0000 0000 0001(дк) = 0000 0000 
	//задание 14
	unsigned int big_i = 0xffffffff; // 4294967295 = 1111 1111 1111 1111 1111 1111 1111 1111 = ffff ffff
	unsigned int small_i = 0x00000000; // 0000 0000

	//задание 15o
	long a151 = Z;// 0000 0000 0000 0000 0000 0000 0001 1000(пк) = 0000 0018
	long a152 = -Z;//1001 1000(пк) = 1110 0111(ок) = 1110 1000(дк) = ffff ffe8

	//задание 16
	long big_l = 0xffffffff; // 9223372036854775807 = ffff ffff
	long small_l = 0x00000000; // -9223372036854775808 = 0000 0000

	//задание 17
	unsigned long big_ul = 0xffffffff; // 4294967295 = 1111 1111 1111 1111 1111 1111 1111 1111 = ffff ffff
	unsigned long small_ul = 0x00000000;// 0000 0000

	//задание 18
	float a181 = S;//0. 10000010. 11000000000000000000000(знак,порядок,мантиcса) = 41 60 00 00
	float a182 = -S;//1. 10000010. 11000000000000000000000 = c1 60 00 00

	//задание 19
	float a1 = a181 / 0;
	float a2 = a182 / 0;
	float a3 = std::sqrt(a182);

	//задание 20
	char* p_char = &lat;
	wchar_t* p_wchar = &lat_t;
	short* p_short = &a91;
	int* p_int = &a121;
	float* p_float = &a181;
	double fl_double = S;
	double* p_double = &fl_double;

	p_char += 3;
	p_wchar += 3;
	p_short += 3;
	p_int += 3;
	p_float += 3;
	fl_double += 3;
	p_double += 3;

	 // 21
    void (*fn)();
    fn = func;
    fn();
    fn = func2;
    fn();

    return 0;
}

void func()
{
    std::cout << "First func";
}

void func2() 
{
    std::cout << "Second func";
}