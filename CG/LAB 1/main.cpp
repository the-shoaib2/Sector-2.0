#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <cmath>

/* ---------- Circle ---------- */
void drawCircle(float x, float y, float r)
{
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for (int a = 0; a <= 360; a += 5)
    {
        float rad = a * 3.14159f / 180.0f;
        glVertex2f(x + cos(rad) * r,
                   y + sin(rad) * r);
    }
    glEnd();
}

/* ---------- Trunk (tapered) ---------- */
void drawTrunk(float x, float y)
{
    glColor3f(0.45f, 0.25f, 0.10f);
    glBegin(GL_POLYGON);
        glVertex2f(x - 25, y);
        glVertex2f(x + 25, y);
        glVertex2f(x + 15, y + 140);
        glVertex2f(x - 15, y + 140);
    glEnd();
}

/* ---------- Leaves (layered canopy) ---------- */
void drawLeaves(float x, float y)
{
    glColor3f(0.0f, 0.55f, 0.0f);
    drawCircle(x, y + 210, 70);

    glColor3f(0.0f, 0.65f, 0.0f);
    drawCircle(x - 50, y + 180, 60);
    drawCircle(x + 50, y + 180, 60);

    glColor3f(0.0f, 0.75f, 0.0f);
    drawCircle(x, y + 160, 65);

    glColor3f(0.0f, 0.6f, 0.0f);
    drawCircle(x - 30, y + 150, 55);
    drawCircle(x + 30, y + 150, 55);
}

/* ---------- Tree ---------- */
void drawTree(float x, float y)
{
    drawTrunk(x, y);
    drawLeaves(x, y);
}

/* ---------- Display ---------- */
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    drawTree(400, 80);

    glFlush();
}

/* ---------- Resize ---------- */
void reshape(int w, int h)
{
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, w, 0, h);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

/* ---------- Main ---------- */
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowSize(800, 500);
    glutInitWindowPosition(200, 100);
    glutCreateWindow("Realistic Tree");

    glClearColor(0.85f, 0.95f, 1.0f, 1.0f); // sky-like background

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);

    glutMainLoop();
    return 0;
}
