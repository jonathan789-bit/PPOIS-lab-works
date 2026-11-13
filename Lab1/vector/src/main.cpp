#include "Vector3D.h"
#include <iostream>

int main() {
    Vector3D v1(1.0, 2.0, 3.0);
    Vector3D v2(4.0, 5.0, 6.0);
    Vector3D v3 = v1 + v2;

    std::cout << "Vector 1: " << v1 << "\n";
    std::cout << "Vector 2: " << v2 << "\n";
    std::cout << "Sum (v1 + v2): " << v3 << "\n";
    std::cout << "Length of v1: " << v1.length() << "\n";

    return 0;
}