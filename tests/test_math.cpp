#include <iostream>
#include "../src/math/vec3.h"

using namespace std;

int main() {
    // Vec3 a;
    // Vec3 b(1.0f, 2.0f, 3.0f);
    // Vec3 c(5.0f);

    // std::cout << "vector initialization" << std::endl;
    // std::cout << a.x << " " << a.y << " " << a.z << std::endl;
    // std::cout << b.x << " " << b.y << " " << b.z << std::endl;
    // std::cout << c.x << " " << c.y << " " << c.z << std::endl;

    Vec3 v1(1.0f, 2.0f, 3.0f);
    Vec3 v2(4.0f, 5.0f, 6.0f);
    Vec3 v3(3.0f, 4.0f, 0.0f);

    Vec3 a1(1.0f, 0.0f, 0.0f);
    Vec3 a2(0.0f, 1.0f, 0.0f);
    Vec3 a3(1.0f, 0.0f, 0.0f);

    Vec3 sum = v1 + v2;
    Vec3 diff = v1 - v2;
    Vec3 scalar = v1 * 3.0f;
    float size1 = v3.length();
    float size2 = v1.length();

    Vec3 norm1 = v1.normalize();
    Vec3 norm2 = v3.normalize();

    std::cout << "operator overloading" << std::endl;
    std::cout << sum.x  << " " << sum.y  << " " << sum.z  << std::endl; 
    std::cout << diff.x << " " << diff.y << " " << diff.z << std::endl; 
    std::cout << scalar.x << " " << scalar.y << " " << scalar.z << std::endl; 
    
    
    std::cout << "size1 is " << size1 << std::endl; 
    std::cout << "size2 is " << size2 << std::endl; 
    
    std::cout << "norm1 is " << norm1.x << " " << norm1.y  << " " << norm1.z << std::endl; 
    std::cout << "norm2 is " << norm2.x << " " << norm2.y << " " << norm2.z << std::endl; 
    std::cout << "norm2 size is " << norm2.length() << std::endl; 

    std::cout << "dot and cross product" << std::endl;
    std::cout << "dot v1 v2 is " << v1.dot(v2) << std::endl;
    std::cout << "dot1 is " << a1.dot(a2) << std::endl;
    std::cout << "dot2 is " << a1.dot(a3) << std::endl;
    std::cout << "cross1 is " << a1.cross(a2).x << " " << a1.cross(a2).y << " " << a1.cross(a2).z << std::endl;
    std::cout << "cross2 is " << a1.cross(a3).x << " " << a1.cross(a3).y << " " << a1.cross(a3).z << std::endl;    
    

    return 0;
}