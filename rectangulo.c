#include <GL/glut.h>
#include <stdlib.h>

void display(void) {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-4.0, 4.0, -3.0, 3.0, -1.0, 1.0); // Cambio de rango de coordenadas
    
    glMatrixMode(GL_MODELVIEW);
    
    // Dibujo del rectángulo
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(-3.0, 2.0);
    glVertex2f(3.0, 2.0);
    glVertex2f(3.0, -2.0);
    glVertex2f(-3.0, -2.0);
    glEnd();
    
    // Dibujo de GL_LINES
    glBegin(GL_LINES);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(-2.0, -1.5);
    glVertex2f(-1.0, 0.5);
    glEnd();
    
    // Dibujo de GL_QUADS
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(1.0, 1.0);
    glVertex2f(2.5, 1.0);
    glVertex2f(2.5, -1.0);
    glVertex2f(1.0, -1.0);
    glEnd();
    
    // Dibujo de GL_QUAD_STRIP
    glBegin(GL_QUAD_STRIP);
    glColor3f(1.0, 1.0, 0.0);
    glVertex2f(-1.5, -2.5);
    glVertex2f(-0.5, -2.5);
    glVertex2f(-1.5, -3.5);
    glVertex2f(-0.5, -3.5);
    glEnd();
    
    glFlush();
}

int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutCreateWindow("OpenGL Primitives");
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(50, 50);

    glutDisplayFunc(display);
    glutMainLoop();
    
    return 0;
}

