#include <iostream>
using namespace std;

int main()
{
    int i; // ������� �����
    int sum = 0; // ����� ����� �� 1 �� 1000.
    setlocale(0, "");
    for (i = 1; i <= 1000; i++) // ������ ��������� �������� 1, �������� 1000 � ������ ��� ����� - 1.
    {
        sum = sum + i;
    }
    cout << "����� ����� �� 1 �� 1000 = " << sum << endl;
    return 0;
}