/* Лабораторна робота № 9
Варіант No1.
Умова:
Написати програму, яка зчитує з клавіатури рядок символів, шукає в ньому цифри, друкує їх кількість та заміняє їх на пробіли.
Пошук цифр та заміну організувати в окремій функції.
                                                                        ***
Що робить ця програма/цей код:
У цій програмі спочатку за допомогою функції cin зчитується рядок символів.
Потім цей рядок передається у функцію replaceDigitsWithSpaces, яка виконує пошук цифр у рядку та заміну їх на пробіли.
Для цього функція використовує цикл for, в якому перебирає всі символи рядка та перевіряє, чи символ є цифрою.
Якщо символ є цифрою, він замінюється на пробіл. Функція replaceDigitsWithSpaces також підраховує кількість знайдених цифр.
Після виконання функції replaceDigitsWithSpaces за допомогою функції cout друкується вихідний рядок із заміненими цифрами на пробіли,
а також кількість знайдених цифр.
                                                                        ***
Покроковий опис роботи коду/вирішення задачі:
1. Зчитування рядка з клавіатури: Програма зчитує рядок із клавіатури за допомогою функції getline().
2. Визначення функції: Функція replaceDigitsWithSpaces визначена для пошуку цифр у рядку та заміни їх на пробіли.
3. Пошук цифр: Функція replaceDigitsWithSpaces використовує цикл для перебору кожного символу рядка. Якщо символ є цифрою, він замінюється на пробіл за допомогою оператора if.
4. Підрахунок цифр: Функція replaceDigitsWithSpaces також рахує кількість знайдених цифр і повертає це значення.
5. Друк результату: В основній функції main відбувається виклик функції replaceDigitsWithSpaces і друк кількості знайдених цифр і зміненого рядка.
6. Завершення програми
*/

#include <iostream>
#include <cstring>
using namespace std;

void replaceDigitsWithSpaces(char str[], int &digitCount)
{
    int length = strlen(str);
    digitCount = 0;

    for (int i = 0; i < length; i++)
    {
        if (isdigit(str[i]))
        {
            str[i] = ' ';
            digitCount++;
        }
    }
}

int main()
{
    const int MAX_LENGTH = 100;
    char str[MAX_LENGTH];
    int digitCount;

    cout << "Enter a string: ";
    cin.getline(str, MAX_LENGTH);

    replaceDigitsWithSpaces(str, digitCount);

    cout << "The number of digits in the string is: " << digitCount << endl;
    cout << "The modified string is: " << str << endl;

    return 0;
}