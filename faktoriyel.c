#include<stdio.h>
int faktoriyel(int sayi);
int main()
{
    int sayi;
    printf("faktoriyelini hesaplamak istediğiniz sayiyi girin\n");
    scanf("%d",&sayi);
    int sonuc = faktoriyel(sayi);
    printf("%d",sonuc);
    return 0;
}
int faktoriyel(int sayi){
    int carpim = 1;
    for(int i = sayi;i>0;i--){
        carpim = carpim *i;

    }
    return carpim;
}