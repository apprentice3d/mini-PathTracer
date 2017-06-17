//
// Created by denix on 6/15/17.
//

#ifndef INC_01_PATHTRACER1W_VEC3_H
#define INC_01_PATHTRACER1W_VEC3_H

#include <math.h>

class vec3 {
public:
    vec3() = default;
    vec3(float x, float y, float z);
    ~vec3() = default;


    // Acccessors
    float x() const;
    float y() const;
    float z() const;
    float r() const;
    float g() const;
    float b() const;


    // Operators
    const vec3& operator+() const;
    const vec3 operator-() const;
    float operator[](int i) const;
    float& operator[](int i);

    vec3& operator+=(const vec3 &v2);
    vec3& operator-=(const vec3 &v2);
    vec3& operator*=(const vec3 &v2);
    vec3& operator/=(const vec3 &v2);
    vec3& operator*=(const float t);
    vec3& operator/=(const float t);


    // Methods
    float length() const;
    float squared_length() const;


private:
    float e[3];
};

// Vector operations
vec3 operator+(const vec3& v1, const vec3& v2);
vec3 operator-(const vec3& v1, const vec3& v2);
vec3 operator*(const vec3& v1, const vec3& v2);
vec3 operator/(const vec3& v1, const vec3& v2);

vec3 operator+(const vec3& v1, float value);
vec3 operator-(const vec3& v1, float value);
vec3 operator*(const vec3& v1, float value);
vec3 operator/(const vec3& v1, float value);




float dot(const vec3& v1, const vec3& v2);
vec3 cross(const vec3& v1, const vec3& v2);
vec3 normalizeVector(vec3 vector);





#endif //INC_01_PATHTRACER1W_VEC3_H
