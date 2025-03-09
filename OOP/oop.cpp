#include <iostream>
using namespace std;

// Định nghĩa lớp Car
class Car {
private:
    // Các thuộc tính riêng tư
    string brand;
    int year;
    double price;

public:
    // Constructor (Hàm khởi tạo)
    Car(string b, int y, double p) {
        brand = b;
        year = y;
        price = p;
    }

    // Hàm thành viên (Member function) để hiển thị thông tin
    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
        cout << "Price: $" << price << endl;
    }

    // Getter và Setter cho thuộc tính brand
    void setBrand(string b) {
        brand = b;
    }

    string getBrand() {
        return brand;
    }

    // Getter và Setter cho thuộc tính year
    void setYear(int y) {
        year = y;
    }

    int getYear() {
        return year;
    }

    // Getter và Setter cho thuộc tính price
    void setPrice(double p) {
        price = p;
    }

    double getPrice() {
        return price;
    }
};

// Hàm main
int main() {
    // Tạo đối tượng Car
    Car car1("Toyota", 2020, 25000.5);

    // Gọi phương thức để hiển thị thông tin của car1
    car1.displayInfo();

    // Cập nhật thông tin cho car1
    car1.setBrand("Honda");
    car1.setYear(2022);
    car1.setPrice(28000);

    cout << "\nUpdated Car Information:\n";
    car1.displayInfo();

    return 0;
}
