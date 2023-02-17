/* Задача № 7
Умова:
Написати програму, яка змінює порядок елементів у двовимірному масиві : у непарних рядках – заміна (нульовий– останній, перший n-1...).
                                                                        ***
Що робить ця програма/цей код:
Програма створює двовимірний вектор matrix, що містить цілі елементи.
Потім вона виводить вихідну матрицю на екран, викликає функцію reverseMatrix() зміни порядку елементів
у непарних рядках матриці, і виводить змінену матрицю на екран.
Функція reverseMatrix() проходить по кожному непарному рядку матриці, змінюючи порядок елементів таким чином,
щоб нульовий елемент замінювався на останній, перший елемент на передостанній і так далі.
                                                                        ***
Покроковий опис роботи коду/вирішення задачі:
Кінцевий результат цієї програми - зміна порядку елементів двовимірного масиву в такий спосіб,
що у непарних рядках перший елемент змінюється з останнім, другий з передостаннім тощо до середини рядка.

1. Оголошуємо двовимірний масив arr розміром m на n.
2. Заповнюємо масив елементами, введеними з клавіатури.
3. У циклі проходимо по кожному непарному рядку масиву від першого до передостаннього (for (int i = 1; i < m; i + = 2)).
4. Усередині цього циклу йдемо від початку до середини рядка, змінюючи місцями перший елемент з останнім,
    другий з передостаннім і так далі, використовуючи змінну тимчасову temp.
5. Виводимо на екран змінений масив.
*/

#include <iostream>
#include <vector>

using namespace std;

// Функция для изменения порядка элементов в матрице
void reverseMatrix(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    for (int i = 0; i < n; i++)
    {
        // Изменяем порядок элементов в нечетных строках
        if (i % 2 != 0)
        {
            int m = matrix[i].size();
            for (int j = 0; j < m / 2; j++)
            {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i][m - j - 1];
                matrix[i][m - j - 1] = temp;
            }
        }
    }
}

// Функция для вывода матрицы
void printMatrix(vector<vector<int>> &matrix)
{
    for (vector<vector<int>>::iterator it = matrix.begin(); it != matrix.end(); ++it)
    {
        for (vector<int>::iterator jt = it->begin(); jt != it->end(); ++jt)
        {
            cout << *jt << " ";
        }
        cout << endl;
    }
}

int main()
{
    // Создание исходной матрицы
    vector<vector<int>> matrix(3, vector<int>(3, 0));
    matrix[0][0] = 1;
    matrix[0][1] = 2;
    matrix[0][2] = 3;
    matrix[1][0] = 4;
    matrix[1][1] = 5;
    matrix[1][2] = 6;
    matrix[2][0] = 7;
    matrix[2][1] = 8;
    matrix[2][2] = 9;

    // Вывод исходной матрицы
    cout << "Исходная матрица:" << endl;
    printMatrix(matrix);

    // Изменение порядка элементов в матрице
    reverseMatrix(matrix);

    // Вывод измененной матрицы
    cout << "Матрица с измененным порядком элементов:" << endl;
    printMatrix(matrix);

    return 0;
}