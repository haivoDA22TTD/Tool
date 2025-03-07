#include <iostream> // Khai báo thư viện tiêu chuẩn
#include <windows.h> // Khai báo thư viện của hệ điều hành Windows
    // Hàm main
        int main(){
                // Hiển thị hộp thoại thông báo xác nhận cho người dùng
            int check = MessageBoxW(NULL, L"Bạn có muốn cài đặt file này vào máy của bạn không ?", L"Xác Nhận", MB_YESNO); 
                // Kiểm tra điều kiện
            if(check == IDYES) //Nếu người dùng chọn yes thì sẽ hiển thị thông báo này
                 {
                MessageBoxW(NULL, L"Máy bạn đã bị nhiễm 1000 con VIRUS", L"Cảnh Báo", MB_OKCANCEL);
            }  // Nếu người dùng chọn No thì sẽ hiển thị thông báo này
            else{ // Tạo vòng lặp vô tận
                    while(true){
                MessageBoxW(NULL, L"Hệ thống gặp phải lỗi nghiêm trọng vui lòng chờ trong giây lát", L"Thông Báo", MB_OK | MB_ICONEXCLAMATION);
                    }
            }
            return 0;
        }