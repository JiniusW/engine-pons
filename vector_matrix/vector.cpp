# include <iostream>
# include <string>
# include <string.h>
using namespace std;

class Vec3 {
    private:
    // a(1.0f, 2.0f, 3.0f);

    public:
    Vec3(float x, float y, float z);
    int x_ = 0;
    int y_ = 0;
    int z_ = 0;

};

Vec3::Vec3(float x, float y, float z)
{
    x_ = x;
    y_ = y;
    z_ = z;
}

int main()
{
    // declair 3D Vector
    Vec3 a(1.0f, 2.0f, 3.0f);
    Vec3 b(4.0f, 5.0f, 6.0f);

    
    // sum
    // Vec3 c = a + b
    // minus
    // Vec3 d = a - b;
    // scala product
    // Vec3 e = a * 2.0f;
    // inner product
    // float dot = a.dot(b);
    // cross product
    // Vec3 cross = a.cross(b);
    // size
    // float len = a.length();
    // Vec3 n = a.normalize();

    return 0;
}