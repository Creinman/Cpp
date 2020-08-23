#include <iostream>
using namespace std;

#define MAX_COORD 100
#define UN_DEFINED -1000

class Point {
    private:
        int x, y;

    public:
        void setCoord(int x, int y) { //метод класса
            if (x >= -MAX_COORD && x<= MAX_COORD) this->x = x;
            if (y >= -MAX_COORD && y<= MAX_COORD) this->y = y;
        }

        int getX() { return (x >= -MAX_COORD && x<= MAX_COORD) ? x: UN_DEFINED;}
        int getY() { return (y >= -MAX_COORD && y<= MAX_COORD) ? y: UN_DEFINED;}
};

int main()
{
    setlocale(LC_ALL, "rus");

    Point pt;
    pt.setCoord(200, 3);
    cout << pt.getX() << " " << pt.getY() << endl;
    return 0;
}
