// .h ���� � ����������� ��� ������� ����������
#pragma once
#include "Header.h"

clock_t sort_1(int const p,int const n);
                                     // ������� ���� clock_t, ��� ������ ������ ������ ��
                                    // ������� ��� ������ ������� ���������

clock_t sort_2(int const p,int const n);
                                      // ������� ���� clock_t, ��� ������ ������ ������ ��
                                    // ������� ��� ������ ������� ���������

clock_t sort_3(int const p,int const n);
                                    // ������� ���� clock_t, ��� ������ ������ ������ ��
                                    // ������� ��� ������ �������� ���������

int i,x,j,B,k; // ���� ��� �������� ����������

void sort_4_1(int L,int R, int const p, int const n);
                                    // ���������� ��������� �������� ���������� �������
                                    // �������  ������� ������

void sort_4_2(int L,int R, int const p, int const n);
                                    // ���������� ��������� �������� ���������� ������
                                    // �������  ������� ������

clock_t sort_4(int L,int R,int const p, int const n);
                                    // ������� ���� clock_t, ��� ������ ���������� ���� ��������� ������
                                    // �� ������� ��� ������ ������ �������� ����������

clock_t sort_vect(int zv, int sv);

void qsort_v(int L, int R); // ������������ ����� ������

clock_t qsort_vect(int zv); // ������ ��� �������� ���������� �������
