#include <iostream>
#include <cmath>

using namespace std;

struct Point {
    double x;
    double y;
};

double calculateDistance(const Point& point1, const Point& point2) {
    double deltaX = point2.x - point1.x;
    double deltaY = point2.y - point1.y;
    return sqrt(deltaX * deltaX + deltaY * deltaY);
}

int main() {
    Point pointA = { 1.0, 2.0 };
    Point pointB = { 4.0, 6.0 };

    cout << "Point A: (" << pointA.x << ", " << pointA.y << ")\n";
    cout << "Point B: (" << pointB.x << ", " << pointB.y << ")\n";

    double distance = calculateDistance(pointA, pointB);
    cout << "Distance between points A and B: " << distance << endl;

    return 0;
}