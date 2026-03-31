#include "mat4.h"
#include "cmath"

// initialization (unit matrix)
Mat4::Mat4() {
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if (i == j){
                m[i][j] = 1.0f;
            }
            else{
                m[i][j] = 0.0f;
            }
        }
    }
}
Mat4::Mat4(float values[4][4]) {
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            m[i][j] = values[i][j];
        }
    }
}
// matrix product, transpose, inverse
Mat4 Mat4::operator*(const Mat4& other) const {
    Mat4 result;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            result.m[i][j] = 0.0f;

    // m1[i][0]*m2[0][j] + m1[i][1]*m2[1][j] + m1[i][2]*m2[2][j] + m1[i][3]*m2[3][j]
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            for (int k = 0; k < 4; k++)
                result.m[i][j] += this->m[i][k]*other.m[k][j];
    return result;
}
Mat4 Mat4::transpose() const{
    Mat4 result;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            result.m[i][j] = m[j][i];
        }
    }
    return result;
}
Mat4 Mat4::inverse() const{
    // Gause-Jordan Method
    // [A|I] -> [I|A-]
    float aug[4][8] = {};
    
    // aug initialization
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            aug[i][j] = m[i][j];
            aug[i][j+4] = (i == j) ? 1.0f : 0.0f;
        }
    }

    // Gauss-Jordan Elimination
    // when pivot is 1 and others in same column is 0
    // pivot is the first number of each low
    for (int i = 0; i < 4; i++){
        float pivot = aug[i][i];
        for (int j = 0; j < 8; j++){
            aug[i][j] /= pivot;
        }
        for (int k = 0; k < 4; k++){
            if(k == i) continue;
            float factor = aug[k][i];
            for (int j = 0; j < 8; j++){
                // pivot이 있는 행(i)에서 factor를 가진 행(k)을 빼준다.
                aug[k][j] -= factor * aug[i][j];
            }
        }
    }
    Mat4 result;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            result.m[i][j] = aug[i][j+4];
        }
    }
    return result;
}