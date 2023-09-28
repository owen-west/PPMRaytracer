#include "PPMRaytracer.h"
#include "color.h"
#include "vec3.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	// Image Dimensions
	int image_width = 256;
	int image_height = 256;

	// Create PPM image file
	ofstream outfile("render.ppm", ios_base::out);

	// Output to file
	outfile << "P3\n" << image_width << ' ' << image_height << "\n255\n";

	for (int j = 0; j < image_height; ++j) {
		std::clog << "\rScanlines remaining: " << (image_height - j - 1) << ' ' << std::flush;
		for (int i = 0; i < image_width; ++i) {
			auto pixel_color = color(double(i) / (image_width - 1), double(j) / (image_height - 1), 0);
			write_color(outfile, pixel_color);
		}
	}
	std::clog << "\n\rDone.					\n";
}
