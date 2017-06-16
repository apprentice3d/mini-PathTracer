//
// Created by denix on 6/15/17.
//

#include "vec3.h"

vec3::vec3(float x, float y, float z) {
    e[0] = x;
    e[1] = y;
    e[2] = z;
}

float vec3::x() const {
    return e[0];
}

float vec3::y() const {
    return e[1];
}

float vec3::z() const {
    return e[2];
}

float vec3::r() const {
    return e[0];
}

float vec3::g() const {
    return e[1];
}

float vec3::b() const {
    return e[2];
}

const vec3 &vec3::operator+() const {
    return *this;
}

const vec3 vec3::operator-() const {
    return vec3(-e[0], -e[1], -e[2]);
}

float vec3::operator[](int i) const {
    return e[i];
}

float &vec3::operator[](int i) {
    return e[i];
}

vec3 &vec3::operator+=(const vec3 &v2) {
    e[0] += v2[0];
    e[1] += v2[1];
    e[2] += v2[2];
    return *this;
}

vec3 &vec3::operator-=(const vec3 &v2) {
    e[0] -= v2[0];
    e[1] -= v2[1];
    e[2] -= v2[2];
    return *this;
}

vec3 &vec3::operator*=(const vec3 &v2) {
    e[0] *= v2[0];
    e[1] *= v2[1];
    e[2] *= v2[2];
    return *this;
}

vec3 &vec3::operator/=(const vec3 &v2) {
    e[0] /= v2[0];
    e[1] /= v2[1];
    e[2] /= v2[2];
    return *this;
}

vec3 &vec3::operator*=(const float t) {
    e[0] *= t;
    e[1] *= t;
    e[2] *= t;
    return *this;
}

vec3 &vec3::operator/=(const float t) {
    e[0] *= t;
    e[1] *= t;
    e[2] *= t;
    return *this;
}

float vec3::length() const {
    return sqrt(squared_length());
}

float vec3::squared_length() const {
    return pow(e[0], 2)
           + pow(e[1], 2)
           + pow(e[2], 2);
}

vec3 vec3::normalizeVector(vec3 vector) {
    return vector / vector.length();
}


// Vector operations



vec3 operator+(const vec3 &v1, const vec3 &v2) {
    return vec3(v1[0] + v2[0], v1[1] + v2[1], v1[2] + v2[2]);
}

vec3 operator-(const vec3 &v1, const vec3 &v2) {
    return vec3(v1[0] - v2[0], v1[1] - v2[1], v1[2] - v2[2]);
}

vec3 operator*(const vec3 &v1, const vec3 &v2) {
    return vec3(v1[0] * v2[0], v1[1] * v2[1], v1[2] * v2[2]);
}

vec3 operator/(const vec3 &v1, const vec3 &v2) {
    return vec3(v1[0] / v2[0], v1[1] / v2[1], v1[2] / v2[2]);
}

vec3 operator+(const vec3 &v1, float value) {
    return vec3(v1[0]+value, v1[1]+value, v1[2]+value);
}

vec3 operator-(const vec3 &v1, float value) {
    return vec3(v1[0]-value, v1[1]-value, v1[2]-value);
}

vec3 operator*(const vec3 &v1, float value) {
    return vec3(v1[0]*value, v1[1]*value, v1[2]*value);
}

vec3 operator/(const vec3 &v1, float value) {
    return vec3(v1[0]/value, v1[1]/value, v1[2]/value);
}

float dot(const vec3 &v1, const vec3 &v2) {
    return v1.x()*v2.x() + v1.y()*v2.y() + v1.z()*v2.z();
}

vec3 cross(const vec3 &v1, const vec3 &v2) {
    return vec3(v1.y()*v2.z() - v1.z()*v2.y(),
    -(v1.x()*v2.z() - v1.z()*v2.x()),
    v1.x()*v2.y() - v1.y()*v2.x());
}
