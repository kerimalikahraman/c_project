 #include<stdio.h>
 #include<stdlib.h>
 #include<time.h>
 #include <windows.h>

 int rasgelesayi(){
    
    return (rand() % 49) + 1;
 }

 int main()
 {
    int dizi[6],tahmin[6],dogru = 0;
    srand(time(NULL));
    printf("sayisal loto | 1 ila 49 arasinda 6 sayi tahmin ediniz \n");
    for(int i=0; i<6 ; i++){
        dizi[i] = rasgelesayi();
        }
        printf("\n");
    for (int i=0; i<6 ; i++)
    {
        scanf("%d",&tahmin[i]);
    }
    for (int i=0; i<6 ; i++)
    {
        for (int a=0; a<6 ; a++)
        {
            if (dizi[i] == tahmin[a])
            {
                dogru = dogru + 1;
            }
            
        }
        
    }
    printf("%d sayiyi dogru bildiniz\nloto sonucu:\n ",dogru);
    for (int i=0; i<6 ; i++){
        printf("%d ",dizi[i]);
    }
    
    if (dogru == 3)
    {
        printf("Küçük ödül kazandiniz");
    }
    else if (dogru == 4)
    {
        printf("Orta ödül kazandiniz");
    }
    else if (dogru == 5)
    {
        printf("büyük ödül kazandiniz");
    }
    else if (dogru == 6)
    {
        printf("Büyük ikramiye (jackpot) kazandiniz");
    }
    else{
        printf("kazanamadiniz");
    }
    return 0;
 }
 