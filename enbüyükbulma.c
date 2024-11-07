#include<stdio.h>

int main()
{
    int dizi[]={1 ,5, 7, 8 ,36,8,4,76,654,65469,3536,5786,74563363};
    int uzunluk = sizeof(dizi)/sizeof(dizi[1]);
    int bsayi;
    for(int i =0;i<uzunluk;i++){
        if (i ==0)
        {
            bsayi= dizi[0];
        }
        
        if (dizi[i]>bsayi)
        {
            bsayi = dizi[i];
        }
        
    }
    printf("%d",bsayi);
    return 0;
}
