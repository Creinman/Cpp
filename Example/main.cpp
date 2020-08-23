#include <iostream>
using namespace std;

#define MAX_COORD 100
#define UN_DEFINED -1000

class Point {
    private:
        int x, y; //if x=y=0 -> result "0   3"

    public:
        void setCoord(int x, int y) { //метод класса
            if (x >= -MAX_COORD && x<= MAX_COORD) this->x = x;
            if (y >= -MAX_COORD && y<= MAX_COORD) this->y = y;
        }

        int getX() { return (x >= -MAX_COORD && x<= MAX_COORD) ? x: UN_DEFINED;}
        int getY() { return (y >= -MAX_COORD && y<= MAX_COORD) ? y: UN_DEFINED;}
};
//function will be return classes object
Point& foo(Point& a) { //reference to object
    cout << a.getX() << " " << a.getY() << endl;
    return a;
}

int main()
{
    setlocale(LC_ALL, "rus");

    Point pt;
    pt.setCoord(2, 3);

    Point pt2 = foo(pt);
    cout << "x= " << pt2.getX() << " y=" <<pt2.getY() << endl;
}
