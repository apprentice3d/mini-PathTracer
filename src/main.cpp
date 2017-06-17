#include <iostream>
#include <fstream>
#include "ray.h"

using namespace std;

vec3 getColor(const ray &r) {
    vec3 unit_direction = normalizeVector(r.direction());

    // make t between 0 and 1 based on y which is between -1.0 and 1.0
    float t = 0.5 * (unit_direction.y() + 1.0);
    return vec3(1.0, 1.0, 1.0) * (1.0 - t) + vec3(0.5, 0.7, 1.0) * t;
}


int main() {
    int nx = 400;
    int ny = 200;

    vec3 lower_left_corner(-2.0, -1.0, -1.0);
    vec3 horizontal(4.0, 0.0, 0.0);
    vec3 vertical(0.0, 2.0, 0.0);
    vec3 origin(0.0, 0.0, 0.0);


    ofstream image;
    image.open("rendered.ppm");

    image << "P3\n" << nx << " " << ny << "\n255\n";
    for (int j = ny - 1; j >= 0; j--) {
        for (int i = 0; i < nx; i++) {
            float u = float(i) / float(nx);
            float v = float(j) / float(ny);

            ray r(origin, lower_left_corner + horizontal * u + vertical * v);
            vec3 color = getColor(r);

            int ir = int(255.99 * color.r());
            int ig = int(255.99 * color.g());
            int ib = int(255.99 * color.b());
            image << ir << " " << ig << " " << ib << "\n";
        }
    }
    image.close();
    cout << "Done!" << endl;
    return 0;
}