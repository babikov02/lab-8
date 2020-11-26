using namespace std;
#include <iostream>
#include<ctime>

int main()
{
    setlocale(LC_ALL, "Russian");
    int b;
    int c;


    int* m, n;
    cout << "Введите размерность массива: " << endl;
    cin >> n;
    m = new int[n];
    cout << "Массив: ";
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        m[i] = rand() % 30;
        cout << m[i] << " ";
    }
    cout << "\n";

    cout << "Введите начало и конец интервала: ";
    cin >> b >> c;

    cout << "Элементы: ";

    for (int i = 0; i < n; i++)
    {
        if (m[i] < b || m[i] > c)
        {
            cout << m[i] << " ";
        }
    }

    cout << endl;

    return 0;
}