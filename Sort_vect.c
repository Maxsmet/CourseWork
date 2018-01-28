// файл сортування вектору
#include "Sort_head.h"
clock_t sort_vect(int zv, int sv) // сортування вектору
                                //прямими методами
{
    int i,j,B,r,L,R,l,imin,imax;
    int ros=0;
    switch(zv){
    case 1:
        for(i=0;i<kmax;i++)    //заповнення вектору
            vect[i]=ros++;  //згідно ознаки, що вибрав користувач
        break;
    case 2:
        for(i=0;i<kmax;i++)
            vect[i]=rand()%kmax;
        break;
    case 3:
        ros=kmax;
        for(i=0;i<kmax;i++)
            vect[i]=ros--;
        break;
    default:
        break;
    }
    clock_t time_start, time_stop;
    switch(sv){
    case 1:
        time_start = clock();
        for(i=1; i<kmax; i++){
            B=vect[i];
            j=0;
            while(vect[j]<B)
                j++;
            for(r=i-1; r>=j; r--)
                vect[r+1]=vect[r];
            vect[j]=B;
        }
        time_stop = clock();
        return time_stop - time_start;
        break;
    case 2:
        time_start = clock();
        L=0;R=kmax-1;
        while(L<R){
            imin=L;
            imax=L;
            for(i=L+1;i<=R;i++){
                if(vect[i]<vect[imin])
                    imin=i;
                else
                    if(vect[i]>vect[imax])
                        imax=i;
            }
            if(imin!=L){
                B=vect[imin];
                vect[imin]=vect[L];
                vect[L]=B;
            }
            if(imax!=R){
                if(imax==L){
                    B=vect[imin];
                    vect[imin]=vect[R];
                    vect[R]=B;
                }
                else{
                    B=vect[imax];
                    vect[imax]=vect[R];
                    vect[R]=B;
                }
            }
            L=L+1;
            R=R-1;
       }
       time_stop = clock();
      return time_stop - time_start;
       break;
    case 3:
        time_start = clock();
        L=0;R=kmax-1;l=0;
        while(L<R){
            for(i=L;i<R;i++){
                if(vect[i]>vect[i+1]){
                    B=vect[i];
                   vect[i]=vect[i+1];
                    vect[i+1]=B;
                    l=i;
                }
            }
            R=l;
            for(i=R-1;i>=L;i--){
                if(vect[i]>vect[i+1]){
                    B=vect[i];
                    vect[i]=vect[i+1];
                    vect[i+1]=B;
                    l=i;
                }
            }
            L=l+1;
        }
        time_stop = clock();
         return time_stop - time_start;
        break;
    default:
        break;
    }
}

clock_t qsort_vect(int zv)//вимір часу швидеого сортування
                   //для вектору
{
    int ros=0;
    switch(zv){
    case 1:
        for(i=0;i<kmax;i++)    //заповнення вектору
            vect[i]=ros++;  //згідно ознаки, що вибрав користувач
        break;
    case 2:
        for(i=0;i<kmax;i++)
            vect[i]=rand()%kmax;
        break;
    case 3:
        ros=kmax;
        for(i=0;i<kmax;i++)
            vect[i]=ros--;
        break;
    default:
        break;
    }
    clock_t time_start, time_stop;
    time_start = clock() ;
    qsort_v(0,kmax-1);
    time_stop = clock();
    return time_stop - time_start;
}
void qsort_v(int L, int R)
{
    int i,x,j,B;
    i=L; j=R;
    x=vect[(L+R)/2];
    while(i<=j){
        while(vect[i]<x)
            i++;
        while(vect[j]>x)
            j--;
        if(i<=j){
            B=vect[i];
            vect[i]=vect[j];
            vect[j]=B;
            i++;
            j--;
        }
    }
    if(L<j)
        qsort_v(L,j);
    if(i<R)
        qsort_v(i,R);
}

