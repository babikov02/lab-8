using namespace std;
#include <iostream>
#include<ctime>

int main()
{
	setlocale(LC_ALL, "Russian");
	int* m, n;
	cout << "Введите размерность массива: " << endl;
	cin >> n;
	m = new int[n];
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		m[i] = rand() % 30;
		cout << m[i] << " ";
	}
	cout << "\n";


	int a, b;
	cout << "Введите промежуток: ";
	cin >> a >> b;
	cout << "Измененный массив: ";
	for (int i = 0; i < n; i++)
	{
		if (m[i] >= a && m[i] <= b)
		{
			m[i] = 0;
		}
		cout << m[i] << " ";
	}
	return 0;

}