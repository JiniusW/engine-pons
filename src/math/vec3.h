#pragma once

class Vec3{
    public:
        float x, y, z;
        
        Vec3();                             // default
        Vec3(float x, float y, float z);    // (x,y,z)
        Vec3(float v);                       // (float v)

        // vector operator overloading
        // vector sum
        Vec3 operator+(const Vec3& other) const;
        // vector diff
        Vec3 operator-(const Vec3& other) const;
        // vector scalar product
        Vec3 operator*(float scalar) const;

        // vector size
        float length() const;
        // vector normalize
        Vec3 normalize() const;

        // dot(inner) product
        float dot(const Vec3& other) const;
        // cross product
        Vec3 cross(const Vec3& other) const;
        
};

