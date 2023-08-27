//gcc triangle_s.c -o trians -Lglut LGL -LGLU
#include <stdio.h>
 #include <GL/glut.h>
 #include <stdlib.h>
void display (void) //funcion de graficado
 {
glClearColor (0.0,0.0,0.0,0.0); // Color de fondo: negro
glclear (GL_COLOR_BUFFER BIT); // Boramos ta pontatta 9 glMatrixMode(GL_PROJECTION); // Modo proyección
 glLoadIdentity(); // Cargamos la matriz identidad
 glortho(-1.0,1.0, -1.0,1.0, 1.0,1.0); // Proyección ortográfica, dentro del cubo señalado
 glMatrixMode(GL_MODELVIEW); // Hodo de modelado
 glBegin(GL TRIANGLES); // Dibujamos un triángulo
glColor3f(1.0,0.0,0.0); // color del primer vertice: rojo glVertex3f(0.0,0.8,0.0); // Coordenadas del primer vértice
glColor3f(0.0,1.0,0.0); // Color del segundo vértice: verde glVertex3f(-0.6, 0.2,0.0); // Coordenados del segundo vértice
glColor3f(0.0,0.0,1.0); // Color del tercer vertice: azút 21 glVertex3f(0.6, -0.2,0.0); // Coordenadas del tercer vertice
glEnd(); // Terminamos de dibujar 
glFlush(); // Forzamos el dibujado
// Función principal: GLUT se inicio desde main (como una aplicación de consola
int main(int argc, char ** argv) { 
glutinit(&arge, argv);
glutCreateWindow("Triangle OpenGL"); // Utilizar un teula doda
glutInitwindowSize(320,320); //Crear una ventan Ser anchore inicial y la altora de la ventan
glutInitwindowPosition (50,50); En La esquina superior izquierdo superior de to ventana de posicionamiento

glutDisplayFunc(display).
glutainLoop();
}
