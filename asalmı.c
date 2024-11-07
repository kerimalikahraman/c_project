#include<math.h>
#include<stdio.h>

int sayi;
int sayiasalmi(int sayi);

int main()
{
    printf("lütfen asal olup olmadiğini öğrenmek istediğiniz sayiyi giriniz bir sayi giriniz ");
    scanf("%d", &sayi);
    if(sayiasalmi(sayi)){
        printf("bu bir asal sayidir");
    }
    else{
        printf("bu bir asal sayi değildir");
    }

    }

int sayiasalmi(int sayi)
{
    for(int i = 2; i<sayi ; i++){

        if(sayi % i == 0){
            return 0;
        }

    }

    if (sayi <2)
    {0
        return 0;
    }
    

return 1;

} 