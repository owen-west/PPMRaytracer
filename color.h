#ifndef COLOR_H
#define COLOR_H

#include "vec3.h"
#include <fstream>

using color = vec3;

void write_color(std::ofstream& outfile, color pixel_color) {
	outfile << static_cast<int>(255.999 * pixel_color.x()) << ' '
			<< static_cast<int>(255.999 * pixel_color.y()) << ' '
			<< static_cast<int>(255.999 * pixel_color.z()) << '\n';
}

#endif