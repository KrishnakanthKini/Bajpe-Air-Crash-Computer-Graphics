#include<stdlib.h>
#include<GL/glut.h>
#include<string.h>
#include<math.h>
GLfloat aa=0,bb=0,cc=0,dd=0,ee=0;
void display();
void move();
void key(unsigned char,int,int);
int des,des1,des2,des3,des4,des5,des6,des7,des8,s3=0,b3=0;
float a1=0,b1=0,a2=0,s2=0,g2=0,a8=0,s8=0,g8=0,a3=0;
float a4=0,b4=-5,a5=0,a6=0,s6=0,b6=0,co15,flag5,c1=0,sb1=0,bc1=0;
int main(int argc, char **argv){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_DEPTH);
	glutInitWindowSize(1370,690);
	des=glutCreateWindow("Introduction");
	glEnable(GL_DEPTH_TEST);
	glutDisplayFunc(display);
	glutKeyboardFunc(key);
	glutIdleFunc(move);
	glutMainLoop();
}
void display()
{
    glClearColor(0,0,0,0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0,50,0,50,-50,50);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
char s[200]={"SAHYADRI COLLEGE OF ENGINEERING AND MANAGEMENT"};
	char d[50]={"ADYAR"};
	char r[200]={"A MINI PROJECT ON"};
	char q[200]={"COMPUTER GRAPHICS AND VISUALISATION"};
	char p[200]={"BAJPE AIR CRASH"};
	char o[100]={"Designed by,"};
	char t[100]={"U KRISHNAKANTH KINI"};
	char l[100]={"U NILESH KINI"};
	char t1[50]={"4SF15CS161"};
	char l1[50]={"4SF15CS162"};
	glColor3f(0,0.512,0.768);
	glRasterPos3f(13,45,5);
	for(int i=0;i<strlen(s);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,s[i]);
	glRasterPos3f(24,43,5);
	for(int i=0;i<strlen(d);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,d[i]);
	glColor3f(0.512,0.512,1.02);
	glRasterPos3f(10,38,5);
	for(int i=0;i<strlen(r);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,r[i]);
	glRasterPos3f(10,36,5);
	for(int i=0;i<strlen(q);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,q[i]);
	glColor3f(1.02,0.512,0.256);
	glRasterPos3f(21,27,5);
	for(int i=0;i<strlen(p);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,p[i]);
glColor3f(1.02,0.512,0.768);
	glRasterPos3f(10,15,5);
	for(int i=0;i<strlen(o);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,o[i]);
	glRasterPos3f(10.5,12,5);
	for(int i=0;i<strlen(t);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,t[i]);
	glRasterPos3f(25,12,5);
	for(int i=0;i<strlen(t1);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,t1[i]);
	glRasterPos3f(10.5,10,5);
	for(int i=0;i<strlen(l);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,l[i]);
	glRasterPos3f(25,10,5);
	for(int i=0;i<strlen(l1);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,l1[i]);
	char z[100]={"Press S to continue..."};
	glRasterPos3f(30,5,5);
	for(int i=0;i<strlen(z);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,z[i]);
glFlush();
}
void draw_back1()
{
	glBegin(GL_POLYGON);//ground
	glColor3f(0.128,0,0);
	glVertex3f(0,0,0);
	glVertex3f(50,0,0);
	glVertex3f(50,5,0);
	glVertex3f(0,5,0);
	glEnd();
	glBegin(GL_POLYGON);//road
	glColor3f(0,0,0);
	glVertex3f(0,5,0);
	glVertex3f(50,5,0);
	glVertex3f(50,15,0);
	glVertex3f(0,15,0);
	glEnd();
	glBegin(GL_POLYGON);//roadline
	glColor3f(1,1,1);
	glVertex3f(5,10,5);
	glVertex3f(15,10,5);
	glVertex3f(15,11,5);
	glVertex3f(5,11,5);
	glEnd();
	glBegin(GL_POLYGON);//roadline
	glVertex3f(20,10,1);
	glVertex3f(30,10,1);
	glVertex3f(30,11,1);
	glVertex3f(20,11,1);
	glEnd();
	glBegin(GL_POLYGON);//roadline
	glVertex3f(35,10,1);
	glVertex3f(45,10,1);
	glVertex3f(45,11,1);
	glVertex3f(35,11,1);
	glEnd();
	glBegin(GL_POLYGON);//green
	glColor3f(0.512,0,0);
	glVertex3f(0,15,0);
	glColor3f(0.228,0.856,0.14);
	glVertex3f(50,15,0);
	glVertex3f(50,18,0);
	glVertex3f(0,18,0);
	glEnd();


    glColor3f(0.996,0.4705,0.031375);

    glBegin(GL_POLYGON);
    glVertex2f(0,18);
    glVertex2f(4,18);
    glVertex2f(4,30);
    glVertex2f(0,30);
    glEnd();
    glColor3f(0.63921,0.09019,0.1294);

    glBegin(GL_POLYGON);
    glVertex2f(4,18);
    glVertex2f(4,35);
    glVertex2f(10,35);
    glVertex2f(10,18);
    glEnd();
    glColor3f(0.7215,0.22745,0.03921);

    glBegin(GL_POLYGON);
    glVertex2f(10,32.5);
    glVertex2f(14,32.5);
    glVertex2f(14,18);
    glVertex2f(10,18);
    glEnd();
    glColor3f(0.63921,0.09019,0.1294);

    glBegin(GL_POLYGON);
    glVertex2f(14,18);
    glVertex2f(14,30);
    glVertex2f(18,30);
    glVertex2f(18,18);
    glEnd();
    glColor3f(0,0,0);//windows

    glBegin(GL_POLYGON);
    glVertex3f(1,18,1);
    glVertex3f(3,18,1);
    glVertex3f(3,20,1);
    glVertex3f(1,20,1);
    glEnd();
    glColor3f(0,0,0);//window
    glBegin(GL_POLYGON);
    glVertex3f(1,22.5,1);
    glVertex3f(1,25,1);
    glVertex3f(3,25,1);
    glVertex3f(3,22.5,1);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(1,26.25,1);
    glVertex3f(1,28.75,1);
    glVertex3f(3,28.75,1);
    glVertex3f(3,26.25,1);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(7,18,1);
    glVertex3f(7,21.25,1);
    glVertex3f(9,21.25,1);
    glVertex3f(9,18,1);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(5,22.5,1);
    glVertex3f(5,25,1);
    glVertex3f(7,25,1);
    glVertex3f(7,22.5,1);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(7,26.25,1);
    glVertex3f(7,28.75,1);
    glVertex3f(9,28.75,1);
    glVertex3f(9,26.25,1);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(5,30,1);
    glVertex3f(5,32.5,1);
    glVertex3f(7,32.5,1);
    glVertex3f(7,30,1);
    glEnd();
    //windows
    glBegin(GL_POLYGON);
    glVertex3f(11,18,1);
    glVertex3f(11,22.5,1);
    glVertex3f(13,22.5,1);
    glVertex3f(13,18,1);
    glEnd();
    glBegin(GL_POLYGON);//windows
    glVertex3f(11,23.75,1);
    glVertex3f(11,26.25,1);
    glVertex3f(13,26.25,1);
    glVertex3f(13,23.75,1);
    glEnd();
    glPushMatrix();
     glColor3f(0.96,.349,0.0823);  //.349
glTranslatef(16,27,0);
     glColor3f(0.96,.349,0.0823);
    glPopMatrix();
     glColor3f(1,1,1); //whitewindow
     glBegin(GL_POLYGON);
    glVertex3f(15,18,1);//
    glVertex3f(15,23.75,1);
    glVertex3f(17,23.75,1);
    glVertex3f(17,18,1);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(15,26.25,1);
    glVertex3f(15,28.75,1);
    glVertex3f(17,28.75,1);
    glVertex3f(17,26.25,1);//
    glEnd();
    glColor3f(0.5,0.5,0.5);
    //rightside diagram
    glBegin(GL_POLYGON);
    glVertex2f(32,18);
    glVertex2f(32,25);
    glVertex2f(36,25);
    glVertex2f(36,18);
    glEnd();
    glColor3f(0.7,0.7,0.7);

    glBegin(GL_POLYGON);
    glVertex2f(36,18);
    glVertex2f(36,30);
    glVertex2f(42,30);
    glVertex2f(42,18);
    glEnd();
    glColor3f(0.567,0.589,0.590);

    glBegin(GL_POLYGON);
    glVertex2f(42,18);
    glVertex2f(42,32.5);
    glVertex2f(48,32.5);
    glVertex2f(48,18);
    glEnd();
    glColor3f(0,0,0);

    glBegin(GL_POLYGON);//illi
    glVertex3f(33,18,1);
    glVertex3f(33,22.5,1);
    glVertex3f(35,22.5,1);
    glVertex3f(35,18,1);
    glEnd();
    glColor3f(0.5,0.5,0.5);

    glBegin(GL_POLYGON);
    glVertex3f(38,21.25,1);
    glVertex3f(38,23.75,1);
    glVertex3f(40,23.75,1);
    glVertex3f(40,21.25,1);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(37,25,1);
    glVertex3f(37,27.5,1);
    glVertex3f(39,27.5,1);
    glVertex3f(39,25,1);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(43,28.75,1);
    glVertex3f(43,31.25,1);
    glVertex3f(45,31.25,1);
    glVertex3f(45,28.75,1);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(46,18,1);
    glVertex3f(46,22.5,1);
    glVertex3f(48,22.5,1);
    glVertex3f(48,18,1);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(43,23.75,1);
    glVertex3f(43,27.5,1);
    glVertex3f(46,27.5,1);
    glVertex3f(46,23.75,1);//
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.4,0);//treeroot
    //glLineWidth(300);
    glVertex3f(22,18,1);
    glVertex3f(22,23.75,1);
    glVertex3f(23,23.75,1);
    glVertex3f(23,18,1);
    glEnd();
    glPushMatrix();//tree
    glColor3f(0,0.7,0);
    glTranslatef(23,25,0);
    glutSolidSphere(2,50,50);
    glPopMatrix();
    glPushMatrix();
    glColor3f(0,0.7,0);
    glTranslatef(20.5,26,0);
    glutSolidSphere(1.5,50,50);
    glPopMatrix();
    glPushMatrix();
    glColor3f(0,0.7,0);
    glTranslatef(23,28,0);
    glutSolidSphere(1.5,50,50);
    glPopMatrix();
    glPushMatrix();
    glColor3f(0,0.7,0);
    glTranslatef(25,27,0);
    glutSolidSphere(1.5,50,50);
    glPopMatrix();
    glPushMatrix();
    glColor3f(0,0.7,0);
    glTranslatef(24,24,0);
    glutSolidSphere(1.5,50,50);
    glPopMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1,0,0);
    glVertex3f(4,36.25,1);
    glVertex3f(4,38.75,1);
    glVertex3f(10,38.25,1);
    glVertex3f(10,36.25,1);
    glEnd();
