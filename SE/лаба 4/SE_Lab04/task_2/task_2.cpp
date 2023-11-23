#include <iostream>
#include <string>
//дисциплина: название, курс (на котором читается),
//семестр / семестры, количество_лекций_в_семестре

using namespace std;

struct Disipline
{
    string nazv;
    short course;
    short sem;
    int lectures;
};

bool operator ==(Disipline d1, Disipline d2)
{
    return (d1.sem == d2.sem);
}

bool operator >(Disipline d1, Disipline d2)
{
    return (d1.lectures > d2.lectures);
}

int main()
{
    setlocale(LC_ALL, "rus");


    Disipline d1 = { "kpo",3,2, 36 };
    Disipline d2 = { "oap", 1,2, 72 };
    if (d1 == d2)
    {
        cout << "d1 and d2 равны,тк одинаковое кол-во семов\n";
    }
    else
    {
        cout << "d1 и d2 имеют разное кол-во семов\n";
    }
    if (d1 > d2)
    {
        cout << "d1 and d2 равны,тк одинаковое часов лекций\n";
    }
    else
    {
        cout << "d1 и d2 имеют разное часов лекций\n";
    }

    return 0;
}