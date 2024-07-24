#include <iostream> // thu vien ho tro viec nhap xuat
using namespace std;


int main() { // ham chinh dong vai tro nhu bo nao - noi xu ly trung tam, xu ly cac dong lenh
//    int a; // khai bao bien so nguyen chua gia tri la so nguyen
//    float b = 4.5; // khoi tao bien so thuc b chua gia tri la so thuc
//    b = 8;
//    const int pi = 3.14; // khoi tao bien hang co gia tri la 3.14, gia tri cua bien hang khong the thay doi dc trong suot chuong trinh
//    system("pause"); // dung man hinh
    
    // Nhap vao 2 so nguyen a va b. Tinh tong a + b
    int a, b; // khai bao 2 bien so nguyen a va b
    cout << "Nhap gia tri bien a: ";
    cin >> a; // ch trinh cho nhap gia tri a va cho cho toi khi an phim enter thi dung
    cout << "Nhap gia tri bien b: ";
    cin >> b;
    // int ketqua = a + b;
    cout << "Ket qua: " << a + b;
    return 0;
}
