//faiz hesaplama 24.09.2024
#include<stdio.h>
#include<math.h>

int main(){

    float zaman ,faiz_orani , para , son_para;


    printf("lütfen ana parayi giriniz :");
    scanf("%f", &para);

    printf("lütfen zamani giriniz :");
    scanf("%f", &zaman);

    printf("lütfen faiz oranini giriniz :");
    scanf("%f", &faiz_orani);



    son_para = para * pow(faiz_orani , zaman);
    printf("%f", son_para);


}