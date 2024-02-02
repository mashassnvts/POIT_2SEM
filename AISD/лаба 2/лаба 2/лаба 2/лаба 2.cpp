#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "rus"); 

    int n, guess, min_num = 1, max_num, count = 0, max_count = 0;
    
    vector<int> guesses;

    cout << "Введите диапазон: ";
    cin >> n;

    max_num = n;
    
    while (true) 
    {
        guess = (min_num + max_num) / 2;
        count++;

        guesses.push_back(guess);

        cout << "Я думаю, что это число " << guess << ". Выберите вариант ответа:" << endl;
        cout << "1. Много" << endl;
        cout << "2. Мало" << endl;
        cout << "3. Угадал" << endl;


        int response;
        cin >> response;

        switch (response) 
        {
        case 1:

            max_num = guess - 1;
            break;

        case 2:

            min_num = guess + 1;
            break;

        case 3:

            if (count > max_count) 
            {
                max_count = count;
            }

            cout << "Максимальное количество шагов = " << max_count << endl;
            cout << "История предположений: ";

            for (int i = 0; i < guesses.size(); i++) 
            {
                cout << guesses[i] << " ";
            }

            cout << endl;
            return 0;

        default:
            cout << "Неправильный ввод. Попробуйте еще раз." << endl;
            break;
        }
    }
}