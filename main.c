//������� �������� main
#include "Header.h"

int mas[pmax][nmax][nmax]; // ��������� ���������� ����� ������������� ������
int vect[kmax];
int main()
{
    srand(time(NULL));
    SetConsoleCP(1251);      // ���������� ��������� ����
    SetConsoleOutputCP(1251);// � ������

    menu();
    return 0;
}
