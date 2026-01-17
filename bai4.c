/******************************************************************************
 * Họ và tên: [Võ Quốc Thịnh]
 * MSSV:      [PS48006]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 4: XÂY DỰNG MENU CHƯƠNG TRÌNH CHO 3 BÀI TẬP TRÊN 
//  Sử dụng lệnh Switch-case để xây dựng menu chương trình cho 3 bài tập trên 

#include <stdio.h>

int main(){
    
    // Khai báo biến
    int choice;



    // Nhập dữ liệu
    printf("Menu Chương Trình:\n");
    printf("1. Tính Học Lực\n");

    printf("2. Giải Phương Trình Bậc 1\n");
    printf("3. Tính Tiền Điện\n");
    printf("Lựa chọn của bạn (1-3): ");
    scanf("%d", &choice);   



    // Xử lý, tính toán VÀ Hiển thị kết quả
    switch (choice) {
        case 1:
            // Gọi hàm hoặc đoạn mã tính học lực ở đây
            printf("Bạn đã chọn Tính Học Lực.\n");
            break;
        case 2:
            // Gọi hàm hoặc đoạn mã giải phương trình bậc 1 ở đây
            printf("Bạn đã chọn Giải Phương Trình Bậc 1.\n");
            break;
        case 3:
            // Gọi hàm hoặc đoạn mã tính tiền điện ở đây
            printf("Bạn đã chọn Tính Tiền Điện.\n");
            break;
        default:
            printf("Lựa chọn không hợp lệ. Vui lòng chọn từ 1 đến 3.\n");
    }   
    return 0;

}