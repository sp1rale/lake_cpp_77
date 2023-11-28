#include <iostream>

using namespace std;

struct Rectangle {
    double height;
    double width;
    double x;
    double y;
};

void moveRectangle(Rectangle& rect, double deltaX, double deltaY) {
    rect.x += deltaX;
    rect.y += deltaY;
}

void resizeRectangle(Rectangle& rect, double newWidth, double newHeight) {
    rect.width = newWidth;
    rect.height = newHeight;
}

void printRectangle(const Rectangle& rect) {
    cout << "Rectangle: "
        << "Width = " << rect.width << ", Height = " << rect.height
        << ", X = " << rect.x << ", Y = " << rect.y << endl;
}

int main() {
    Rectangle myRectangle;

    cout << "Enter width: ";
    cin >> myRectangle.width;

    cout << "Enter height: ";
    cin >> myRectangle.height;

    cout << "Enter initial X coordinate: ";
    cin >> myRectangle.x;

    cout << "Enter initial Y coordinate: ";
    cin >> myRectangle.y;

    printRectangle(myRectangle);

    double deltaX, deltaY;
    cout << "Enter X shift: ";
    cin >> deltaX;

    cout << "Enter Y shift: ";
    cin >> deltaY;

    moveRectangle(myRectangle, deltaX, deltaY);
    printRectangle(myRectangle);

    double newWidth, newHeight;
    cout << "Enter new width: ";
    cin >> newWidth;

    cout << "Enter new height: ";
    cin >> newHeight;

    resizeRectangle(myRectangle, newWidth, newHeight);
    printRectangle(myRectangle);

    return 0;
}