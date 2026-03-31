#include <iostream>
#include "../src/math/mat4.h"

int main(){
    Mat4 m;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            std::cout << m.m[i][j] << " ";
        }
        std::cout << std::endl;
    }

    Mat4 a;
    Mat4 b;
    Mat4 c = a * b;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            std::cout << m.m[i][j] << " ";
        }
        std::cout << std::endl;
    }
    float values[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    Mat4 m1(values);
    Mat4 t = m1.transpose();
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            std::cout << t.m[i][j] << " ";
        }
        std::cout << std::endl;
    }

    float values_2[4][4] = {
        {2, 1, 0, 0},
        {1, 3, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1}
    };
    Mat4 m2(values_2);
    Mat4 inv = m2.inverse();
    Mat4 identity =  inv * m2;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            std::cout << m2.m[i][j] << " ";
        }
        std::cout << std::endl;
    }
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            std::cout << inv.m[i][j] << " ";
        }
        std::cout << std::endl;
    }
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            std::cout << identity.m[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
}
