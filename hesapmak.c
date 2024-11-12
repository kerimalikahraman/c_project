#include<stdio.h>
int main()
{
    int x = 1;
    while (x == 1)
    {
        printf("lütfen yapmak istediğininz işlemi seçiniz \n 1 toplama \n 2 çikarma \n 3 çarpma \n 4 bölme \n 5 cikis?\n");
        int islem ,sayi,sayi2;
        scanf("%d",&islem);
        if (islem ==  5)
        {
            break;
        }
        
        scanf("%d",&sayi);
        scanf("%d",&sayi2);
        switch (islem)
        {
        case 1:
            printf("%d\n",sayi + sayi2);
            break;
        
        case 2:
            printf("%d\n",sayi - sayi2);
            break;
        
        case 3:
            printf("%d\n",sayi * sayi2);
            break;
        case 4:
            printf("%d\n",sayi + sayi2);
            break;
        
        case 5:
            break;
        default:
            printf("geçersiz deger");
            break;
        }
    }
    
    return 0;
}
