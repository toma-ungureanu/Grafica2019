#pragma once
#include "MyListPairs.h"
#include <GL/glut.h>
#include <complex>
#include <string>
#include <iostream>
#include <fstream>
#include <map>
using namespace std; 

#define DIM 400
#define def 10
#define DIST 0.5
#define PI 3.14159
#define DEG2RAD PI/180.0

class GrilaCarteziana
{
	private:
	    int number_peaks_;
		float number_;
		float number_cells_;
		float size_row_;
		float dist_margin_;
		MyListPairs poligon_coord_;
		static int inside_the_polygon(const int nvert, vector<float>& vertx, vector<float>& verty, float testx, float testy);
	public:
		GrilaCarteziana();
		~GrilaCarteziana();
		void draw_grid(const float numar);
		auto draw_round_point(int point_x, int point_y, const string& color) const -> void;
		auto draw_square_point(int point_x, int point_y, int point_size, const string& color) const -> void;
		void draw_poligon();
	    auto draw_ellipse(int origin_x, int origin_y, int radius_x, int radius_y) const -> void;
	    auto draw_ellipse_origin(int radius) const -> void;
		void draw_pixels();
};

