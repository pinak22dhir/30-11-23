#include <iostream>
#include <cmath>
using namespace std;

class Point {
     int x, y;
public:
    Point(int p1, int p2)  {
        x=x;
        y=y;
    }

    // Declare the friend function
    friend double distanceBetweenPoints(Point& point1,  Point& point2);


  
};

// Define the friend function
double distanceBetweenPoints(Point& point1,  Point& point2) {
    double dx = point1.x - point2.x;
    double dy = point1.y - point2.y;
    return std::sqrt(dx * dx + dy * dy);
}

int main() {
    // Example usage:
    Point point1(1.0, 2.0);
    Point point2(4.0, 6.0);

    double distance = distanceBetweenPoints(point1, point2);
  cout << "The distance between the two points is: " << distance << std::endl;

    return 0;
}