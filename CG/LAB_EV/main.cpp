#include <GL/glut.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glLineWidth(3);

    glColor3f(0.6, 0.2, 0.2); 
    glBegin(GL_TRIANGLES);
    glVertex2i(100, 0);
    glVertex2i(140, 50);
    glVertex2i(120, 80);
    glEnd();

    glColor3f(0.6, 0.2, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2i(300, 0);
    glVertex2i(260, 50);
    glVertex2i(280, 80);
    glEnd();

    glColor3f(0.9, 0.2, 0.2); 
    glBegin(GL_TRIANGLES);
    glVertex2i(140, 50);
    glVertex2i(170, 110);
    glVertex2i(155, 180);
    glEnd();

    glColor3f(0.9, 0.2, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2i(260, 50);
    glVertex2i(230, 120);
    glVertex2i(245, 180);
    glEnd();

    glColor3f(0.1, 0.3, 0.8); // Deeper blue
    glBegin(GL_TRIANGLES);
    glVertex2i(140, 50);
    glVertex2i(70, 160);
    glVertex2i(155, 180);
    glEnd();

    glColor3f(0.1, 0.3, 0.8);
    glBegin(GL_TRIANGLES);
    glVertex2i(260, 50);
    glVertex2i(245, 180);
    glVertex2i(330, 160);
    glEnd();

    glColor3f(0.6, 0.3, 0.7); // Richer purple
    glBegin(GL_TRIANGLES);
    glVertex2i(155, 180);
    glVertex2i(70, 160);
    glVertex2i(80, 200);
    glEnd();

    glColor3f(0.6, 0.3, 0.7);
    glBegin(GL_TRIANGLES);
    glVertex2i(245, 180);
    glVertex2i(330, 160);
    glVertex2i(320, 200);
    glEnd();

    glColor3f(0.1, 0.8, 0.2); // Vibrant green
    glBegin(GL_TRIANGLES);
    glVertex2i(155, 180);
    glVertex2i(80, 200);
    glVertex2i(180, 250);
    glEnd();

    glColor3f(0.1, 0.8, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2i(245, 180);
    glVertex2i(320, 200);
    glVertex2i(220, 250);
    glEnd();

    glColor3f(0.15, 0.5, 0.15); // Forest green
    glBegin(GL_TRIANGLES);
    glVertex2i(190, 220);
    glVertex2i(155, 180);
    glVertex2i(180, 250);
    glEnd();

    glColor3f(0.15, 0.5, 0.15);
    glBegin(GL_TRIANGLES);
    glVertex2i(210, 220);
    glVertex2i(245, 180);
    glVertex2i(220, 250);
    glEnd();

    glColor3f(0.95, 0.3, 0.3); // Bright red
    glBegin(GL_TRIANGLES);
    glVertex2i(200, 280);
    glVertex2i(180, 250);
    glVertex2i(200, 100);
    glEnd();

    glColor3f(0.1, 0.3, 0.8); // Deep blue
    glBegin(GL_TRIANGLES);
    glVertex2i(200, 280);
    glVertex2i(220, 250);
    glVertex2i(200, 100);
    glEnd();

    glColor3f(0.9, 0.4, 0.2);  
    glBegin(GL_TRIANGLES);
    glVertex2i(180, 250);
    glVertex2i(70, 300);
    glVertex2i(80, 200);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2i(220, 250);
    glVertex2i(330, 300);
    glVertex2i(320, 200);
    glEnd();

    glColor3f(1.0, 0.7, 0.2); // Golden yellow
    glBegin(GL_TRIANGLES);
    glVertex2i(80, 200);
    glVertex2i(70, 300);
    glVertex2i(50, 200);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2i(320, 200);
    glVertex2i(330, 300);
    glVertex2i(350, 200);
    glEnd();

    glColor3f(1.0, 0.5, 0.1);
    glBegin(GL_TRIANGLES);
    glVertex2i(80, 200);
    glVertex2i(70, 300);
    glVertex2i(50, 200);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2i(320, 200);
    glVertex2i(330, 300);
    glVertex2i(350, 200);
    glEnd();

    glColor3f(0.9, 0.25, 0.15);
    glBegin(GL_TRIANGLES);
    glVertex2i(70, 300);
    glVertex2i(50, 200);
    glVertex2i(10, 240);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2i(330, 300);
    glVertex2i(350, 200);
    glVertex2i(390, 240);
    glEnd();

    glColor3f(0.1, 0.6, 0.9); 
    glBegin(GL_TRIANGLES);
    glVertex2i(70, 300);
    glVertex2i(10, 240);
    glVertex2i(0, 300);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2i(330, 300);
    glVertex2i(390, 240);
    glVertex2i(400, 300);
    glEnd();

    glColor3f(0.3, 0.8, 0.7);
    glBegin(GL_TRIANGLES);
    glVertex2i(0, 300);
    glVertex2i(-30, 270);
    glVertex2i(10, 240);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2i(400, 300);
    glVertex2i(390, 240);
    glVertex2i(430, 270);
    glEnd();

    // Antenna - Left (Teal)
    glColor3f(0.15, 0.55, 0.5);  
    glBegin(GL_TRIANGLES);
    glVertex2i(197, 290);
    glVertex2i(170, 330);
    glVertex2i(185, 330);
    glEnd();

    // Antenna - Right (Deep Red)
    glColor3f(0.75, 0.15, 0.15); 
    glBegin(GL_TRIANGLES);
    glVertex2i(203, 290);  
    glVertex2i(230, 330);
    glVertex2i(215, 330);
    glEnd();

    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("LAB_EV");
    glClearColor(1, 1, 1, 1);
    gluOrtho2D(-50, 450, -50, 450);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}