glColor3f(1,1,1);//moon
	glTranslatef(34,44,0);
	glutSolidSphere(1.5,50,50);
	glTranslatef(-34,-44,0);
	glColor3f(0.12,0.12,0.12);//cover
	glTranslatef(34.9,44.8,1);
	glutSolidSphere(2,50,50);
	glTranslatef(-34.9,-44.8,1);
	glBegin(GL_LINES);
    glColor3f(1,1,1);
    glLineWidth(5);
    glVertex3f(7,35,1);
    glVertex3f(7,36.25,1);
    glEnd();
}

void write_char1()
{
    glColor3f(1,1,1);
	char s[50]="DUBAI AIRPORT";
	glRasterPos3f(4.7,37.0,10);
	for(int i=0;i<strlen(s);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,s[i]);
}

void draw_logo1()
{
	glColor3f(1,1,1);
	glTranslatef(43,43,1);
	glutSolidSphere(6,50,50);
	glTranslatef(-43,-43,1);
	glColor3f(0,0,0);
	char s[50]={"Are u thinking what really happened?"};
	char r[50]={"Press A...."};
	glRasterPos3f(37.5,43,5);
	for(int i=0;i<strlen(s);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,s[i]);
	glRasterPos3f(41,41,5);
	for(int i=0;i<strlen(r);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,r[i]);
}

void display1()
{
	glutInitDisplayMode(GLUT_RGB|GLUT_DEPTH);
	glEnable(GL_DEPTH_TEST);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0,50,5,50,-50,50);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	draw_back1();
	write_char1();
	a1=a1+0.02;
	if(a1>=17)
	{
		draw_logo1();
	}
	glFlush();
}

