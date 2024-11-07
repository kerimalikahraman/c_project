#include<stdio.h>

int main(){
    int sayi, toplam;
    toplam = 0;
    sayi = 1;
    printf("lutfen toplamak istediginiz sayiyi girin cikmak icin sifir girin ");
    if (scanf("%d",&sayi) != 1){
        printf("hatali giriş");
    }
    else{
        while (sayi != 0)
        {
          printf("lutfen toplamak istediginiz sayiyi girin cikmak icin sifir girin ");
          if (scanf("%d",&sayi) != 1){
            printf("hatali giriş");
            return 0;
            }
          else{
            toplam += sayi;
          }
        }
        printf("%d",toplam);
    }
    
    

    return 0;
}
