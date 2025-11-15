#include <stdio.h>
#define PI 3.14

int main(){
    //bai 1: Tinh tong va hieu 2 so nguyen
    int a, b, tong, hieu;
    printf("nhap vao 2 so: ");
    scanf("%d %d",&a,&b);

    //bai 2: tinh chu vi va dien tich HCn
    float chieudai, chieurong;
    printf("\nNhap vao chieudai va chieurong: ");
    scanf("%f %f", &chieudai, &chieurong);

    float chuvi = (chieudai + chieurong) * 2;
    float dientich = chieudai * chieurong;

    //bai 3: tinh chu vi va dien tich Hinh tron
    float bankinh;
    printf("\nhap vao ban kinh hinh tron: ");
    scanf("%f", &bankinh);
    float chuvihtron = 2 * PI * bankinh;
    float dientichhtron = PI * bankinh * bankinh;
    //xuat ket qua)
    tong = a + b;
    hieu = a - b;
    printf("chu vi HCN: %.2f", chuvi);
    printf("\ndien tich HCN: %.2f", dientich);
    printf("\nchu vi hinh tron : %.2f", chuvihtron);
    printf("\ndien tich hinh tron: %.2f", dientichhtron);
    printf("\ntong 2 so nguyen: %d", tong);
    printf("\nhieu 2 so nguyen: %d", hieu);
    
    //bai 4 : xay dung chuong trinh tinh diem trung binh 
    float diemtoan, diemly, diemhoa, diemtb;
    printf("\nnhap vao diem toan, ly, hoa: ");
    scanf("%f %f %f", &diemtoan, &diemly, &diemhoa);
    diemtoan*=3; diemly*=2; diemhoa*=1;
    diemtb = (diemtoan + diemly + diemhoa) / 3;
    printf("diem trung binh: %.2f", diemtb);
    
    //bai 5 tinh chu vi va dien tich hinh tam giac vuong
    float canh1, canh2;
    printf("\nnhap vao 2 canh ke hinh tam giac vuong: ");
    scanf("%f %f", &canh1, &canh2);
    float chuvi_tamgiac = canh1 + canh2 + (float)(canh1*canh1 + canh2*canh2);
    float dientich_tamgiac = (canh1 * canh2) / 2;
    printf("chu vi hinh tam giac vuong: %.2f", chuvi_tamgiac);
    printf("\ndien tich hinh tam giac vuong: %.2f", dientich_tamgiac);
    return 0;
    


}