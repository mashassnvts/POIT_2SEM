#include "stdafx.h"

void LeapYear()
{
    extern int year1;
    if (year1 % 4 == 0)
        cout << "\t��� ����������" << endl;
    else
        cout << "\t��� �� ����������" << endl;
}