// Name: Blake Culbert
// Date: 1/26/2020
// Class: Computer Graphics
/* This program will allow the user to display various geometric and
   3D graphics using keyboard actions */

#include <GL/glut.h>

// Global used for keystrokes, start with 113 for GL_POINTS
int globalkey = 113;

/* glut.h usually has includes for gl.h and glu.h */

void myinit()
{

  // Enable Various Components
  glEnable(GL_DEPTH_TEST);
  glShadeModel(GL_SMOOTH);

  // Attributes
  glClearColor(1.0,1.0,1.0,1.0);
  glColor3f(1.0, 0.0, 0.0); /* draw in red */

  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();

  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  glDepthFunc(GL_LEQUAL);

}

void vertices()
  /* set our vertices for our geometric objects */
{
  glVertex3f(0,0,0);
  glVertex3f(0.1,.75,0);
  glVertex3f(-0.3,-.85,0);
  glVertex3f(-0.4,.80,0);
  glVertex3f(-0.2,0.27,0);
  glVertex3f(-0.47,0.27,0);
}

void display()
{

  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); /* clear the window */
  glLoadIdentity();
  glMatrixMode(GL_MODELVIEW);
  glColor3f(1.0,0.0,0.0);

  switch(globalkey) {

    /* Geometric Primitives: */
    /* translated keys to ASCII code, starting with 113: q */
    case 113:

      glBegin(GL_POINTS); /* draw points */
      vertices();
      glEnd();
      break;

    // w
    case 119:

      glBegin(GL_LINES); /* draw lines */
      vertices();
      glEnd();
      break;

    // e
    case 101:

      glBegin(GL_LINE_STRIP); /* draw line strips */
      vertices();
      glEnd();
      break;

    // r
    case 114:

      glBegin(GL_LINE_LOOP); /* draw line loops */
      vertices();
      glEnd();
      break;

    // t
    case 116:

      glBegin(GL_TRIANGLES); /* draw traingles */
      vertices();
      glEnd();
      break;

    // y
    case 121:

      glBegin(GL_TRIANGLE_STRIP); /* draw triangle strips */
      vertices();
      glEnd();
      break;

    // u
    case 117:

      glBegin(GL_TRIANGLE_FAN); /* draw triangle fans */
      vertices();
      glEnd();
      break;

    // i
    case 105:

      glBegin(GL_QUADS); /* draw quads */
      vertices();
      glEnd();
      break;

    // o
    case 111:

      glBegin(GL_QUAD_STRIP); /* draw strip of quads */
      vertices();
      glEnd();
      break;

    // p
    case 112:

      glBegin(GL_POLYGON); /* draw polygons */
      vertices();
      glEnd();
      break;

    /* GLUT 3D Primitives: */
    /* Start with 97 : a */
    /* Capatalize letters = Wired drawing instead of solid */
    case 97:

      glPushMatrix();
       glRotatef(-75.0,1.0,1.0,0.0);
       glutSolidCube(1.0);
      glPopMatrix();
      break;

    // A
    case 65:

      glPushMatrix();
       glRotatef(-75.0,1.0,1.0,0.0);
       glutWireCube(1.0);
      glPopMatrix();
      break;

    // s
    case 115:

      glPushMatrix();
       glRotatef(-75.0,1.0,0.0,0.0);
       glutSolidSphere(0.8,10,10);
      glPopMatrix();
      break;

    // S
    case 83:

      glPushMatrix();
       glRotatef(-75.0,1.0,0.0,0.0);
       glutWireSphere(0.8,10.0,10.0);
      glPopMatrix();
      break;

    // d
    case 100:

      glPushMatrix();
       glRotatef(-75.0,1.0,0.0,0.0);
       glutSolidCone(1,1,10,10);
      glPopMatrix();
      break;

    // D
    case 68:

      glPushMatrix();
       glRotatef(-75.0,1.0,0.0,0.0);
       glutWireCone(1,1,10,10);
      glPopMatrix();
      break;

    // f
    case 102:

      glPushMatrix();
       glRotatef(-75.0,1.0,0.0,0.0);
       glutSolidTorus(0.4,0.8,35,35);
      glPopMatrix();
      break;

    // F
    case 70:

      glPushMatrix();
       glRotatef(-75.0,1.0,0.0,0.0);
       glutWireTorus(0.4,0.8,35,35);
      glPopMatrix();
      break;

    // g
    case 103:

      glPushMatrix();
       glRotatef(-75.0,1.0,0.0,0.0);
       glScalef(0.5,0.5,0.5);
       glutSolidTetrahedron();
      glPopMatrix();
      break;

    // G
    case 71:

      glPushMatrix();
       glRotatef(-75.0,1.0,0.0,0.0);
       glScalef(0.5,0.5,0.5);
       glutWireTetrahedron();
      glPopMatrix();
      break;

    // h
    case 104:

      glPushMatrix();
       glRotatef(-75.0,1.0,0.0,0.0);
       glScalef(0.5,0.5,0.5);
       glutSolidDodecahedron();
      glPopMatrix();
      break;

    // H
    case 72:

      glPushMatrix();
       glRotatef(-75.0,1.0,0.0,0.0);
       glScalef(0.5,0.5,0.5);
       glutWireDodecahedron();
      glPopMatrix();
      break;

    // j
    case 106:

      glPushMatrix();
       glRotatef(-75.0,1.0,0.0,0.0);
       glScalef(0.5,0.5,0.5);
       glutSolidOctahedron();
      glPopMatrix();
      break;

    // J
    case 74:

      glPushMatrix();
       glRotatef(-75.0,1.0,0.0,0.0);
       glScalef(0.5,0.5,0.5);
       glutWireOctahedron();
      glPopMatrix();
      break;

    // k
    case 107:

      glPushMatrix();
       glRotatef(-75.0,1.0,0.0,0.0);
       glScalef(0.5,0.5,0.5);
       glutSolidIcosahedron();
      glPopMatrix();
      break;

    // K
    case 75:

      glPushMatrix();
       glRotatef(-75.0,1.0,0.0,0.0);
       glScalef(0.5,0.5,0.5);
       glutWireIcosahedron();
      glPopMatrix();
      break;

    // l
    case 108:

      glPushMatrix();
       glutSolidTeapot(0.5);
      glPopMatrix();
      break;

    // L
    case 76:

      glPushMatrix();
       glutWireTeapot(0.5);
      glPopMatrix();
      break;


    default:
      break;
  }

  glFlush(); /* clears buffers */
  glutSwapBuffers();

}


