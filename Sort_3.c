//файл сортування методом прямого обімну №4 (Шейкерне сортування)
#include "Sort_head.h"

clock_t sort_3(int const p,int const n)// функіція типу clock_t що виконує та
                                        // повертає час сортування
{
    int k,i; //лічільники циклів
    int L,R; // лівата права границі не відсортованої частини
    int b;   // допоміжна комірка для перестановки 2 елементів
    int l;   // для зап'ятовувавння місця останньо перестановки
                //сотування головної діагоналі

    clock_t time_start, time_stop;
    time_start = clock();     // час старту роботи алгоритма
    for(k=0;k<p;k++){
        L=0;R=n-1;l=0;
        while(L<R){
            for(i=L;i<R;i++){
                if(mas[k][i][i]>mas[k][i+1][i+1]){
                    b=mas[k][i][i];
                    mas[k][i][i]=mas[k][i+1][i+1];
                    mas[k][i+1][i+1]=b;
                    l=i;
                }
            }
            R=l;
            for(i=R-1;i>=L;i--){
                if(mas[k][i][i]>mas[k][i+1][i+1]){
                    b=mas[k][i][i];
                    mas[k][i][i]=mas[k][i+1][i+1];
                    mas[k][i+1][i+1]=b;
                    l=i;
                }
            }
            L=l+1;
        }
    }

                //сотування побічної діагоналі
    for(k=0;k<p;k++){
        L=0;R=n-1;l=0;
        while(L<R){
            for(i=L;i<R;i++){
                if(mas[k][i][n-1-i]>mas[k][i+1][n-i-2]){
                    b=mas[k][i][n-1-i];
                    mas[k][i][n-1-i]=mas[k][i+1][n-i-2];
                    mas[k][i+1][n-i-2]=b;
                    l=i;
                }
            }
            R=l;
            for(i=R-1;i>=L;i--){
                if(mas[k][i][n-1-i]>mas[k][i+1][n-i-2]){
                    b=mas[k][i][n-1-i];
                    mas[k][i][n-1-i]=mas[k][i+1][n-i-2];
                    mas[k][i+1][n-i-2]=b;
                    l=i;
                }
            }
            L=l+1;
        }
    }
    time_stop = clock(); // час закінчення роботи алгортиму

    return time_stop - time_start; // повертає сам час роботи алгортиму
}
