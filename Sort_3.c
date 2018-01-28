//���� ���������� ������� ������� ����� �4 (�������� ����������)
#include "Sort_head.h"

clock_t sort_3(int const p,int const n)// ������� ���� clock_t �� ������ ��
                                        // ������� ��� ����������
{
    int k,i; //��������� �����
    int L,R; // ����� ����� ������� �� ����������� �������
    int b;   // �������� ������ ��� ������������ 2 ��������
    int l;   // ��� ���'����������� ���� �������� ������������
                //��������� ������� �������

    clock_t time_start, time_stop;
    time_start = clock();     // ��� ������ ������ ���������
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

                //��������� ������ �������
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
    time_stop = clock(); // ��� ��������� ������ ���������

    return time_stop - time_start; // ������� ��� ��� ������ ���������
}