void draw_back2()
{
glColor3f(1,1,1);
	glTranslatef(34,44,0);
	glutSolidSphere(1.5,50,50);
	glTranslatef(-34,-44,0);
	glColor3f(0.12,0.12,0.12);//cover
	glTranslatef(34.9,44.8,1);
	glutSolidSphere(2,50,50);
	glTranslatef(-34.9,-44.8,1);
glLineWidth(2);
	glBegin(GL_POLYGON);//road
	glColor3f(0,0,0);
	glVertex3f(0,0,0);
	glVertex3f(50,0,0);
	glVertex3f(50,10,0);
	glVertex3f(0,10,0);
	glEnd();
	glBegin(GL_POLYGON);//roadline
	glColor3f(1,1,1);
	glVertex3f(5,5,5);
	glVertex3f(15,5,5);
	glVertex3f(15,6,5);
	glVertex3f(5,6,5);
	glEnd();
	glBegin(GL_POLYGON);//roadline
	glVertex3f(20,5,1);
	glVertex3f(30,5,1);
	glVertex3f(30,6,1);
	glVertex3f(20,6,1);
	glEnd();
	glBegin(GL_POLYGON);//roadline
	glVertex3f(35,5,1);
	glVertex3f(45,5,1);
	glVertex3f(45,6,1);
	glVertex3f(35,6,1);
	glEnd();
	glBegin(GL_POLYGON);//grnd
	glColor3f(0.544,0.272,0.272);
	glVertex3f(0,10,0);
	glVertex3f(50,10,0);
	glColor3f(0.512,0,0);
	glVertex3f(50,12,0);
	glColor3f(0.544,0.272,0.272);
	glVertex3f(0,12,0);
	glEnd();
	glBegin(GL_POLYGON);//green
	glColor3f(0.512,0,0);
	glVertex3f(0,15,0);
	glColor3f(0.228,0.856,0.14);
	glVertex3f(50,15,0);
	glVertex3f(50,18,0);
	glVertex3f(0,18,0);
	glEnd();
     glColor3f(0.996,0.4705,0.031375);//building
glBegin(GL_POLYGON);
    glVertex2f(0,18);
    glVertex2f(4,18);
    glVertex2f(4,30);
    glVertex2f(0,30);
    glEnd();
    glColor3f(0.63921,0.09019,0.1294);
    glBegin(GL_POLYGON);
    glVertex2f(4,18);
    glVertex2f(4,35);
    glVertex2f(10,35);
    glVertex2f(10,18);
    glEnd();
    glColor3f(0.7215,0.22745,0.03921);
    glBegin(GL_POLYGON);
    glVertex2f(10,32.5);
    glVertex2f(14,32.5);
    glVertex2f(14,18);
    glVertex2f(10,18);
    glEnd();
    glColor3f(0.63921,0.09019,0.1294);
    glBegin(GL_POLYGON);
    glVertex2f(14,18);
    glVertex2f(14,30);
    glVertex2f(18,30);
    glVertex2f(18,18);
    glEnd();
    glColor3f(0,0,0);//window
    glBegin(GL_POLYGON);
    glVertex3f(1,18,1);
    glVertex3f(3,18,1);
    glVertex3f(3,20,1);
    glVertex3f(1,20,1);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(1,22.5,1);
    glVertex3f(1,25,1);
    glVertex3f(3,25,1);
    glVertex3f(3,22.5,1);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(1,26.25,1);
    glVertex3f(1,28.75,1);
    glVertex3f(3,28.75,1);
    glVertex3f(3,26.25,1);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(7,18,1);
    glVertex3f(7,21.25,1);
    glVertex3f(9,21.25,1);
    glVertex3f(9,18,1);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(5,22.5,1);
    glVertex3f(5,25,1);
    glVertex3f(7,25,1);
    glVertex3f(7,22.5,1);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(7,26.25,1);
    glVertex3f(7,28.75,1);
    glVertex3f(9,28.75,1);
    glVertex3f(9,26.25,1);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(5,30,1);
    glVertex3f(5,32.5,1);
    glVertex3f(7,32.5,1);
    glVertex3f(7,30,1);
    glEnd();
    //windows
    glBegin(GL_POLYGON);
    glVertex3f(11,18,1);
    glVertex3f(11,22.5,1);
    glVertex3f(13,22.5,1);
    glVertex3f(13,18,1);
    glEnd();
    glBegin(GL_POLYGON);//illi
    glVertex3f(11,23.75,1);
    glVertex3f(11,26.25,1);
    glVertex3f(13,26.25,1);
    glVertex3f(13,23.75,1);
    glEnd();
    glPushMatrix();
     glColor3f(0.96,.349,0.0823);
glTranslatef(16,27,0);
     glColor3f(0.96,.349,0.0823);
    glPopMatrix();
   glColor3f(1,1,1);
     glBegin(GL_POLYGON);
    glVertex3f(15,18,1);//illi
    glVertex3f(15,23.75,1);
    glVertex3f(17,23.75,1);
    glVertex3f(17,18,1);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(15,26.25,1);
    glVertex3f(15,28.75,1);
    glVertex3f(17,28.75,1);
    glVertex3f(17,26.25,1);//illi
    glEnd();
    glColor3f(0.5,0.5,0.5);
    //rightside diagram
    glBegin(GL_POLYGON);
    glVertex2f(32,18);
    glVertex2f(32,25);
    glVertex2f(36,25);
    glVertex2f(36,18);
    glEnd();
    glColor3f(0.7,0.7,0.7);

    glBegin(GL_POLYGON);
    glVertex2f(36,18);
    glVertex2f(36,30);
    glVertex2f(42,30);
    glVertex2f(42,18);
    glEnd();
    glColor3f(0.567,0.589,0.590);

    glBegin(GL_POLYGON);
    glVertex2f(42,18);
    glVertex2f(42,32.5);
    glVertex2f(48,32.5);
    glVertex2f(48,18);
    glEnd();
    glColor3f(0,0,0);

    glBegin(GL_POLYGON);//illi
    glVertex3f(33,18,1);
    glVertex3f(33,22.5,1);
    glVertex3f(35,22.5,1);
    glVertex3f(35,18,1);
    glEnd();
    glColor3f(0.5,0.5,0.5);

    glBegin(GL_POLYGON);
    glVertex3f(38,21.25,1);
    glVertex3f(38,23.75,1);
    glVertex3f(40,23.75,1);
    glVertex3f(40,21.25,1);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(37,25,1);
    glVertex3f(37,27.5,1);
    glVertex3f(39,27.5,1);
    glVertex3f(39,25,1);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(43,28.75,1);
    glVertex3f(43,31.25,1);
    glVertex3f(45,31.25,1);
    glVertex3f(45,28.75,1);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(46,18,1);
    glVertex3f(46,22.5,1);
    glVertex3f(48,22.5,1);
    glVertex3f(48,18,1);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(43,23.75,1);
    glVertex3f(43,27.5,1);
    glVertex3f(46,27.5,1);
    glVertex3f(46,23.75,1);//illi
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.4,0);//branch
    //glLineWidth(300);
    glVertex3f(22,18,1);
    glVertex3f(22,23.75,1);
    glVertex3f(23,23.75,1);
    glVertex3f(23,18,1);
    glEnd();
    glPushMatrix();
    glColor3f(0,0.7,0);//tree
    glTranslatef(23,25,0);
    glutSolidSphere(2,50,50);
    glPopMatrix();
    glPushMatrix();
    glColor3f(0,0.7,0);
    glTranslatef(20.5,26,0);
    glutSolidSphere(1.5,50,50);
    glPopMatrix();
    glPushMatrix();
    glColor3f(0,0.7,0);
    glTranslatef(23,28,0);
    glutSolidSphere(1.5,50,50);
    glPopMatrix();
    glPushMatrix();
    glColor3f(0,0.7,0);
    glTranslatef(25,27,0);
    glutSolidSphere(1.5,50,50);
    glPopMatrix();
    glPushMatrix();
    glColor3f(0,0.7,0);
    glTranslatef(24,24,0);
    glutSolidSphere(1.5,50,50);
    glPopMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1,0,0);
    glVertex3f(4,36.25,1);
    glVertex3f(4,38.75,1);
    glVertex3f(10,38.25,1);
    glVertex3f(10,36.25,1);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glLineWidth(5);
    glVertex3f(7,35,1);
    glVertex3f(7,36.25,1);
    glEnd();



}
void draw_air2()
{
    glColor3f(1,1,1);
	glBegin(GL_POLYGON);//rectangular body
    glVertex2f(0.0,3.0);
    glVertex2f(0.0,5.50);
    glVertex2f(13.50,5.50);
    glVertex2f(13.50,3.0);
    glEnd();
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);//upper triangle construction plane
    glVertex2f(13.50,5.50);
    glVertex2f(15.00,5.0);
    glVertex2f(15.50,4.50);
    glVertex2f(16.0,4.0);
    glVertex2f(13.50,4.0);
    glEnd();
