#include <stdio.h>
int tinhTong();
int main(){
    int sum;
    sum = tinhTong();
    printf("Tong 2 so la: %d",sum);
    return 0;
}
int tinhTong(){
    int number1,number2;
    printf("Moi ban nhap so thu nhat: ");
    scanf("%d", &number1);
    printf("Moi ban nhap so thu hai: ");
    scanf("%d", &number2);
    return number1 + number2;
}