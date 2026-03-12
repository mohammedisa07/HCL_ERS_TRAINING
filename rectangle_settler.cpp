#include <iostream>
#include <stdexcept>
using namespace std;

class Rectangle {
private:
    double width;
    double height;

public:
    void setWidth(double w) {
        if (w <= 0) {
            throw invalid_argument("Width must be positive");
        }
        this->width = w;
    }

    void setHeight(double h) {
        if (h <= 0) {
            throw invalid_argument("Height must be positive");
        }
        this->height = h;
    }

    double getWidth() {
        return width;
    }

    double getHeight() {
        return height;
    }

    double area() {
        return width * height;
    }
};

int main() {
    Rectangle r;

    try {
        r.setWidth(10);
        r.setHeight(5);
        cout << "Rectangle area: " << r.area() << endl;

        cout << "\nTrying to set negative width...\n";
        r.setWidth(-4);
    }
    catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }

    try {
        cout << "\nTrying to set height = 0...\n";
        r.setHeight(0);
    }
    catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}