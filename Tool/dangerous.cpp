#include <windows.h>
#include <iostream>

int main() {
    // Sử dụng MessageBoxW để hiển thị thông báo Unicode
    MessageBoxW(NULL, L"Máy bạn đã nhiễm Virus Wannacry", L"Cảnh báo", MB_OK | MB_ICONEXCLAMATION);
    return 0;
}
