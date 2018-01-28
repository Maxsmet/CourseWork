// .h файл з прототипами усіх функції виміру часу
#pragma once
#include "Header.h"
#include "Sort_head.h"

clock_t time_sort_1(int const p, int const n, int const mod);// фнкція типу clock_t що вимірює
                                                            // середній час роботи першого алгоритму

clock_t time_sort_2(int const p, int const n, int const mod);// фнкція типу clock_t що вимірює
                                                            // середній час роботи другого алгоритму

clock_t time_sort_3(int const p, int const n, int const mod);// фнкція типу clock_t що вимірює
                                                            // середній час роботи третього алгоритму

clock_t time_sort_4(int const p, int const n, int const mod);// фнкція типу clock_t що вимірює
                                                            // середній час роботи четвертого алгоритму

clock_t time_vect(int vz, int vs);// вимір часу сортування
                                //прямими методами вектору
