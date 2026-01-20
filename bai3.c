/******************************************************************************
 * Họ và tên: [võ quốc thịnh]
 * MSSV:      [PS48006]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TIỀN ĐIỆN 
//  Input: Nhập vào số điện tiêu thụ hàng tháng 
//  Output: Hiển thị số tiền cần phải đóng

#include<stdio.h>

int main() {
    double soKwh, tienDien = 0;

    // Nhập dữ liệu
    cout << "Nhap vao so dien tieu thu hang thang (kWh): ";
    cin >> soKwh;

    if (soKwh < 0) {
        cout << "So dien khong hop le!" << endl;
    } else {
        // Tinh toan theo tung bac
        if (soKwh <= 50) {
            tienDien = soKwh * 1678;
        } else if (soKwh <= 100) {
            tienDien = (50 * 1678) + (soKwh - 50) * 1734;
        } else if (soKwh <= 200) {
            tienDien = (50 * 1678) + (50 * 1734) + (soKwh - 100) * 2014;
        } else if (soKwh <= 300) {
            tienDien = (50 * 1678) + (50 * 1734) + (100 * 2014) + (soKwh - 200) * 2536;
        } else if (soKwh <= 400) {
            tienDien = (50 * 1678) + (50 * 1734) + (100 * 2014) + (100 * 2536) + (soKwh - 300) * 2834;
        } else {
            tienDien = (50 * 1678) + (50 * 1734) + (100 * 2014) + (100 * 2536) + (100 * 2834) + (soKwh - 400) * 2927;
        }
        // Hien thi ket qua
        cout << "So tien dien phai dong: " << tienDien << " VND" << endl;
    }

    return 0;
}