void keyboard(unsigned char key, int x, int y) {
  /* We use another switch statement here to identify which key was pressed
   and then send that key to display to get what object you wanted on screen.*/

  switch(key) {

    /* for each case we will press a key, set the globalkey to that ACSII value,
       then call display to get object on screen. */
    // q
    case 113:
      globalkey = 113;
      display();
      break;

    // w
    case 119:
      globalkey = 119;
      display();
      break;

    // e
    case 101:
      globalkey = 101;
      display();
      break;

    // r
    case 114:
      globalkey = 114;
      display();
      break;

    // t
    case 116:
      globalkey = 116;
      display();
      break;

    // y
    case 121:
      globalkey = 121;
      display();
      break;

    // u
    case 117:
      globalkey = 117;
      display();
      break;

    // i
    case 105:
      globalkey = 105;
      display();
      break;

    // o
    case 111:
      globalkey = 111;
      display();
      break;

    // p
    case 112:
      globalkey = 112;
      display();
      break;

    // a
    case 97:
      globalkey = 97;
      display();
      break;

    // A
    case 65:
      globalkey = 65;
      display();
      break;

    // s
    case 115:
      globalkey = 115;
      display();
      break;

    // S
    case 83:
      globalkey = 83;
      display();
      break;

    // d
    case 100:
      globalkey = 100;
      display();
      break;

    // D
    case 68:
      globalkey = 68;
      display();
      break;

    // f
    case 102:
      globalkey = 102;
      display();
      break;

    // F
    case 70:
      globalkey = 70;
      display();
      break;

    // g
    case 103:
      globalkey = 103;
      display();
      break;

    // G
    case 71:
      globalkey = 71;
      display();
      break;

    // h
    case 104:
      globalkey = 104;
      display();
      break;

    // H
    case 72:
      globalkey = 72;
      display();
      break;

    // j
    case 106:
      globalkey = 106;
      display();
      break;

    // J
    case 74:
      globalkey = 74;
      display();
      break;

    // k
    case 107:
      globalkey = 107;
      display();
      break;

    // K
    case 75:
      globalkey = 75;
      display();
      break;

    // l
    case 108:
      globalkey = 108;
      display();
      break;

    // L
    case 76:
      globalkey = 76;
      display();
      break;
  }
  glutPostRedisplay(); /* redisplay after every imagine to remove last one on screen */
}

int main(int argc, char** argv)
{

  /* standard GLUT initializtion */

  glutInit(&argc, argv);
  glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
  glutInitWindowPosition(50,50);
  glutInitWindowSize(500,500);
  glutInitWindowPosition(0,0);
  glutCreateWindow("LAB 2: GEOMETRIC PRIMITIVES");
  myinit();
  glutKeyboardFunc(keyboard);
  glutDisplayFunc(display);
  glutMainLoop();

}
