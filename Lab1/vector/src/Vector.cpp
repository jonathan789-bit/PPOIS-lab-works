#include "Vector3D.h"
#include <cmath>
#include <stdexcept>

Vector3D::Vector3D(double x, double y, double z) noexcept : x_(x), y_(y), z_(z) {}

double Vector3D::x() const noexcept { return x_; }
double Vector3D::y() const noexcept { return y_; }
double Vector3D::z() const noexcept { return z_; }

double Vector3D::length() const noexcept {
    return std::sqrt(x_ * x_ + y_ * y_ + z_ * z_);
}

Vector3D Vector3D::operator+(const Vector3D& v) const noexcept {
    return Vector3D(x_ + v.x_, y_ + v.y_, z_ + v.z_);
}

std::ostream& operator<<(std::ostream& out, const Vector3D& v) {
    return out << v.x() << ' ' << v.y() << ' ' << v.z();
}

// ... (Make sure the rest of your functions from the header are also here)