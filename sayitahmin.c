#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int randomSayi , tahmin;

    srand(time(NULL));

    randomSayi = rand();
    randomSayi = (randomSayi % 10) + 1;

    printf("10 ile 1 arasinda bir sayiyi tahmina edin \n");
    
    while(1)
    {
        
        if (scanf("%d",&tahmin) != 1)
        {
            printf("sayi girmediniz \n");
        }
        else{
            if(tahmin == randomSayi){
                printf("dogru cevap \n");
                break;
            }
            else{
                printf("tekrar deneyin \n");
            }
        }
    }
    
    
    

    return 0;
}
