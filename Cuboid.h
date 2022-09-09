#include "Rectangle.h"
class Cuboid : public Rectangle
{
private:
    int height;

public:
    Cuboid(int len,int wid,int h);
    ~Cuboid();
    int areaCube();
    int volCube();
};
