//���� ���������� ������� ������� ������ �7
#include "Sort_head.h"

clock_t sort_2(int const p, int const n) // ������� ���� clock_t �� ������ ��
                                        // ������� ��� ����������
{
    int L,R;  // ��� �� ����� ������� �� ����������� �������
    int imin,imax; //������ ��� �����'���������� ������ �� ���������
    int i,k;  // ��������� �����
    int B;  // �������� ����� ��� ������������ 2 ��������

    //���������� ������� �������
    clock_t time_start, time_stop;


    time_start = clock();     // ��� ������ ������ ���������
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
    //���������� ������ �������
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
    time_stop = clock();// ��� ��������� ������ ���������
    return time_stop - time_start; // ������� ��� ��� ������ ���������
}
