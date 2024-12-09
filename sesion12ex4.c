#include <stdio.h>
int timMang(int arr[],int soPhanTu);
int main(){
    int soPhanTu;
    printf("nhap so phan tu mang: ");
    scanf("%d",&soPhanTu);
    int arr[soPhanTu];
    for (int i = 0; i < soPhanTu; i++){
        printf("Nhap phan tu thu %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int max =timMang(arr,soPhanTu);
    printf("phan tu lon nhat trong mang la: %d",max);
    return 0;
}
int timMang(int arr[],int soPhantu){
    int max = arr[0];
    for (int i = 0; i < soPhantu; i++){
        if (arr[i]>max)
        {
            max = arr[i];
        }
        
    }
    return max;
}