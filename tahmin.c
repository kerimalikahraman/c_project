#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    srand(time(0));
    int sayi = rand() % 100 +1;
    int tahmin;


    while (1)
    {
        printf("lutfen 100 ila 0 arasinda bir sayi tahmin ediniz ");
        scanf("%d",&tahmin);
        if (tahmin > 0 && tahmin < 101)
        {
            
        }
        else{
            printf("gecersiz deger");
            continue;
        }
       if (tahmin < sayi)
       {
        printf("daha buyuk bir deger girin \n");
       }
       if (tahmin > sayi)
       {
        printf("daha kucuk bir deger girin\n");
       }
       if(sayi== tahmin){
        printf("dogru bildiniz");
        break;
       }
       
       
    }
    
    
    
    return 0;
}
