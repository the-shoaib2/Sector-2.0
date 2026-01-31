#ifdef APPLE
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void resize(int w, int h)
{
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-6, 6, -4, 4, -10, 10);
    glMatrixMode(GL_MODELVIEW);
}


void tri(float x1,float y1,float x2,float y2,float x3,float y3)
{
    glBegin(GL_TRIANGLES);
        glVertex2f(x1,y1);
        glVertex2f(x2,y2);
        glVertex2f(x3,y3);
    glEnd();
}


void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glColor3f(0.1f,0.3f,0.8f);
    tri(-0.15,2.0, 0.15,2.0, 0.0,-2.2);

    glColor3f(0.0f,0.8f,1.0f);   
    tri(-0.15,1.6, -3.6,1.4, -2.5,2.6);

    glColor3f(1.0f,0.4f,0.0f);   
    tri(-0.15,1.6, -2.5,2.6, -1.6,1.0);

    glColor3f(0.0f,0.8f,0.2f);   
    tri(-0.15,0.6, -1.6,1.0, -2.1,-0.4);

    glColor3f(1.0f,0.0f,1.0f);   
    tri(-0.15,-0.4, -2.1,-0.4, -1.1,-2.0);

    glColor3f(1.0f,0.0f,0.0f);  
    tri(-0.15,-2.2, -1.1,-2.0, -0.4,-3.4);

    glColor3f(0.0f,0.8f,1.0f);
    tri(0.15,1.6, 3.6,1.4, 2.5,2.6);

    glColor3f(1.0f,0.4f,0.0f);
    tri(0.15,1.6, 2.5,2.6, 1.6,1.0);

    glColor3f(0.0f,0.8f,0.2f);
    tri(0.15,0.6, 1.6,1.0, 2.1,-0.4);

    glColor3f(1.0f,0.0f,1.0f);
    tri(0.15,-0.4, 2.1,-0.4, 1.1,-2.0);

    glColor3f(1.0f,0.0f,0.0f);
    tri(0.15,-2.2, 1.1,-2.0, 0.4,-3.4);

    //antina
    glColor3f(1,0,0);
    tri(-0.05,2.0, -0.35,2.9, 0.0,2.4);

    glColor3f(0,0,1);
    tri(0.05,2.0, 0.35,2.9, 0.0,2.4);

    glutSwapBuffers();
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(800,600);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutCreateWindow("Low Poly Butterfly");

    glClearColor(1,1,1,1);

    glutDisplayFunc(display);
    glutReshapeFunc(resize);

    glutMainLoop();
    return 0;
}