glColor3f(1.0,1.0,1.0);
glBegin(GL_LINE_LOOP);//outline of upper triangle plane
glVertex2f(13.50,5.50);
glVertex2f(15.0,5.0);
glVertex2f(15.50,4.50);
glVertex2f(16.0,4.0);
glVertex2f(13.50,4.0);
glEnd();
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//lower triangle
glVertex2f(13.50,4.0);
glVertex2f(16.0,4.0);
glVertex2f(16.0,3.7);
glVertex2f(14.5,3.0);
glVertex2f(13.5,3.0);
glEnd();


glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//back wing
glVertex2f(0.0,5.50);
glVertex2f(0.0,9.0);
glVertex2f(1.0,9.0);
glVertex2f(4.0,5.50);
glEnd();


glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//left side wing
glVertex2f(6.50,5.50);
glVertex2f(5.0,7.0);
glVertex2f(7.50,7.0);
glVertex2f(9.0,5.50);
glEnd();

glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);//rightside wing
glVertex2f(7.0,4.0);
glVertex2f(10.0,4.0);
glVertex2f(8.0,1.50);
glVertex2f(5.0,1.50);
glEnd();
char t[100]="X812                     AIR INDIA";
glRasterPos3f(2,4,1);//textambulance
	for(int u=0;u<strlen(t);u++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,t[u]);
		glColor3f(1,0,0);



}

	void write_char2()
{

     glColor3f(1,1,1);
	char t[50]="DUBAI AIRPORT";
	glRasterPos3f(4.7,37.0,10);
	for(int i=0;i<strlen(t);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,t[i]);
}

void draw_stars2()
{
	int i,j;
	i=rand()%50;
	j=50-(rand()%25);
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor3f(1,1,1);
	glVertex3f(i,j,-5);
	glVertex3f(-i,j,-5);
	glEnd();
	glPointSize(1);
}

void draw_tel2()
{
	glColor3f(1,1,1);
	glTranslatef(21,39,1);
	glutSolidSphere(6,50,50);
	glTranslatef(-20,-39,1);
	glColor3f(0,0,0);
	char m[200]={"Air India Express Flight 812"};//writings
	char n[100]={" At Dubai International Airport"};
	char o[100]={"Time 01:06 GST"};
	char r[50]={"   Press B...."};
	glRasterPos3f(16,35,10);
	for(int i=0;i<strlen(r);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,r[i]);
	glRasterPos3f(15,41,10);
	for(int i=0;i<strlen(m);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,m[i]);
	glRasterPos3f(14,39,10);
	for(int i=0;i<strlen(n);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,n[i]);
	glRasterPos3f(14.2,37,10);
	for(int i=0;i<strlen(o);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,o[i]);
}
void display2()
{
	glutInitDisplayMode(GLUT_RGB|GLUT_DEPTH);
	glEnable(GL_DEPTH_TEST);
	glClearColor(0.12,0.12,0.12,0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0,50,0,50,-50,50);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	draw_back2();
    draw_stars2();
	write_char2();
	if(a2<60)
	{
		draw_tel2();
	}

	if(a2<30)
	{
	a2=a2-0.07;
	glPushMatrix();
    glTranslatef(0-a2,0,10);
	draw_air2();
	glPopMatrix();
	}

	else if(a2>=30)
	{
		a2=a2-0.05;
		glPushMatrix();
		glTranslatef(0-a2,0,10);
		draw_air2();
		glPopMatrix();
	}
	glFlush();

}

void draw_back21()
{
glColor3f(1,1,1);
	glTranslatef(34,44,0);
	glutSolidSphere(1.5,50,50);
	glTranslatef(-34,-44,0);
	glColor3f(0.12,0.12,0.12);//cover
	glTranslatef(34.9,44.8,1);
	glutSolidSphere(2,50,50);
	glTranslatef(-34.9,-44.8,1);

	glLineWidth(2);
	glBegin(GL_POLYGON);//road
	glColor3f(0,0,0);
	glVertex3f(0,0,0);
	glVertex3f(50,0,0);
	glVertex3f(50,10,0);
	glVertex3f(0,10,0);
	glEnd();
	glBegin(GL_POLYGON);//roadline
	glColor3f(1,1,1);
	glVertex3f(5,5,5);
	glVertex3f(15,5,5);
	glVertex3f(15,6,5);
	glVertex3f(5,6,5);
	glEnd();
	glBegin(GL_POLYGON);//roadline
	glVertex3f(20,5,1);
	glVertex3f(30,5,1);
	glVertex3f(30,6,1);
	glVertex3f(20,6,1);
	glEnd();
	glBegin(GL_POLYGON);//roadline
	glVertex3f(35,5,1);
	glVertex3f(45,5,1);
	glVertex3f(45,6,1);
	glVertex3f(35,6,1);
	glEnd();
	glBegin(GL_POLYGON);//grnd
	glColor3f(0.544,0.272,0.272);
	glVertex3f(0,10,0);
	glVertex3f(50,10,0);
	glColor3f(0.512,0,0);
	glVertex3f(50,12,0);
	glColor3f(0.544,0.272,0.272);
	glVertex3f(0,12,0);
	glEnd();
	glBegin(GL_POLYGON);//green
	glColor3f(0.512,0,0);
	glVertex3f(0,15,0);
	glColor3f(0.228,0.856,0.14);
	glVertex3f(50,15,0);
	glVertex3f(50,18,0);
	glVertex3f(0,18,0);
	glEnd();


}
void draw_air21()
{
    glColor3f(1,1,1);
	glBegin(GL_POLYGON);//rectangular body
    glVertex2f(0.0,3.0);
    glVertex2f(0.0,5.50);
    glVertex2f(13.50,5.50);
    glVertex2f(13.50,3.0);
    glEnd();

    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);//upper triangle construction plane
    glVertex2f(13.50,5.50);
    glVertex2f(15.00,5.0);
    glVertex2f(15.50,4.50);
    glVertex2f(16.0,4.0);
    glVertex2f(13.50,4.0);
    glEnd();
glColor3f(1.0,1.0,1.0);

glBegin(GL_LINE_LOOP);//outline of upper triangle plane
glVertex2f(13.50,5.50);
glVertex2f(15.0,5.0);
glVertex2f(15.50,4.50);
glVertex2f(16.0,4.0);
glVertex2f(13.50,4.0);
glEnd();
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//lower triangle
glVertex2f(13.50,4.0);
glVertex2f(16.0,4.0);
glVertex2f(16.0,3.7);
glVertex2f(14.5,3.0);
glVertex2f(13.5,3.0);
glEnd();
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//back wing
glVertex2f(0.0,5.50);
glVertex2f(0.0,9.0);
glVertex2f(1.0,9.0);
glVertex2f(4.0,5.50);
glEnd();

glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//left side wing
glVertex2f(6.50,5.50);
glVertex2f(5.0,7.0);
glVertex2f(7.50,7.0);
glVertex2f(9.0,5.50);
glEnd();

glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);//rightside wing
glVertex2f(7.0,4.0);
glVertex2f(10.0,4.0);
glVertex2f(8.0,1.50);
glVertex2f(5.0,1.50);
glEnd();

char t[100]="X812                 AIR INDIA";
glRasterPos3f(2,4,1);//textambulance
	for(int u=0;u<strlen(t);u++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,t[u]);
		glColor3f(1,0,0);
		glutSwapBuffers();
}
void write_char21()
{
     glColor3f(1,1,1);
     	glTranslatef(38,33,1);
	glutSolidSphere(6.9,50,50);
	glTranslatef(-38,-33,1);
	glColor3f(1,1,1);
	char r1[80]={"PRESS C "};
	glColor3f(0,0,0);
	glRasterPos3f(35,27,10);
	for(int i=0;i<strlen(r1);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,r1[i]);
	char s[100]={"AIRINDIA X812 aircraft takes off from"};
	char r[100]={"Dubai Airport with 160 Passengers "};
	char t[100]={"      and 6 Crew Members"};
	glColor3f(0,0,0);
	glRasterPos3f(33,35,10);
	for(int i=0;i<strlen(s);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,s[i]);
	glColor3f(0,0,0);
	glRasterPos3f(33,33,20);
	for(int i=0;i<strlen(r);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,r[i]);
		glColor3f(0,0,0);
	glRasterPos3f(33,31,20);
	for(int i=0;i<strlen(t);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,t[i]);

}

void draw_stars21()
{
	int i,j;
	i=rand()%50;
	j=50-(rand()%25);
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor3f(1,1,1);
	glVertex3f(i,j,-5);
	glVertex3f(-i,j,-5);
	glEnd();
	glPointSize(1);
}

void display21()
{
	glutInitDisplayMode(GLUT_RGB|GLUT_DEPTH);
	glEnable(GL_DEPTH_TEST);
	glClearColor(0.12,0.12,0.12,0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0,50,0,50,-50,50);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	draw_back21();
    draw_stars21();
	if(s8==0)
    draw_stars21();
	write_char21();
	if(a8<15)
	{
	a8=a8-0.03;
    glPushMatrix();
    glTranslatef(0-a8,16-a8,8);
	draw_air21();
	glPopMatrix();
	}
	if(a8>=15 )
	{
        a8=a8-0.03;
        glPushMatrix();
        glTranslatef(0-a8,16-a8,8);
        draw_air21();
        glPopMatrix();
	}
	glFlush();
}
void write_char3()
{
    glColor3f(1,1,1);
	glTranslatef(43,43,1);
	glutSolidSphere(6,50,50);
	glTranslatef(-43,-43,1);
	glColor3f(1,1,1);
	char s2[80]={"Pilot Tries to land"};
	char r2[80]={"on Runway 24"};
	glColor3f(0,0,0);
	glRasterPos3f(39,44,20);
	for(int i=0;i<strlen(s2);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,s2[i]);
	glColor3f(0,0,0);
	glRasterPos3f(39,42,30);
	for(int i=0;i<strlen(r2);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,r2[i]);
char r1[80]={"PRESS D"};
	glColor3f(0,0,0);
	glRasterPos3f(40,38,10);
	for(int i=0;i<strlen(r1);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,r1[i]);
}

void draw_air3()
{
      glColor3f(1,1,1);
	glBegin(GL_POLYGON);//rectangular body
    glVertex2f(50.0,3.0);
    glVertex2f(50.0,5.50);
    glVertex2f(36.50,5.50);
    glVertex2f(36.50,3.0);
    glEnd();


    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);//upper triangle construction plane
    glVertex2f(36.50,5.50);
    glVertex2f(35.00,5.0);
    glVertex2f(35.50,4.50);
    glVertex2f(34.0,4.0);
    glVertex2f(36.50,4.0);
    glEnd();


glColor3f(1.0,1.0,1.0);

glBegin(GL_LINE_LOOP);//outline of upper triangle plane
glVertex2f(36.50,5.50);
glVertex2f(35.0,5.0);
glVertex2f(34.50,4.50);
glVertex2f(34.0,4.0);
glVertex2f(36.50,4.0);
glEnd();


glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//lower triangle
glVertex2f(36.50,4.0);
glVertex2f(34.0,4.0);
glVertex2f(34.0,3.7);
glVertex2f(35.5,3.0);
glVertex2f(36.5,3.0);
glEnd();


glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//back wing
glVertex2f(50.0,5.50);
glVertex2f(50.0,9.0);
glVertex2f(49.0,9.0);
glVertex2f(46.0,5.50);
glEnd();


glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//left side wing
glVertex2f(43.50,5.50);
glVertex2f(45.0,7.0);
glVertex2f(42.50,7.0);
glVertex2f(41.0,5.50);
glEnd();

glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);//rightside wing
glVertex2f(43.0,4.0);
glVertex2f(40.0,4.0);
glVertex2f(42.0,1.50);
glVertex2f(45.0,1.50);
glEnd();

char t[100]="AIR INDIA                                    X812";
glRasterPos3f(38,4,1);//textambulance
	for(int u=0;u<strlen(t);u++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,t[u]);
		glColor3f(1,0,0);



}
	void draw_back3()
{
	glColor3f(1,1,1);//moon
	glTranslatef(34,44,0);
	glutSolidSphere(1.5,50,50);
	glTranslatef(-34,-44,0);
	glColor3f(0.12,0.12,0.12);//cover
	glTranslatef(34.9,44.8,1);
	glutSolidSphere(2,50,50);
	glTranslatef(-34.9,-44.8,1);
}

void draw_stars3()
{
	int i,j;
	i=rand()%100;
	j=100-(rand()%25);
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor3f(1,1,1);
	glVertex3f(i,j,-5);
	glVertex3f(-i,j,-5);
	glEnd();
	glPointSize(1);

}
void display3()
{
	glutInitDisplayMode(GLUT_RGB|GLUT_DEPTH);
	glEnable(GL_DEPTH_TEST);
	glClearColor(0.12,0.12,0.12,0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0,50,0,50,-50,50);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	draw_back3();
	draw_stars3();
	write_char3();

	if(b6<=25)
		b6=b6+0.25;
	if(b6>25 /*&& b6<60*/)
	{
		b6=b6+0.02;
		glPushMatrix();
		glTranslatef(+25-b6,35,-5);
		draw_air3();
		glPopMatrix();
		}
	glFlush();
}

