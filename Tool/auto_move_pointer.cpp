#include <windows.h>
#include <cstdlib>
#include <ctime>

int main() {
    // Khởi tạo seed cho số ngẫu nhiên
    std::srand(std::time(0));

    // Lấy kích thước màn hình
    int screenWidth = GetSystemMetrics(SM_CXSCREEN);
    int screenHeight = GetSystemMetrics(SM_CYSCREEN);

    while (true) {
        // Tạo vị trí ngẫu nhiên trong phạm vi màn hình
        int x = std::rand() % screenWidth;
        int y = std::rand() % screenHeight;

        // Di chuyển con trỏ chuột đến vị trí ngẫu nhiên
        SetCursorPos(x, y);

        // Dừng một thời gian ngẫu nhiên từ 500ms đến 2000ms
        Sleep(5000 + std::rand() % 1500);
    }

    return 0;
}
