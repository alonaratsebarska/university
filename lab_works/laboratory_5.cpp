/* Лабораторна робота № 5
Варіант No1.
Умова:
Зчитати з першого текстового файлу 25 елементів дійсного типу, розташованих в стовпчик, і занести їх в двовимірний масив 5 х 5.
Надрукувати цей масив у вигляді матриці в інший текстовий файл.
Для кожного рядка масиву знайти та надрукувати також у текстовий файл ненульові елементи та їх кількість.
Розробити блок-схему та написати програму.
                                                                        ***
Що робить ця програма/цей код:
Ця програма починається з визначення розміру масиву x та ініціалізації змінної count.
Потім він відкриває вхідний файл input.txt за допомогою оператора ifstream і зчитує
25 елементів із файлу в масив за допомогою двох вкладених циклів for.
Після читання елементів вхідний файл закривається.

Далі програма відкриває вихідний файл output.txt за допомогою оператора ofstream і друкує масив у вигляді матриці.
Потім інший вкладений цикл for використовується для визначення кількості ненульових елементів для кожного рядка масиву.
Змінна лічильника скидається до 0 для кожного рядка та збільшується, якщо поточний елемент не дорівнює 0.
Потім кількість ненульових елементів для кожного рядка друкується у вихідному файлі.

Нарешті вихідний файл закривається і програма завершує роботу.
                                                                        ***
Покроковий опис роботи коду/вирішення задачі:
1. Визначаємо розмір масиву x та ініціалізуйте змінну count.
2. Відкриваємо вхідний файл input.txt за допомогою інструкції ifstream і рахуйте 25 елементів із файлу в масив за допомогою двох вкладених циклів for.
3. Закриваємо вхідний файл.
4. Відкриваємо вихідний файл output.txt за допомогою інструкції ofstream і надрукуйте масив у вигляді матриці.
5. Використовуємо ще один вкладений цикл for для пошуку кількості ненульових елементів у кожному рядку масиву. Змінна count скидається до 0 для кожного рядка і збільшується, якщо поточний елемент не дорівнює 0. Кількість ненульових елементів для кожного рядка надруковано у вихідному файлі.
6. Закриваємо вихідний файл та завершіть програму.
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  const int ROWS = 5, COLS = 5;
  int count;
  float x[ROWS][COLS];

  // Open the input file
  ifstream inputFile("input.txt");

  // Read the elements from the input file
  for (int i = 0; i < ROWS; i++)
  {
    for (int j = 0; j < COLS; j++)
    {
      inputFile >> x[i][j];
    }
  }

  // Close the input file
  inputFile.close();

  // Open the output file
  ofstream outputFile("output.txt");

  // Print the array
  outputFile << "Array:" << endl;
  for (int i = 0; i < ROWS; i++)
  {
    for (int j = 0; j < COLS; j++)
    {
      outputFile << x[i][j] << " ";
    }
    outputFile << endl;
  }

  // Find and print the number of non-zero elements for each row
  outputFile << endl
             << "Number of non-zero elements for each row:" << endl;
  for (int i = 0; i < ROWS; i++)
  {
    count = 0;
    for (int j = 0; j < COLS; j++)
    {
      if (x[i][j] != 0)
      {
        count++;
      }
    }
    outputFile << "Row " << i + 1 << ": " << count << endl;
  }

  // Close the output file
  outputFile.close();

  return 0;
}
