//файл сортування методом прямого вибору №7
#include "Sort_head.h"

clock_t sort_2(int const p, int const n) // функіція типу clock_t що виконує та
                                        // повертає час сортування
{
    int L,R;  // ліва та права границі не відсортованої частини
    int imin,imax; //комірка для запам'ятовування мінімуму та максимуму
    int i,k;  // лічільників циклів
    int B;  // допоміжна змінна для перестановки 2 елементів

    //сортування головної діагоналі
    clock_t time_start, time_stop;


    time_start = clock();     // час старту роботи алгоритма
    for(k=0;k < p;k++){
        L=0; R=n-1;
        while(L<R){
            imin=L;
            imax=L;
            for(i=L+1;i<=R;i++){
                if(mas[k][i][i]<mas[k][imin][imin])
                    imin=i;
                else
                    if(mas[k][i][i]>mas[k][imax][imax])
                        imax=i;
            }
            if(imin!=L){
                B=mas[k][imin][imin];
                mas[k][imin][imin]=mas[k][L][L];
                mas[k][L][L]=B;
            }
            if(imax!=R){
                if(imax==L){
                    B=mas[k][imin][imin];
                    mas[k][imin][imin]=mas[k][R][R];
                    mas[k][R][R]=B;
                }
                else{
                    B=mas[k][imax][imax];
                    mas[k][imax][imax]=mas[k][R][R];
                    mas[k][R][R]=B;
                }
            }
            L=L+1;
            R=R-1;
        }
    }
    //сортування побічної діагоналі
    for(k=0;k<p;k++){
        L=0; R=n-1;
        while(L<R){
            imin=L;
            imax=L;
            for(i=L+1;i<=R;i++){
                if(mas[k][i][n-1-i]<mas[k][imin][n-1-imin])
                    imin=i;
                else
                    if(mas[k][i][n-1-i]>mas[k][imax][n-1-imax])
                        imax=i;
            }
            if(imin!=L){
                B=mas[k][imin][n-1-imin];
                mas[k][imin][n-1-imin]=mas[k][L][n-1-L];
                mas[k][L][n-1-L]=B;
            }
            if(imax!=R){
                if(imax==L){
                    B=mas[k][imin][n-1-imin];
                    mas[k][imin][n-1-imin]=mas[k][R][n-1-R];
                    mas[k][R][n-1-R]=B;
                }
                else{
                    B=mas[k][imax][n-1-imax];
                    mas[k][imax][n-1-imax]=mas[k][R][n-1-R];
                    mas[k][R][n-1-R]=B;
                }
            }
            L=L+1;
            R=R-1;
        }
    }
    time_stop = clock();// час закінчення роботи алгортиму
    return time_stop - time_start; // повертає сам час роботи алгортиму
}
