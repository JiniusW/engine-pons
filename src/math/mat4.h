#pragma once

class Mat4 {
    public:
        float m[4][4];

        // initialization
        Mat4();
        Mat4(float values[4][4]);

        // matrix product, transpose, inverse
        Mat4 operator*(const Mat4& other) const;
        Mat4 transpose() const;
        Mat4 inverse() const;

};