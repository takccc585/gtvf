//������� 1
//1. ����� ������ A, ���������� 10 ����� ��������� ����� �� 0 �� 20. ����� ������������ ��������� ����� �������.
//2. ����� ������, ������� �������� 8 ��������� ����� ����� �� - 10 �� 10. ����� ����� ������������� ��������� �������.
//3. ����� ������, ������� �������� 16 ��������� ����� ����� �� 0 �� 20. ����� ���������� ��������� �������, ������� ������� �� 3 � �� 5.
//4. ����� ������ �� 9 ����� �����  �� - 10 �� 10. ����� ����� ��������� �������, ������� �������� ������� �������.
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