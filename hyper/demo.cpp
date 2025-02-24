#include <windows.h>
#include <iostream>

int main() {
    for (int i = 0; i < 5; i++) {  // Mở 5 cửa sổ Command Prompt
        system("start cmd");
        Sleep(5000);  // Tạm dừng 1 giây trước khi mở cửa sổ tiếp theo
    }
    return 0;
}
