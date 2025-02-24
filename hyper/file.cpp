#include <iostream>
#include <fstream>
#include <windows.h>

int main() {
    std::ofstream file("example.txt");
    file << "This is a locked file!";
    file.close();

    // Thay đổi quyền truy cập tệp thành chỉ đọc
    const char* filename = "example.txt";
    DWORD attrs = GetFileAttributesA(filename);
    if (attrs != INVALID_FILE_ATTRIBUTES) {
        SetFileAttributesA(filename, FILE_ATTRIBUTE_READONLY);
    }

    std::cout << "File 'example.txt' is now locked!" << std::endl;
    return 0;
}
