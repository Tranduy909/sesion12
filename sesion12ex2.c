#include <stdio.h>
void inMang(int arr[],int kickCo);
int main(){
    int kichCo;
    printf("Nhap kich co mang: ");
    scanf("%d",&kichCo);
    int arr[kichCo];
    printf("\nNhập các phần tử của mảng:\n");
    for (int i = 0; i < kichCo; i++) {
        printf("Phần tử thứ %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    inMang(arr,kichCo);
    return 0;
}
void inMang(int arr[], int kichCo) {
    printf("Các phần tử trong mảng là: ");
    for (int i = 0; i < kichCo; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}