#include "GrilaCarteziana.h"
#include <GL/glut.h>
#include <cstdlib>
#include <list>

using namespace std;
unsigned char prevKey;

auto grila = new GrilaCarteziana("../poligons/poligon1.txt");

void Init()
{
	glClearColor(1.0,1.0,1.0,1.0);
	glLineWidth(1);
	glPolygonMode(GL_FRONT, GL_LINE);
	glMatrixMode(GL_PROJECTION);
}

void Display()
{
	glClear(GL_COLOR_BUFFER_BIT);

	if(prevKey == '1')
	{
		grila->draw_grid(15, 0.5);
		grila->draw_ellipse_origin(13);
		grila->afisareCerc4(13);
	}
	if(prevKey == '2')
	{
		grila->draw_grid(26, 1);
		grila->draw_ellipse(13, 7, 13, 7);
		grila->umplereElipsa(13, 7, 13, 7);
	}
	if(prevKey == '3')
	{
		grila->draw_grid(14, 0.5);
		grila->draw_poligon();
		grila->draw_pixels();
	}
	if(prevKey == '4')
	{
		auto temp = new GrilaCarteziana("../poligons/poligon2.txt");
		temp->draw_grid(14, 0.5);
		temp->draw_poligon();
		temp->draw_pixels();
	}
	glFlush();
}

void Reshape(const int width, const int height) 
{
	glViewport(0, 0, static_cast<GLsizei>(width), static_cast<GLsizei>(height));
}

void KeyboardFunc(unsigned char key, int x, int y)
{
	prevKey = key;
	if (key == 27)
		exit(0);
	glutPostRedisplay();
}

int main(int argc, char** argv) 
{
	glutInit(&argc, argv);
	glutInitWindowSize(DIM, DIM);
	glutInitWindowPosition(100, 100);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutCreateWindow (argv[0]);
	Init();
	glutReshapeFunc(Reshape);
	glutKeyboardFunc(KeyboardFunc);
	glutDisplayFunc(Display);
	glutMainLoop();
	return 0;
}