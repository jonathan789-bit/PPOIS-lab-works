#ifndef VECTOR3D_H
#define VECTOR3D_H

#include <iostream>
#include <string>

class Vector3D {
private:
    double x_, y_, z_;

public:
    // Constructor
    Vector3D(double x = 0.0, double y = 0.0, double z = 0.0) noexcept;

    // Getters
    double x() const noexcept;
    double y() const noexcept;
    double z() const noexcept;

    // Math functions
    double length() const noexcept;
    double cosine(const Vector3D& other) const;

    // Arithmetic operators
    Vector3D operator+(const Vector3D& v) const noexcept;
    Vector3D& operator+=(const Vector3D& v) noexcept;
    Vector3D operator-(const Vector3D& v) const noexcept;
    Vector3D& operator-=(const Vector3D& v) noexcept;
    
    // Cross product (Vector * Vector)
    Vector3D operator*(const Vector3D& v) const noexcept;
    Vector3D& operator*=(const Vector3D& v) noexcept;
    
    // Scalar multiplication (Vector * double)
    Vector3D operator*(double scalar) const noexcept;
    Vector3D& operator*=(double scalar) noexcept;
    
    // Division
    Vector3D operator/(double scalar) const;
    Vector3D& operator/=(double scalar);

    // Comparison operators
    bool operator==(const Vector3D& v) const noexcept;
    bool operator!=(const Vector3D& v) const noexcept;
    bool operator<(const Vector3D& v) const noexcept;
    bool operator<=(const Vector3D& v) const noexcept;
    bool operator>(const Vector3D& v) const noexcept;
    bool operator>=(const Vector3D& v) const noexcept;

    // Static parser
    static Vector3D parse(const std::string& text);

    // Friend declarations for stream operators
    friend std::ostream& operator<<(std::ostream& out, const Vector3D& v);
    friend std::istream& operator>>(std::istream& in, Vector3D& v);
};

// Non-member declarations (outside the class)
std::ostream& operator<<(std::ostream& out, const Vector3D& v);
std::istream& operator>>(std::istream& in, Vector3D& v);

// Scalar * Vector (e.g., 2.0 * myVector)
Vector3D operator*(double scalar, const Vector3D& v) noexcept;

#endif // VECTOR3D_H