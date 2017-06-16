//
// Created by denix on 6/16/17.
//

#include "ray.h"


ray::ray(const vec3 &origin, const vec3 &direction) {

}

vec3 ray::origin() const{
    return A;
}

vec3 ray::direction() const{
    return B;
}

vec3 ray::getPointAt(float position) const{
    return A + B*position;
}
