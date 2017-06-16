#include <iostream>
#include <fstream>
#include "vec3.h"

using namespace std;

int main() {
    int nx = 400;
    int ny = 200;

    ofstream image;
    image.open("rendered.ppm");

    image << "P3\n" << nx << " " << ny << "\n255\n";
    for (int j = ny - 1; j >= 0; j--) {
        for (int i = 0; i < nx; i++) {
            vec3 color((float(i)/float(nx)), float(j) / float(ny), 0.2);
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