#include <iostream>
using namespace std;

class Point {
private:
    float x;
    float y;

public:
    Point(double XCoord, double YCoord) : x(XCoord), y(YCoord) {}

    double getX(){
        return x;
    }
    void setX(float newX){
        x = newX;
    }

    double getY(){
        return y;
    }
    void setY(float newY){
        y = newY;
    }

    // Calculateing distance b/w 2 points
    double dist(Point& otherPoint)  {
        double deltaX = x - otherPoint.getX();
        double deltaY = y - otherPoint.getY();
        return sqrt(deltaX * deltaX + deltaY * deltaY);
    }
};

int main() {
    Point point1(2.0, 2.0);
    Point point2(5.0, 1.0);

    cout << "Point 1: (" << point1.getX() << ", " << point1.getY() << ")" << endl;
    cout << "Point 2: (" << point2.getX() << ", " << point2.getY() << ")"<<endl;

    double dist = point1.dist(point2);
    cout << "Distance between the two points: " << dist << endl;

    return 0;
}




/*Implement a class named Point to represent a point with x and y coordinates. The class contains:
? Two attributes x and y that represent coordinates.
? Methods to get and set these attributes.
? A constructor that creates a point with specified coordinates.
A method named distance that returns the distance from the current point to another point whose x
and y coordinates are sent as arguments.*/