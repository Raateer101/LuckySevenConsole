#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    srand(static_cast<unsigned int>(time(0)));

    char answer; 

    do {
        int num1 = rand() % 10;
        int num2 = rand() % 10;
        int num3 = rand() % 10;

        cout << "\n=== ИГРОВОЙ АВТОМАТ ===" << endl;
        cout << "Выпавшие числа: " << num1 << " | " << num2 << " | " << num3 << endl;

        if (num1 == 7 || num2 == 7 || num3 == 7) {
            cout << "Счастливая семерка! Вы выиграли!" << endl;
        }
        else {
            cout << "Попробуйте еще раз." << endl;
        }
тn
        // Запрос на продолжение игры
        cout << "\nКрутить еще раз? (y/n): ";
        cin >> answer;

    } while (answer == 'y' || answer == 'Y');

    cout << "Спасибо за игру!" << endl;

    system("pause");
    return 0;
}
