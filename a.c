#include<stdio.h>
#include<math.h>

int main(){
    int sayi1 ,sayi2 , toplam ,fark ,carpim , mod;
float bolum;


printf("lütfen iki sayi giriniz :");
scanf("%d%d" , &sayi1 , &sayi2);

toplam = sayi1 + sayi2;
fark = sayi1 - sayi2;
carpim = sayi1 * sayi2;
bolum =(float)sayi1 / sayi2;
mod = sayi1 % sayi2;

printf("%d\n", toplam);
printf("%d\n", fark);
printf("%d\n", carpim);
printf("%f\n" ,bolum);
printf("%d\n", mod);

return 0;
};