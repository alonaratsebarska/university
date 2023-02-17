/* Лабораторна робота № 4
Варіант No4.
Умова:
Варіант No1. В масиві Х (кількість елементів обрати за власним бажанням, наприклад 20) знайти суму елементів масиву,
розташованих після максимального елемента.
Розробити блок-схему та написати програму, використовуючи оператори циклу та умовний оператор.
                                                                        ***
Що робить ця програма/цей код:
Ця програма починається з визначення розміру масиву X та ініціалізації змінних max, sum і maxIndex.
Потім масив заповнюється значеннями за допомогою циклу for і оператора cin.

Далі інший цикл for використовується для пошуку максимального елемента в масиві та його індексу.
Цей цикл починається з другого елемента масиву, оскільки перший елемент уже зберігається в змінній max.

Нарешті, третій цикл for використовується для обчислення суми елементів після максимального елемента.
Цикл починається з індексу максимального елемента +1 і продовжується до кінця масиву.
Розрахована сума потім відображається на екрані за допомогою оператора cout.
                                                                        ***
Покроковий опис роботи коду/вирішення задачі:
1. Визначається розмір масиву X та ініціалізуйте змінні max, sum та maxIndex.
2. Заповнюється масив за допомогою циклу for та виразу cin.
3. Знаходиться максимальний елемент у масиві та його індекс за допомогою іншого циклу for. Цей цикл повинен починатися з другого елемента масиву, тому що перший елемент збережений в змінній max.
4. Обчислюється сума елементів після максимального елемента третього циклу for. Цей цикл повинен починатися з індексу максимального елемента + 1 і продовжуватись до кінця масиву.
5. Відображається обчислена сума на екрані за допомогою виразу cout.
*/

#include <iostream>

using namespace std;

int main()
{
  const int N = 20;
  int x[N];
  int max = x[0];
  int sum = 0;
  int maxIndex = 0;

  // Fill the array with values
  for (int i = 0; i < N; i++)
  {
    cin >> x[i];
  }

  // Find the maximum element and its index
  for (int i = 1; i < N; i++)
  {
    if (x[i] > max)
    {
      max = x[i];
      maxIndex = i;
    }
  }

  // Calculate the sum of elements after the maximum element
  for (int i = maxIndex + 1; i < N; i++)
  {
    sum += x[i];
  }

  cout << "Sum: " << sum << endl;

  return 0;
}
