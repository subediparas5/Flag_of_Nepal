#include <GL/glut.h>
#include <stdlib.h>
#include<math.h>
/*references
https://www.desmos.com/calculator/jk7urhd0aw
https://math.dartmouth.edu/activities/undergrad/poster-session/2013/PawanDhakal.pdf
https://www.crwflags.com/fotw/flags/np'.html
*/
void Init()
{
    glClearColor(0,0,0,1);
    glLoadIdentity();
    glClear(GL_COLOR_BUFFER_BIT);


}

void blueQuad(){
    glBegin(GL_QUADS);//blue vertical st. quadrilateral of flag
            glColor3f(0,0,1);
            glVertex3f(0,-0.00602*3,0);
            glVertex3f(-0.00602*3,-0.006*3,0);
            glVertex3f(-0.00602*3,0.3293*3,0);
            glVertex3f(0,0.32602*3,0);
            glEnd();

        glBegin(GL_QUADS);//blue slanted quadrilateral of flag
            glColor3f(0,0,1);
            glVertex3f(0,.32*3,0);
            glVertex3f(0,.32602*3,0);
            glVertex3f(.259*3,.16415*3,0);
            glVertex3f(.24*3,.17*3,0);
            glEnd();


        glBegin(GL_QUADS);//blue horizontal st. quadrilateral of flag
            glColor3f(0,0,1);
            glVertex3f(.24*3,.17*3,0);
            glVertex3f(.259*3,.16415*3,0);
            glVertex3f(0.08204*3,.16398*3,0);
            glVertex3f(0.07029*3,.17*3,0);
            glEnd();


        glBegin(GL_QUADS);//blue horizontal st. quadrilateral of flag
            glColor3f(0,0,1);
            glVertex3f(.08204*3,.16398*3,0);
            glVertex3f(.07029*3,.17*3,0);
            glVertex3f(.24*3,0,0);
            glVertex3f(.252*3,-0.00578*3,0);
            glEnd();


        glBegin(GL_QUADS);//blue horizontal st. quadrilateral of flag
            glColor3f(0,0,1);
            glVertex3f(.24*3,0,0);
            glVertex3f(.252*3,-0.00578*3,0);
            glVertex3f(-0.00602*3,-0.006*3,0);
            glVertex3f(-0.00602*3,0,0);
            glEnd();
}

void redTriangles(){
    glBegin(GL_TRIANGLES);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(0,17*.03,0);
    glVertex3f(24*.03,17*.03,0);
    glVertex3f(0,32*.03,0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(0,17*.03,0);
    glVertex3f(.07029*3,.17*3,0);
    glVertex3f(.24*3,0,0);
    glVertex3f(0,0,0);
    glEnd();

}

void moon_circle(GLfloat x, GLfloat y, GLfloat r)
 {
   float angle;
   glBegin(GL_POLYGON);
   for(int i=0;i<100;i++)
   {
       angle = i*2*(M_PI/100);
       glVertex2f(x+(cos(angle)*r),y+(sin(angle)*r));
   }
   glEnd();
 }

void moon(){

            glColor3f(1.0,1.0,1.0);
            moon_circle(0.18,0.630,0.0981);
            glColor3f(1.0,0,0);
            moon_circle(0.18,0.7,0.0981);
            glColor3f(1.0,1.0,1.0);
            moon_circle(0.18,0.61,0.04905);
            /*glColor3f(1,1,1);
            glBegin(GL_POLYGON);
            glVertex3f(0.04351*3,0.22179*3,0);
            glVertex3f(0.0427*3,0.22605*3,0);
            glVertex3f(0.04732*3,0.22369*3,0);
            glVertex3f(0.04501*3,0.23094*3,0);
            glVertex3f(0.05095*3,0.22497*3,0);
            glVertex3f(0.049*3,0.23487*3,0);
            glVertex3f(0.05457*3,0.2258*3,0);
            glVertex3f(0.05416*3,0.23778*3,0);
            glEnd();
            */
}

void sun(){
            glColor3f(1.0,1.0,1.0);
            glBegin (GL_POLYGON);
            glVertex3f(0.06*3,0.0334*3,0);
            glVertex3f(0.0685*3,0.05323*3,0);
            glVertex3f(0.08573*3,0.04029*3,0);
            glVertex3f(0.08312*3,0.06173*3,0);
            glVertex3f(0.10456*3,0.05913*3,0);
            glVertex3f(0.09159*3,0.07639*3,0);
            glVertex3f(0.1114*3,0.08483*3,0);
            glVertex3f(0.0916*3,0.09333*3,0);
            glVertex3f(0.10452*3,0.11055*3,0);
            glVertex3f(0.08312*3,0.10797*3,0);
            glVertex3f(0.085*3,0.12971*3,0);
            glVertex3f(0.0686*3,0.11738*3,0);
            glVertex3f(0.06*3,0.1363*3,0);
            glVertex3f(0.0519*3,0.11729*3,0);
            glVertex3f(0.0343*3,0.12939*3,0);
            glVertex3f(0.0365*3,0.108*3,0);
            glVertex3f(0.01544*3,0.11057*3,0);
            glVertex3f(0.02841*3,0.09332*3,0);
            glVertex3f(0.00855*3,0.08485*3,0);
            glVertex3f(0.02841*3,0.07639*3,0);
            glVertex3f(0.01545*3,0.05911*3,0);
            glVertex3f(0.0367*3,0.06174*3,0);
            glVertex3f(0.03427*3,0.0429*3,0);
            glVertex3f(0.0515*3,0.0532*3,0);
            glEnd();
}


void Draw()
{
    blueQuad();
    redTriangles();
    moon();
    sun();
    glFlush();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(500,610);//aspect ratio 1:1.2190
    glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);

    glutCreateWindow("Flag of Nepal");

    Init();

    /*float Ax=0,Ay=0;
    float Bx=100,By=Ay;
    float Cx=Ax,Cy=Bx+Bx*1/3;
    float Dx=Ax,Dy=Bx;
    float Ex=Bx-Bx*cos(PI/4),Ey=sqrt(Bx*Bx-(Bx-Ex)*(Bx-Ex));
    float Fx=Ax,Fy=Ey;
    float Gx=Bx,Gy=Ey;
    float Hx=Bx/4,Hy=Ay;
    float Ix=Hx,Iy=Cy+((Gy-Cy)/(Gx-Cx));
    float Jx=Ax,Jy=(Cy+Fy)/2;
    float Kx=Cx+((Gx-Cx)/(Gy-Cy))*(Hx-Cx),Ky=Jy;
    float Lx=Hx,Ly=Jy;
    float Mx=Hx,My=Jy+((Gy-Jy)/(Gx-Jx))*(Mx-Jx);
    float Nx=Hx,Ny=My-d;
    float d=(abs(-(Mx/Bx)-(My/Dy)+1))/sqrt(1/(Bx*Bx)+1/(Dy*Dy));
    float Ox=Ax,Oy=My;
    float Px=0,Py=Oy;
    float Qx=0,Qy=Oy;
    float Rx=0,Ry=0;
    float Sx=0,Sy=0;
    float Tx=0,Ty=0;
    float Ux=Ax,Uy=(Fy-Ay)/2;
    float Vx=Dx+((Bx-Dx)/(By-Dy))*(Vy-Dy),Vy=Uy;
    float Wx=Hx,Wy=Vy;
    float Xx=0,Xy=0;

    float r1=Ly-Ny,r2,r3,r4,r5,r6,r7;
    float a,n,x,y,z,tn;
    */



    glutDisplayFunc(Draw);

    glutMainLoop();

    return EXIT_SUCCESS;
}
