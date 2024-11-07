#include<stdio.h>
#include<math.h>

int sayi,basamak_sayisi, son_basamak , toplam = 0 ;
int armstromgmu(int sayi);

int main()
{
    scanf("%d",&sayi);
    if (sayi == armstromgmu(sayi))
    {
        printf("evet");
    }
    else{
        printf("hayır");
    }
    return 0;
}

int armstromgmu(int sayi){
    basamak_sayisi = (int) log10(sayi) +1;
    while (sayi >= 1)
    {
        son_basamak = sayi % 10;

        toplam = toplam + pow(son_basamak, basamak_sayisi);

        sayi = sayi/10;
    }
    
    return toplam;


}
