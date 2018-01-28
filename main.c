//головна програма main
#include "Header.h"

int mas[pmax][nmax][nmax]; // оголошуємо глобальний масив максимального розміру
int vect[kmax];
int main()
{
    srand(time(NULL));
    SetConsoleCP(1251);      // підключення української мови
    SetConsoleOutputCP(1251);// в консолі

    menu();
    return 0;
}
