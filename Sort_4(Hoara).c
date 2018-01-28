//файл сортування методом швидкого сортування
#include "Sort_head.h"

void sort_4_1(int L,int R,int const p, int const n) // рекурсивна процедура швидкого сортування
                                                  //  головної діагоналі
{


    //сортування головної діагоналі

    for(k=0;k<p;k++){
        i=L; j=R;
        x=mas[k][(L+R)/2][(L+R)/2];
        while(i<=j){
            while(mas[k][i][i]<x)
                i++;
            while(mas[k][j][j]>x)
                j--;
            if(i<=j){
                B=mas[k][i][i];
                mas[k][i][i]=mas[k][j][j];
                mas[k][j][j]=B;
                i++;
                j--;
            }
        }
        if(L<j)
            sort_4_1(L,j,p,n);
        if(i<R)
            sort_4_1(i,R,p,n);
    }
}
void sort_4_2(int L,int R,int const p, int const n) // рекурсивна процедура швидкого сортування
                                                  //  побічної діагоналі
{
        //сортування побічної діагоналі
    for(k=0;k<p;k++){
        i=L; j=R;
        x=mas[k][(L+R)/2][n-1-(L+R)/2];
        while(i<=j){
            while(mas[k][i][n-1-i]<x)
                i++;
            while(mas[k][j][n-1-j]>x)
                j--;
            if(i<=j){
                B=mas[k][i][n-1-i];
                mas[k][i][n-1-i]=mas[k][j][n-1-j];
                mas[k][j][n-1-j]=B;
                i++;
                j--;
            }
        }
        if(L<j)
            sort_4_2(L,j,p,n);
        if(i<R)
            sort_4_2(i,R,p,n);
    }
}

clock_t sort_4(int L,int R,int const p, int const n) // функція типу clock_t виміру часу сортування
                                                     // головної та побічної діагоналі
{
    clock_t time_start, time_stop;
    time_start = clock(); // час старту роботи алгоритма

    sort_4_1(0,n-1,p,n);  // сортування головної діагоналі
    sort_4_2(0,n-1,p,n);  // сортування побічної діагоналі

    time_stop = clock(); // час закінчення роботи алгортиму

    return time_stop - time_start;
}

