#include <iostream>
#include <cmath>   // dùng sqrt() cho căn bậc hai
using namespace std;

// =========================
// BÀI 1: TÍNH HỌC LỰC
// =========================
void tinhHocLuc() {
    float dtb;
    cout << "Nhap diem trung binh (0-10): ";
    cin >> dtb;

    if (dtb < 0 || dtb > 10) {
        cout << "Diem khong hop le! Vui long nhap tu 0 den 10.\n";
    }
    else if (dtb >= 9)
        cout << "Hoc luc: Xuat sac\n";
    else if (dtb >= 8)
        cout << "Hoc luc: Gioi\n";
    else if (dtb >= 6.5)
        cout << "Hoc luc: Kha\n";
    else if (dtb >= 5)
        cout << "Hoc luc: Trung binh\n";
    else
        cout << "Hoc luc: Yeu\n";
}

// =========================
// BÀI 2: GIẢI PHƯƠNG TRÌNH BẬC NHẤT
// =========================
void giaiPTBac1() {
    float a, b;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;

    if (a == 0) {
        if (b == 0)
            cout << "Phuong trinh vo so nghiem.\n";
        else
            cout << "Phuong trinh vo nghiem.\n";
    } else {
        float x = -b / a;
        cout << "Phuong trinh co 1 nghiem: x = " << x << endl;
    }
}

// =========================
// BÀI 3: GIẢI PHƯƠNG TRÌNH BẬC 2
// =========================
void giaiPTBac2() {
    float a, b, c;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    cout << "Nhap c: ";
    cin >> c;

    if (a == 0) {
        // chuyển thành PT bậc 1
        if (b == 0) {
            if (c == 0)
                cout << "Phuong trinh vo so nghiem.\n";
            else
                cout << "Phuong trinh vo nghiem.\n";
        } else {
            float x = -c / b;
            cout << "Phuong trinh co 1 nghiem: x = " << x << endl;
        }
    } else {
        float delta = b*b - 4*a*c;

        if (delta < 0)
            cout << "Phuong trinh vo nghiem.\n";
        else if (delta == 0) {
            float x = -b / (2*a);
            cout << "Phuong trinh co nghiem kep: x = " << x << endl;
        } else {
            float x1 = (-b + sqrt(delta)) / (2*a);
            float x2 = (-b - sqrt(delta)) / (2*a);
            cout << "Phuong trinh co 2 nghiem phan biet:\n";
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
    }
}

// =========================
// BÀI 4: MENU CHƯƠNG TRÌNH
// =========================
int main() {
    int chon;

    do {
        cout << "\n===== MENU CHUONG TRINH =====\n";
        cout << "1. Tinh hoc luc sinh vien\n";
        cout << "2. Giai phuong trinh bac nhat (ax + b = 0)\n";
        cout << "3. Giai phuong trinh bac hai (ax^2 + bx + c = 0)\n";
        cout << "4. Thoat chuong trinh\n";
        cout << "==============================\n";
        cout << "Nhap lua chon cua ban (1-4): ";
        cin >> chon;

        switch (chon) {
            case 1:
                tinhHocLuc();
                break;
            case 2:
                giaiPTBac1();
                break;
            case 3:
                giaiPTBac2();
                break;
            case 4:
                cout << "Cam on ban da su dung chuong trinh!\n";
                break;
            default:
                cout << "Lua chon khong hop le, vui long nhap lai!\n";
        }
    } while (chon != 4);

    return 0;
}
