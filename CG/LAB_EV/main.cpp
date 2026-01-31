#include <GL/glut.h>
void draw() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(5);

    glColor3f(0.6,1,1);
    glBegin(GL_TRIANGLES);
    glVertex2i(100,10);
    glVertex2i(120,80);
    glVertex2i(100,130);
    glEnd();

    glColor3f(0.9,0.6,1);
    glBegin(GL_TRIANGLES);
    glVertex2i(120,80);
    glVertex2i(60,225);
    glVertex2i(140,240);
    glEnd();

    glColor3f(0.6,0.2,0.69);
    glBegin(GL_TRIANGLES);
    glVertex2i(120,80);
    glVertex2i(140,240);
    glVertex2i(160,150);
    glEnd();

    glColor3f(0.69,0,0.5);
    glBegin(GL_TRIANGLES);
    glVertex2i(60,225);
    glVertex2i(140,240);
    glVertex2i(80,270);
    glEnd();

    glColor3f(0.6,0,0.9);
    glBegin(GL_TRIANGLES);
     glVertex2i(140,240);
    glVertex2i(80,270);
    glVertex2i(160,350);
    glEnd();
    

    glColor3f(0.9,0.4,0);
    glBegin(GL_TRIANGLES);
    glVertex2i(80,270);
    glVertex2i(160,350);
    glVertex2i(60,500);
    glEnd();

    glColor3f(0.9,0.6,0);
    glBegin(GL_TRIANGLES);
    glVertex2i(80,270);
    glVertex2i(60,500);
    glVertex2i(60,270);
    glEnd();

    glColor3f(0.6,1,1);
    glBegin(GL_TRIANGLES);
    glVertex2i(10,10);
    glVertex2i(30,80);
    glVertex2i(20,130);
    glEnd();

    glColor3f(0.6,1,1);
    glBegin(GL_TRIANGLES);
    glVertex2i(10,10);
    glVertex2i(30,80);
    glVertex2i(20,130);
    glEnd();

    glColor3f(0.6,1,1);
    glBegin(GL_TRIANGLES);
    glVertex2i(10,10);
    glVertex2i(30,80);
    glVertex2i(20,130);
    glEnd();

    glColor3f(0.6,1,1);
    glBegin(GL_TRIANGLES);
    glVertex2i(10,10);
    glVertex2i(30,80);
    glVertex2i(20,130);
    glEnd();



glFlush();

}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("LAB_EV");
    glClearColor(1, 1, 1, 1);
    gluOrtho2D(-100, 600, -100, 600);
    glutDisplayFunc(draw);
    glutMainLoop();
    return 0;
}
