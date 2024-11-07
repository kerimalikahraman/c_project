#include<stdio.h>

int fibonachi(int sayi);

int main()
{
    int m_sayi;
    printf("fibonachi dizisinin hangi terimini öğrenmek istersiniz");
    scanf("%d" , &m_sayi);
    int sonuc = fibonachi(m_sayi);
    printf("%d" , sonuc);
    return 0;
}

int fibonachi(int sayi){

    if(sayi == 1){
        return 1;
    }    
    if (sayi == 2)
    {
        return 1;
    }

    return fibonachi(sayi - 1) + fibonachi(sayi -2);
    
}