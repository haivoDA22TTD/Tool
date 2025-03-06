#include <windows.h>
#include <iostream>

int main() {
    // Vô hiệu hóa bàn phím (Fake Keyboard Lock)
    while (true) {
        BlockInput(TRUE);  // Vô hiệu hóa bàn phím và chuột
        Sleep(5000);
        BlockInput(FALSE); // Bật lại
    }
    return 0;
}
