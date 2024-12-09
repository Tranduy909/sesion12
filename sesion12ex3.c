#include<stdio.h>
long long tinhGiaiThua(int n);
int main(){
    int n;
    printf("Nhap so nguyen bat ki: ");
    scanf("%d",&n);
    long long ketQua =tinhGiaiThua(n);
    printf("Giai thua cua %d la: %lld",n,ketQua);
    return 0;
}
long long tinhGiaiThua(int n){
    long long ketQua=1;
    for (int i = 1; i <= n; i++){
        ketQua *= i;
    }
    return ketQua;
}