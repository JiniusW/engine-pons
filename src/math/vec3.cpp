#include "vec3.h"
#include "cmath"

// default vector (0, 0, 0)
Vec3::Vec3(){
    this -> x = 0;
    this -> y = 0;
    this -> z = 0;
}
// generate vector (x, y, z)
Vec3::Vec3(float x, float y, float z){
    this -> x = x;
    this -> y = y;
    this -> z = z;
}
// same vector (v, v, v)
Vec3::Vec3(float v){
    this -> x = v;
    this -> y = v;
    this -> z = v;
}
// operator overloading (sum, diff, scalar)
Vec3 Vec3::operator+(const Vec3& other) const {
    return Vec3(this->x + other.x, this->y + other.y, this->z + other.z);
}
Vec3 Vec3::operator-(const Vec3& other) const {
    return Vec3(this->x - other.x, this->y - other.y, this->z - other.z);
}
Vec3 Vec3::operator*(float scalar) const {
    return Vec3(this->x * scalar, this->y * scalar, this->z * scalar);
}

// vector length and normalize
float Vec3::length() const {
    return sqrt(x*x + y*y + z*z);
}
Vec3 Vec3::normalize() const {
    if(length() == 0) return Vec3(0, 0, 0);
    else return Vec3(x/length(), y/length(), z/length());
}

// dot and cross product
float Vec3::dot(const Vec3& other) const {
    return x * other.x + y * other.y + z * other.z;
}
// (x1, y1, z1) cross (x2, y2, z2)
// (y1*x2 - z1 * y2, x2 * z1 - x1 * z2, x1 * y2 - y1 * x2)
Vec3 Vec3::cross(const Vec3& other) const {
    return Vec3(y*other.x - z*other.y, z*other.x - x*other.z, x*other.y - y*other.x);
}