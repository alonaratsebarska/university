/* Лабораторна робота № 7
Варіант No1.
Умова:
Описати функцію типу void з передачею параметрів за посиланням або покажчиком POWERA3(A,B), що обчислює
третій ступінь числа А і повертає її в змінній (А – вхідний, В – вихідний параметр; обидва параметри є дійсними).
За допомогою цієї функції знайти третій ступінь п'яти заданих чисел.
                                                                        ***
Що робить ця програма/цей код:
Цей код описує функцію типу void з ім'ям POWERA3, яка обчислює третій ступінь числа A і повертає її до змінної B.
Ця функція викликається для п'яти заданих чисел, щоб знайти їх третій ступінь.
                                                                        ***
Покроковий опис роботи коду/вирішення задачі:
1. Оголошується функція POWERA3 з двома параметрами a та b, які передаються за посиланням.
2. Функція обчислює третій ступінь a та надає значення b.
3. У main функції оголошується змінна num для зберігання введеного числа та result для зберігання результату.
4. Використовується цикл for для введення 5 чисел та обчислення їх третього ступеня за допомогою функції POWERA3.
5. Виводиться результат обчислення третього ступеня.
*/

#include <iostream>

using namespace std;

void POWERA3(double &a, double &b)
{
    b = a * a * a;
}

int main()
{
    double num, result;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter a number: ";
        cin >> num;
        POWERA3(num, result);
        cout << "The third power of " << num << " is " << result << endl;
    }
    return 0;
}
