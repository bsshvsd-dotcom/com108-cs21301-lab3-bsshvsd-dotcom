/******************************************************************************
 * Họ và tên: [võ quốc thịnh]
 * MSSV:      [PS48006]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TIỀN ĐIỆN 
//  Input: Nhập vào số điện tiêu thụ hàng tháng 
//  Output: Hiển thị số tiền cần phải đóng
 
#include <stdio.h>

int main(){
    
    // Khai báo biến
    int soDien;
    float tienDien;


    // Nhập dữ liệu
    printf("Nhập số điện tiêu thụ trong tháng: ");
    scanf("%d", &soDien);



    // Xử lý, tính toán VÀ Hiển thị kết quả
    if (soDien <= 50) {
        tienDien = soDien * 1000;
    } else {
        tienDien = 50 * 1000 + (soDien - 50) * 1200;
    }

    printf("Số tiền điện phải trả là: %.2f\n", tienDien);
    return 0;       

}