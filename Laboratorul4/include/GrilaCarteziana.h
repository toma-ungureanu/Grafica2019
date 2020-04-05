#pragma once
#include <GL/glut.h>
#include <complex>

#define DIM 400
#define def 10
#define DIST 0.5

class GrilaCarteziana
{
	private:
		int m_number;
		float m_cellsNumber;
		float m_marginDistance;
	public:
		GrilaCarteziana();
		explicit GrilaCarteziana(int numar);
		void drawGrid();
		void drawLine();
		void pixels(int x, int y, int length);
		void writePixel(int x, int y);
		void SegmentDreapta3(int from_x, int from_y, int to_x, int to_y, unsigned int bold);
        ~GrilaCarteziana() = default;
};

