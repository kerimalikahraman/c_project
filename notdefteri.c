#include<stdio.h>

int dosyayaz(char veri[100],char isim[20]){
    FILE *dosya = fopen(isim,"w");
    fprintf(dosya,"%s",veri);
    fclose(dosya);
    return 0;
}
int dosyaoku(char disim[25]){
    char satir[100];
    FILE *dosya = fopen(disim,"r");

    if(dosya == NULL){
        return 0;
    }
    while (fgets(satir, sizeof(satir), dosya) != NULL) {
        printf("%s", satir);
    

    }
    
    fclose(dosya);
    return 0;
}

int main()
{   
    char veri[100] ={0},isim[20] ={0},tamdosyaismi[25]= {0};
    int x;
    printf("dosyaya veri yazmak icin 1'i , veri okumak icin 2'ye basin \n");
    scanf("%d",&x);
    if (x == 1)
    {
        printf("oluşturmak istediğiniz dosyanin ismini yaziniz \n");
        scanf("%s",isim);
        sprintf(tamdosyaismi,"%s.txt",isim);
        printf("ne yazmak istiyorsunuz \n");
        scanf("%s",veri);
        dosyayaz(veri,tamdosyaismi);
        return 0;
    }
    else if (x == 2)
    {
        printf("okumak istediginiz dosyanin ismini yaziniz");
        scanf("%s",isim);
        sprintf(tamdosyaismi,"%s.txt",isim);
        dosyaoku(tamdosyaismi);
    }
    else{
        printf("hatali tuslama yaptiniz");
        return 0;
    }

    
}
