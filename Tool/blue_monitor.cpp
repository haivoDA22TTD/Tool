#include <windows.h>
#include <iostream>

int main() {
    // Tạo màn hình xanh giả
    system("color 1F");
    std::cout << "A problem has been detected and Windows has been shut down to prevent damage to your computer.\n";
    std::cout << "If this is the first time you've seen this Stop error screen, restart your computer.\n";
    std::cout << "Technical Information: *** STOP: 0x0000008E (0xC0000005, 0xBF92A9A4, 0xA19938AC, 0x00000000)\n";
    return 0;
}
