//
// Created by denix on 6/16/17.
//

#ifndef INC_01_PATHTRACER1W_RAY_H
#define INC_01_PATHTRACER1W_RAY_H

#include "vec3.h"

// A ray can be expressed as p(t)=A +Bx
//      where:  A = origin
//              B = direction
//              t = position on ray

class ray {
public:
    ray() = default;
    ray(const vec3& origin, const vec3& direction);
    vec3 origin() const;
    vec3 direction() const;
    vec3 getPointAt(float position) const;

private:
    vec3 A;
    vec3 B;

};


#endif //INC_01_PATHTRACER1W_RAY_H
