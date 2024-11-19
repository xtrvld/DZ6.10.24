#include <iostream>
#include <Windows.h>
using namespace std;


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int number;
    cout << "������� ������������ �����: ";
    cin >> number;

    if (number < 100000 || number > 999999) {
        cerr << "������: ������� �� ������������ �����!" << endl;
        return 1;
    }

    int sum1 = (number / 100000) + (number / 10000 % 10) + (number / 1000 % 10);
    int sum2 = (number / 100 % 10) + (number / 10 % 10) + (number % 10);

    if (sum1 == sum2) {
        cout << "����� ����������!" << endl;
    }
    else {
        cout << "����� �� �������� ����������." << endl;
    }
    cout << "\n\n\t\t----------------------------------------------------------------------------\n\n\t\t";
    int number1;
    cout << "������� ������������� �����: ";
    cin >> number1;

    if (number1 < 1000 || number1 > 9999) {
        cout << "������: ������� �� ������������� �����!" << endl;
        return 1;
    }

    int digit1 = number1 / 1000;
    int digit2 = (number1 / 100) % 10;
    int digit3 = (number1 / 10) % 10;
    int digit4 = number1 % 10;

    int swap = digit2 * 1000 + digit1 * 100 + digit4 * 10 + digit3;

    cout << "����� ����� ������������: " << swap << endl;

    cout << "-----------------------------------------\n\n\t\t";
    int numbers[7];
    cout << "������� 7 ����� �����(����� ������� ����� ��������� ENTER): ";

    for (int i = 0; i < 7; i++) {
        cin >> numbers[i];
    }

    int maxNumber = numbers[0];
    for (int i = 1; i < 7; i++) {
        if (numbers[i] > maxNumber) {
            maxNumber = numbers[i];
        }
    }

    cout << "������������ �����: " << maxNumber << endl;

    return 0;
}