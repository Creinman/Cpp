#include <iostream>
using namespace std;

#define MAX_COORD 100
#define UN_DEFINED -1000

class Point {
    private:
        int x, y;

    public:
        void setCoord(int pt_x, int pt_y) { //метод класса
            if (pt_x >= -MAX_COORD && pt_x<= MAX_COORD) x = pt_x;
            if (pt_y >= -MAX_COORD && pt_y<= MAX_COORD) y = pt_y;
        }

        int getX() { return (x >= -MAX_COORD && x<= MAX_COORD) ? x: UN_DEFINED;}
        int getY() { return (y >= -MAX_COORD && y<= MAX_COORD) ? y: UN_DEFINED;}
};

int main()
{
    setlocale(LC_ALL, "rus");

    Point pt;
    pt.setCoord(300, 3);
    cout << pt.getX() << " " << pt.getY() << endl;
    return 0;
}
