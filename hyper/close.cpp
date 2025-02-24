#include <windows.h>
#include <iostream>

int main() {
    while (true) {
        system("start notepad.exe");  // Mở Notepad
        Sleep(3000);  // Tạm dừng một chút trước khi đóng
        system("taskkill /IM notepad.exe /F");  // Đóng Notepad
    }
    return 0;
}
