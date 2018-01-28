// ���� ���������� ������� ����� ������� (� ������ ������� ���� ������� ����)
#include "Sort_head.h"

clock_t sort_1(int const p, int const n)   // ������� ���� clock_t �� ������ ��
                                           // ������� ��� ����������
{
    int i,j,k,B,r;

    clock_t time_start, time_stop;     // ���������� ������ ��� ����� ����
    time_start = clock();              // ��� ������ ������ ���������

    // ���������� ������� �������
    for(k=0;k<p;k++){
        for(i=1;i<n;i++){
            B=mas[k][i][i];
            j=0;
            while(mas[k][j][j]<B)
                j++;
            for(r=i-1;r>=j;r--)
                mas[k][r+1][r+1]=mas[k][r][r];
            mas[k][j][j]=B;
        }
    }
        //���������� ������ ������� ������

    for(k=0;k<p;k++){
        for(i=1;i<n;i++){
            B=mas[k][i][n-1-i];
            j=0;
            while(mas[k][j][n-1-j]<B)
                j++;
            for(r=i-1;r>=j;r--)
                mas[k][r+1][n-r-2]=mas[k][r][n-1-r];
            mas[k][j][n-1-j]=B;
        }
    }
    time_stop = clock();   // ��� ��������� ������ ���������
    return time_stop - time_start; // ������� ��� ��� ������ ���������
}