void draw_other4()
{
	glColor3f(1,1,1);
	glTranslatef(34,44,0);
	glutSolidSphere(1.5,50,50);
	glTranslatef(-34,-44,0);
	glColor3f(0.12,0.12,0.12);//cover
	glTranslatef(34.9,44.8,1);
	glutSolidSphere(2,50,50);
	glTranslatef(-34.9,-44.8,1);
	glBegin(GL_POLYGON);//green
	glColor3f(0.048,0.496,0.06);
	glVertex3f(0,20,-2);
	glVertex3f(0,25,-2);
	glVertex3f(50,25,-2);
	glVertex3f(50,24,-2);
	glEnd();
	glBegin(GL_POLYGON);//grey
	glColor3f(0.276,0.276,0.276);
	glVertex3f(0,0,-2);
	glVertex3f(0,20,-2);
	glVertex3f(50,24,-2);
	glVertex3f(50,0,-2);
	glEnd();
}
void write_char4()
{
    glColor3f(1,1,1);
	glTranslatef(43,43,1);
	glutSolidSphere(6,50,50);
	glTranslatef(-43,-43,1);
	glColor3f(1,1,1);
	char s2[80]={"Location :Mangaluru"};
	char r2[80]={"Time : 6:05 a.m IST "};
	glColor3f(0,0,0);
	glRasterPos3f(39,44,20);
	for(int i=0;i<strlen(s2);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,s2[i]);
	glColor3f(0,0,0);
	glRasterPos3f(39,42,30);
	for(int i=0;i<strlen(r2);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,r2[i]);
		 char r1[80]={"PRESS E"};
	glColor3f(0,0,0);
	glRasterPos3f(40,38,10);
	for(int i=0;i<strlen(r1);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,r1[i]);
}
void draw_stars4()
{
	int i,j;
	i=rand()%50;
	j=50-(rand()%25);
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor3f(1,1,1);
	glVertex3f(i,j+1,-5);
	glVertex3f(-i,j+5,-5);
	glVertex3f(i+i,j+10,-5);
	glVertex3f(-i+i,j+8,-5);
	glEnd();
}
void draw_air4()
{
     glColor3f(1,1,1);
	glBegin(GL_POLYGON);//rectangular body
    glVertex2f(50.0,3.0);
    glVertex2f(50.0,5.50);
    glVertex2f(36.50,5.50);
    glVertex2f(36.50,3.0);
    glEnd();
glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);//upper triangle construction plane
    glVertex2f(36.50,5.50);
    glVertex2f(35.00,5.0);
    glVertex2f(35.50,4.50);
    glVertex2f(34.0,4.0);
    glVertex2f(36.50,4.0);
    glEnd();
glColor3f(1.0,1.0,1.0);
glBegin(GL_LINE_LOOP);//outline of upper triangle plane
glVertex2f(36.50,5.50);
glVertex2f(35.0,5.0);
glVertex2f(34.50,4.50);
glVertex2f(34.0,4.0);
glVertex2f(36.50,4.0);
glEnd();
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//lower triangle
glVertex2f(36.50,4.0);
glVertex2f(34.0,4.0);
glVertex2f(34.0,3.7);
glVertex2f(35.5,3.0);
glVertex2f(36.5,3.0);
glEnd();
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//back wing
glVertex2f(50.0,5.50);
glVertex2f(50.0,9.0);
glVertex2f(49.0,9.0);
glVertex2f(46.0,5.50);
glEnd();
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);//left side wing
glVertex2f(43.50,5.50);
glVertex2f(45.0,7.0);
glVertex2f(42.50,7.0);
glVertex2f(41.0,5.50);
glEnd();
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//rightside wing
glVertex2f(43.0,4.0);
glVertex2f(40.0,4.0);
glVertex2f(42.0,1.50);
glVertex2f(45.0,1.50);
glEnd();
glColor3f(1.0,0.0,0.0);
char t[100]="AIR INDIA                   X812";
glRasterPos3f(38,4.5,1);//textambulance
	for(int u=0;u<strlen(t);u++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,t[u]);
}
void display4()
{
	glutInitDisplayMode(GLUT_RGB|GLUT_DEPTH);
	glEnable(GL_DEPTH_TEST);
	glClearColor(0.12,0.12,0.12,0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0,50,0,50,-50,50);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
    write_char4();
	draw_other4();
	draw_stars4();
    if(b4<=25)
		b4=b4+0.5;
	if(b4>25)
	{
		b4=b4+0.02;
		glPushMatrix();
		glRotatef(20,40,30,10);
			glTranslatef(+15-b4,+25,-5);
		draw_air4();
		glPopMatrix();
	}
	glFlush();
}

float e5,s5,eb4;
void draw_back5()
{
glColor3f(1,1,1);
	glTranslatef(34,44,0);
	glutSolidSphere(1.5,50,50);
	glTranslatef(-34,-44,0);
	glColor3f(0.12,0.12,0.12);//cover
	glTranslatef(34.9,44.8,1);
	glutSolidSphere(2,50,50);
	glTranslatef(-34.9,-44.8,1);
	glBegin(GL_POLYGON);//road
	glColor3f(0,0,0);
	glVertex3f(0,15,0);
	glVertex3f(50,15,0);
	glVertex3f(50,25,0);
	glVertex3f(0,25,0);
	glEnd();
	glBegin(GL_POLYGON);//roadline
	glColor3f(1,1,1);
	glVertex3f(5,20,5);
	glVertex3f(15,20,5);
	glVertex3f(15,21,5);
	glVertex3f(5,21,5);
	glEnd();
	glBegin(GL_POLYGON);//roadline
	glVertex3f(20,20,1);
	glVertex3f(30,20,1);
	glVertex3f(30,21,1);
	glVertex3f(20,21,1);
	glEnd();
	glBegin(GL_POLYGON);//roadline
	glVertex3f(35,20,1);
	glVertex3f(45,20,1);
	glVertex3f(45,21,1);
	glVertex3f(35,21,1);
	glEnd();
	glBegin(GL_POLYGON);//grnd
	glColor3f(0,1,0);
	glVertex3f(0,10,0);
	glVertex3f(50,10,0);
	glColor3f(0.512,0,0);
	glVertex3f(50,12,0);
	glColor3f(0.544,0.272,0.272);
	glVertex3f(0,12,0);
	glEnd();
glLineWidth(2);
	glBegin(GL_POLYGON);//road
	glColor3f(0,1,0);
	glVertex3f(0,0,0);
	glVertex3f(50,0,0);
	glVertex3f(50,15,0);
	glVertex3f(0,15,0);
	glEnd();
}
void draw_air5()
{
    glColor3f(1,1,1);
	glBegin(GL_POLYGON);//rectangular body
    glVertex2f(50.0,3.0);
    glVertex2f(50.0,5.50);
    glVertex2f(36.50,5.50);
    glVertex2f(36.50,3.0);
    glEnd();
glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);//upper triangle construction plane
    glVertex2f(36.50,5.50);
    glVertex2f(35.00,5.0);
    glVertex2f(35.50,4.50);
    glVertex2f(34.0,4.0);
    glVertex2f(36.50,4.0);
    glEnd();
