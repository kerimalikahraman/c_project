#include<stdio.h>

int anadizi[] = {1 ,5 ,6, 8, 9, 9, 4, 9};
int main()
{

    int anadizi[] = {1 ,5 ,6, 8, 9, 9, 4, 9};  
    int boyut, sayi , indeks;

    boyut = sizeof(anadizi) / sizeof(anadizi[0]); 

    for(int a = 0 ; a<boyut ; a++)
    {
        printf("%d ",anadizi[a]);
    }

    printf("\neklemek istediğiniz sayiyi giriniz ");
    scanf("%d", &sayi);

    printf("\nhangi indekse eklemek istiyorsunuz ");
    scanf("%d", &indeks);

    for(int i= boyut-1 ; i>indeks ; i-- ){

        anadizi[i] = anadizi[i -1];
    }
    anadizi[indeks] = sayi;

    for(int a = 0 ; a<=boyut+1 ; a++)
    {
        printf("%d ",anadizi[a]);
    }

    return 0;
}



