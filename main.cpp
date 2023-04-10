#include <iostream>
#include <ctime>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "rus");
	const int M_SIZE = 6;
	setlocale(0, "");
	srand(time(NULL));
	int M[M_SIZE][M_SIZE] , summ=0;
	int* pM[M_SIZE];
	for (int i = 0; i < M_SIZE; i++)  {
	pM[i] = M[i];for (int j = 0; j < M_SIZE; j++)
		{
			M[i][j] = rand() % 20 - 10;
			if (i == j) summ += M[i][j];
			printf("% 5d", M[i][j]);
		} 
		cout << endl;
	}
	summ = &M[0][0];
	for (int i = 1; i < M_SIZE; i++)
		for (int j = 1; j < M_SIZE; j++)
			if (i == j) *summ += M[i][j];

	cout << endl << "Сумма элементов главной диагонали равна: " << *summ << endl;


	int* pTemp = pM[1];
	pM[1] = pM[M_SIZE - 2];
	pM[M_SIZE - 2] = pTemp;

	cout << "Матрица после замены строк: " << endl;
	for (int i = 0; i < M_SIZE; i++) {
		for (int j = 0; j < M_SIZE; j++) {
			cout << pM[i][j] << "\t";
		}
		cout << endl;
	}

int min_elem = M[0][0];
	int min_row = 0, min_col = 0;
	for (int i = 0; i < M_SIZE; i++) {
		for (int j = 0; j < M_SIZE; j++) {
			if (M[i][j] < min_elem) {
				min_elem = M[i][j];
				min_row = i;
				min_col = j;
			}
		}
	}

	cout << "Минимальный элемент матрицы: " << min_elem << endl;
	cout << "Координаты минимального элемента: " << min_row << ", " << min_col << endl;

	return 0;
}
