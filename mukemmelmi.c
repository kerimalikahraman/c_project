#include<stdio.h>

int sayimukemmelmi(int sayi);


int main()
{
    int sayi;

    printf("mukemmel olup olmadiğini öğrenmek istediğiniz sayiyi gir");
    scanf("%d", &sayi);

    if (sayimukemmelmi(sayi))
    {
       printf("bu sayı mükemmel");
    }
    else{
        printf("bu sayı mükemmel değil");
    }

    return 0;
}

int sayimukemmelmi(int sayi)
{
    int toplam = 1;

    for ( int i = 2; i <= sayi/2; i++)
    {

        if(sayi % i == 0){
            toplam = toplam + i;
        }
    }

    return toplam == sayi;
}

