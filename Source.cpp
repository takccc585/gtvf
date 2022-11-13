//Вариант 1
//1. Задан массив A, содержащий 10 целых случайных чисел от 0 до 20. Найти произведение элементов этого массива.
//2. Задан массив, который содержит 8 случайных целых чисел от - 10 до 10. Найти сумму положительных элементов массива.
//3. Задан массив, который содержит 16 случайных целых чисел от 0 до 20. Найти количество элементов массива, которые делятся на 3 и на 5.
//4. Задан массив из 9 целых чисел  от - 10 до 10. Найти сумму элементов массива, которые являются четными числами.
#include<iostream>
#include<ctime>
using namespace std;
int main() {
	//1
	/*int proizv = 1;
	const int n = 10;
	int arr[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 21;
		cout << arr[i] << endl;
		proizv = proizv * arr[i];
	}
	cout << proizv << endl;*/
	//2
	/*int sum = 0;
	const int n = 8;
	int arr[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 21-10;
		cout << arr[i] << endl;
		if (arr[i] > 0) {
			sum = sum + arr[i];
		}
	}
	cout << sum << endl;*/
	//3
	/*int sum = 0;
	const int n = 16;
	int arr[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 21 ;
		cout << arr[i] << endl;
		if ((arr[i] % 3 == 0) and (arr[i] % 5 == 0)) {
			sum = sum + arr[i];
		}
	}
	cout << sum << endl;*/
	//4
	/*int sum = 0;
	const int n = 9;
	int arr[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 21-10;
		cout << arr[i] << endl;
		if (arr[i] % 2 == 0) {
			sum = sum + arr[i];
		}
	}
	cout << sum << endl;*/
	return 0;
}