glColor3f(1.0,1.0,1.0);
glBegin(GL_LINE_LOOP);//outline of upper triangle plane
glVertex2f(36.50,5.50);
glVertex2f(35.0,5.0);
glVertex2f(34.50,4.50);
glVertex2f(34.0,4.0);
glVertex2f(36.50,4.0);
glEnd();
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//lower triangle
glVertex2f(36.50,4.0);
glVertex2f(34.0,4.0);
glVertex2f(34.0,3.7);
glVertex2f(35.5,3.0);
glVertex2f(36.5,3.0);
glEnd();
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//back wing
glVertex2f(50.0,5.50);
glVertex2f(50.0,9.0);
glVertex2f(49.0,9.0);
glVertex2f(46.0,5.50);
glEnd();
glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);//left side wing
glVertex2f(43.50,5.50);
glVertex2f(45.0,7.0);
glVertex2f(42.50,7.0);
glVertex2f(41.0,5.50);
glEnd();
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//rightside wing
glVertex2f(43.0,4.0);
glVertex2f(40.0,4.0);
glVertex2f(42.0,1.50);
glVertex2f(45.0,1.50);
glEnd();
glColor3f(1.0,0.0,0.0);
char t[100]="AIR INDIA                           X812";
glRasterPos3f(37,4.5,1);//textambulance
	for(int u=0;u<strlen(t);u++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,t[u]);
}

	void write_char5()
{
glColor3f(1,1,1);
	glTranslatef(43,43,1);
	glutSolidSphere(6.8,50,50);
	glTranslatef(-43,-43,1);
	glColor3f(1,1,1);
char s[100]={" The Flight overshot Runway on landing"};
     char r[100]={" leaving only 2800ft in which to stop"};
	glColor3f(0,0,0);
	glRasterPos3f(37,43,10);
	for(int i=0;i<strlen(s);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,s[i]);
    glRasterPos3f(37,41,10);
	for(int i=0;i<strlen(r);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,r[i]);
		char r1[80]={"PRESS F "};
	glColor3f(0,0,0);
	glRasterPos3f(40,37,10);
	for(int i=0;i<strlen(r1);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,r1[i]);
}
void draw_stars5()
{
	int i,j;
	i=rand()%50;
	j=50-(rand()%25);
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor3f(1,1,1);
	glVertex3f(i,j,-5);
	glVertex3f(-i,j,-5);
	glEnd();
	glPointSize(1);
}
void display5()
{
	glutInitDisplayMode(GLUT_RGB|GLUT_DEPTH);
	glEnable(GL_DEPTH_TEST);
	glClearColor(0.12,0.12,0.12,0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0,50,0,50,-50,50);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
draw_back5();
	draw_stars5();
	write_char5();
	if(eb4<=25)
		eb4=eb4+0.5;
if(eb4>25 )
	{
		eb4=eb4+0.03;
		glPushMatrix();
		glRotatef(20,40,30,10);
        glTranslatef(+15-eb4,+25,-5);
        draw_air5();
		glPopMatrix();
    }
    glutPostRedisplay();
	glFlush();
}
float e6,eb5;
void draw_back6()
{

glColor3f(1,1,1);
	glTranslatef(34,44,0);
	glutSolidSphere(1.5,50,50);
	glTranslatef(-34,-44,0);
	glColor3f(0.12,0.12,0.12);//cover
	glTranslatef(34.9,44.8,1);
	glutSolidSphere(2,50,50);
	glTranslatef(-34.9,-44.8,1);


	glLineWidth(2);
	glBegin(GL_POLYGON);//road
	glColor3f(0,.2,0);
	glVertex3f(20,10,1);
	glVertex3f(50,10,1);
	glVertex3f(50,20,1);
	glVertex3f(20,20,1);
	glEnd();

	glBegin(GL_POLYGON);//road
	glColor3f(0.92,0.28,0.05);
	glVertex3f(20,0,1);
	glVertex3f(50,0,1);
	glVertex3f(50,10,1);
	glVertex3f(20,10,1);
	glEnd();

	glBegin(GL_POLYGON);//roadline
	glVertex3f(20,5,1);
	glVertex3f(30,5,1);
	glVertex3f(30,6,1);
	glVertex3f(20,6,1);
	glEnd();
	glBegin(GL_POLYGON);//roadline
	glVertex3f(35,5,1);
	glVertex3f(45,5,1);
	glVertex3f(45,6,1);
	glVertex3f(35,6,1);
	glEnd();
}
void draw_air6()
{



    glColor3f(1,1,1);
	glBegin(GL_POLYGON);//rectangular body
    glVertex3f(50.0,3.0,1);
    glVertex3f(50.0,5.50,1);
    glVertex3f(36.50,5.50,1);
    glVertex3f(36.50,3.0,1);
    glEnd();


    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);//upper triangle construction plane
    glVertex3f(36.50,5.50,1);
    glVertex3f(35.00,5.0,1);
    glVertex3f(35.50,4.50,1);
    glVertex3f(34.0,4.0,1);
    glVertex3f(36.50,4.0,1);
    glEnd();


glColor3f(1.0,1.0,1.0);

glBegin(GL_LINE_LOOP);//outline of upper triangle plane
glVertex3f(36.50,5.50,1);
glVertex3f(35.0,5.0,1);
glVertex3f(34.50,4.50,1);
glVertex3f(34.0,4.0,1);
glVertex3f(36.50,4.0,1);
glEnd();


glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//lower triangle
glVertex3f(36.50,4.0,1);
glVertex3f(34.0,4.0,1);
glVertex3f(34.0,3.7,1);
glVertex3f(35.5,3.0,1);
glVertex3f(36.5,3.0,1);
glEnd();


glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//back wing
glVertex3f(50.0,5.50,1);
glVertex3f(50.0,9.0,1);
glVertex3f(49.0,9.0,1);
glVertex3f(46.0,5.50,1);
glEnd();


glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);//left side wing
glVertex3f(43.50,5.50,1);
glVertex3f(45.0,7.0,1);
glVertex3f(42.50,7.0,1);
glVertex3f(41.0,5.50,1);
glEnd();

glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);//rightside wing
glVertex3f(43.0,4.0,1);
glVertex3f(40.0,4.0,1);
glVertex3f(42.0,1.50,1);
glVertex3f(45.0,1.50,1);
glEnd();



}
	void write_char6()
{




    glColor3f(1,1,1);
	glTranslatef(43,43,1);
	glutSolidSphere(6.8,50,50);
	glTranslatef(-43,-43,1);
	glColor3f(0,1.02,1.02);



	char s[80]={"The Aircraft moved towards the cliff "};
	char r[80]={"and fell into the valley "};
	glColor3f(0,0,0);
	glRasterPos3f(38,43,10);
	for(int i=0;i<strlen(s);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,s[i]);
	glColor3f(0,0,0);
	glRasterPos3f(38,41,20);
	for(int i=0;i<strlen(r);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,r[i]);


		 char r1[80]={"PRESS G "};
	glColor3f(0,0,0);
	glRasterPos3f(40,37,10);
	for(int i=0;i<strlen(r1);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,r1[i]);






}
void draw_stars6()
{
	int i,j;
	i=rand()%50;
	j=50-(rand()%25);
	glPointSize(3);
	glBegin(GL_POINTS);
	glColor3f(1,1,1);
	glVertex3f(i,j,-5);
	glVertex3f(-i,j,-5);
	glEnd();
	glPointSize(1);
}
void crash()
{
    glColor3f(1,0,0);
	glBegin(GL_POLYGON);//rectangular body
    glVertex2f(0.0,0.0);
    glVertex2f(0.0,14.0);
    glVertex2f(2.0,9.50);
    glVertex2f(3,16.50);
    glVertex2f(4.50,9.0);
    glVertex2f(5.0,19.0);
    glVertex2f(6.0,9.50);
    glVertex2f(7.50,14.50);
    glVertex2f(7.50,0.0);
    glEnd();
    glColor3f(1,1,1);
	glTranslatef(0,43,1);
	glutSolidSphere(10,50,50);
	glTranslatef(0,-43,1);
	glColor3f(0,1.02,1.02);
char s1[80]={"The Aircraft then burst into flames  "};
	char r1[80]={"killing 158 people on board"};
	glColor3f(0,0,0);
	glRasterPos3f(0,43,10);
	for(int i=0;i<strlen(s1);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,s1[i]);
	glColor3f(0,0,0);
	glRasterPos3f(0,41,20);
	for(int i=0;i<strlen(r1);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,r1[i]);
}
void display6()
{
	glutInitDisplayMode(GLUT_RGB|GLUT_DEPTH);
	glEnable(GL_DEPTH_TEST);
	glClearColor(0.12,0.12,0.12,0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0,50,0,50,-50,50);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	draw_back6();
draw_stars6();
	write_char6();
if(eb5<=25)
		eb5=eb5+0.8;
	if(eb5>25 && eb5<30)
	{
		eb5=eb5+0.05;
		glPushMatrix();
		glTranslatef(+15-eb5,+18,-5);
		draw_air6();
		glPopMatrix();
	}
	if(eb5>=30 && eb5<=50)
	{
		eb5=eb5+0.05;
		glPushMatrix();
		glRotatef(60,80,20,0);
		glTranslatef(+15-eb5,18,-5);
		draw_air6();
		glPopMatrix();
	}
	if(eb5>50)
	{
        crash();
	}
	glFlush();
}
	void write_char7()
{
    glColor3f(1,1,1);
	char s[10000]={"                From the vault,down the lane,On May 22,2010 a terrible incident that took place still haunts many.Air India Express Flight 812, passengers and their family"};
	char r[8000]={" members witnessed a terrifying a shocker when the airplane crashed spreading wreckage across surrounding hillside of 160 passengers and 6 crew members on board,"};
	char t[8000]={" only 8 passengers survived. Sudden actions were taken and the people around there came for help. Show of concern, selflessness and the spark of humanity were"};
    char u[8000]={"shown.Thus faith in humanity restored.Many people leaving their day job came for the rescue.Compensation were made by Indian Government.This event marked "};
    char v[8000]={" two things.Firstly,of how the time changes.People do not know when will their last GoodBye be.Flight journey starting from the pleasant one ended up in such a"};
    char w[8000]={"bad situation.So,it is never too late to forgive you're closed ones.Secondly,of how the people broke their shackles and selflessly came out for help saving the faith"};
    char x[8000]={"in Humanity.Despite that 8 long years have been passed away, we on behalf of all render,console all the souls that has left us and a full due sympathy for them and"};
    char y[8000]={" their family members.May all the souls Rest in peace.We salute all the people who came out for help and showed their humanity and to those who lost their life saving many."};
    char z[8000]={"                                                                                     Thank You.Rest in peace.Respect."};
	glColor3f(1,1,1);
	glRasterPos3f(0,43,10);
	for(int i=0;i<strlen(s);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,s[i]);
	glColor3f(1,1,1);
	glRasterPos3f(0,40,20);
	for(int i=0;i<strlen(r);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,r[i]);
		glRasterPos3f(0,37,20);
	for(int i=0;i<strlen(t);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,t[i]);
		glRasterPos3f(0,34,20);
	for(int i=0;i<strlen(u);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,u[i]);
		glRasterPos3f(0,31,20);
	for(int i=0;i<strlen(v);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,v[i]);
		glRasterPos3f(0,28,20);
	for(int i=0;i<strlen(w);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,w[i]);
		glRasterPos3f(0,25,20);
	for(int i=0;i<strlen(x);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,x[i]);
		glRasterPos3f(0,22,20);
	for(int i=0;i<strlen(y);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,y[i]);
		glRasterPos3f(0,15,20);
	for(int i=0;i<strlen(z);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,z[i]);
char r1[80]={"PRESS Z "};
	glColor3f(0,0,0);
	glRasterPos3f(0,37,10);
	for(int i=0;i<strlen(r1);i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,r1[i]);
}
void display7()
{
	glutInitDisplayMode(GLUT_RGB|GLUT_DEPTH);
	glEnable(GL_DEPTH_TEST);
	glClearColor(0.12,0.12,0.12,0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0,50,0,50,-50,50);
	glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
    write_char7();
  glutPostRedisplay();
	glFlush();
}
void move()
	{
		glutPostRedisplay();
	}
	void key(unsigned char k,int x,int y)
	{
		if(k=='S' || k=='s')
		{
			glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
            glutDestroyWindow(des);
			des1=glutCreateWindow("slide1");
			glutDisplayFunc(display1);
			glutKeyboardFunc(key);
		}
		if(k=='A' || k=='a')
		{
			glLoadIdentity();
            glutDestroyWindow(des1);
			des2=glutCreateWindow("slide2");
			glutDisplayFunc(display2);
			glutKeyboardFunc(key);
		}
		if(k=='b' || k=='B')
		{
			glutDestroyWindow(des2);
			des3=glutCreateWindow("slide3");
			glutDisplayFunc(display21);
			glutKeyboardFunc(key);
		}
		if(k=='C' || k=='c')
		{
			glutDestroyWindow(des3);
			des4=glutCreateWindow("slide4");
			glutDisplayFunc(display3);
			glutKeyboardFunc(key);
		}
		if(k=='D' || k=='d')
		{
			glutDestroyWindow(des4);
			des5=glutCreateWindow("slide5");
			glutDisplayFunc(display4);
			glutKeyboardFunc(key);
		}
        if(k=='E' || k=='e')
		{
			glutDestroyWindow(des5);
			des6=glutCreateWindow("slide6");
            glutDisplayFunc(display5);
			glutKeyboardFunc(key);
		}
		 if(k=='F' || k=='f')
		{
			glutDestroyWindow(des6);
			des7=glutCreateWindow("slide7");
            glutDisplayFunc(display6);
			glutKeyboardFunc(key);
		}
		if(k=='G' || k=='g')
		{
			glutDestroyWindow(des7);
			des8=glutCreateWindow("slide7");
            glutDisplayFunc(display7);
			glutKeyboardFunc(key);
		}
		if(k=='Z' || k=='z')
		{
			exit(0);
		}
	}
