// файл заповнення та виведення масиву
#include "Header.h"

 void zap(int const p, int const n, int const mod) // функція заповнення масиву вибраним методом
 {
    int i,j,k;
    switch(mod){
    case 1:{
        int ros=0;
        for(k=0;k<p;k++)
            for(i=0;i<n;i++)
                for(j=0;j<n;j++){
                    mas[k][i][j]=ros;           // впорядковане заповнення масиву
                    ros++;
                }
    }
        break;
    case 2:
        for(k=0;k<p;k++)
            for(i=0;i<n;i++)                    // рандомне заповнення масиву
                for(j=0;j<n;j++)
                    //mas[k][i][j]=rand()%100;
                    mas[k][i][j]=rand()%p*n*n;
        break;
    case 3:{
        int ros = p*n*n;
        for(k=0;k<p;k++)
            for(i=0;i<n;i++)
                for(j=0;j<n;j++){           //  оберненовпорядковане заповнення масиву
                    mas[k][i][j]=ros;
                    ros--;
                }
    }
        break;
    default:
        break;
    }
 }

 void vuvid(int const p, int const n)
 {
     int i,j,k;
     for(k=0;k<p;k++){
            for(i=0;i<n;i++){                     // функція виводу масиву
                for(j=0;j<n;j++)
                    printf("%4d  ",mas[k][i][j]);
                printf("\n");
            }
            printf("\n");
     }
 }
