// .h файл з прототипами усіх функції сортування
#pragma once
#include "Header.h"

clock_t sort_1(int const p,int const n);
                                     // функція типу clock_t, яка приймає розміри масиву та
                                    // повертає час роботи першого алгоритму

clock_t sort_2(int const p,int const n);
                                      // функція типу clock_t, яка приймає розміри масиву та
                                    // повертає час роботи другого алгоритму

clock_t sort_3(int const p,int const n);
                                    // функція типу clock_t, яка приймає розміри масиву та
                                    // повертає час роботи третього алгоритму

int i,x,j,B,k; // змінні для швидкого сортування

void sort_4_1(int L,int R, int const p, int const n);
                                    // рекурсивна процедура швидкого сортування головної
                                    // діагоналі  задаого масива

void sort_4_2(int L,int R, int const p, int const n);
                                    // рекурсивна процедура швидкого сортування побічної
                                    // діагоналі  задаого масива

clock_t sort_4(int L,int R,int const p, int const n);
                                    // функція типу clock_t, яка виконує сортування обох діагоналей масива
                                    // та повертає час роботи даного швидкого сортування

clock_t sort_vect(int zv, int sv);

void qsort_v(int L, int R); // безпосердньо сортує вектор

clock_t qsort_vect(int zv); // вимірює час швидкого сортування вектора
