#include <graphics.h>

#include <stdlib.h>

#include <string.h>

#include <stdio.h>

#include <conio.h>

#include<math.h>

#include<dos.h>

#include<string.h>

#include<iostream>

#include<ctime>





#define S_N_L (radius-10)        // Second Needle Length

#define S_N_C RED                   // Second needle Color

#define M_N_L (radius-20)           // Minute Needle Length

#define M_N_C LIGHTRED              // Minute Needle Color

#define H_N_L (radius-(radius/2))       // Hour Needle Length

#define H_N_C CYAN                     // Hour Needle Color



float cx,cy;

float radius=100;



void draw_face(float radius);

void get_time(int &h,int &m,int &s);

void second_needle(int s);

void minute_needle(int m,int s);

void hour_needle(int h,int m,int s);



int main(void)

{

/* request auto detection */

int gdriver = DETECT, gmode, errorcode;

initgraph(&gdriver,&gmode,"d:\\tc\\bgi");

/***********************************/

cx=getmaxx()/2.0; // cx is center x value.

cy=getmaxy()/2.0; // cy is center y value.

/** Now the point (cx,cy) is the center of your screen. **/



float x,y;

int hour,minute,second;

draw_face(radius);

while(!kbhit())

{

get_time(hour,minute,second);

second_needle(second);

minute_needle(minute,second);

hour_needle(hour,minute,second);

circle(cx,cy,2);

delay(100);

}





getch();

closegraph();

return 0;



}

//*************** FUNCTIONS DEFINITIONS *****************//



void draw_face(float radius)

{



int theta=0; // theta is the angle variable.

float x,y;

/** Draw Clock Border. **/

circle(cx,cy,radius+24);

circle(cx,cy,radius+23);

/** Draw GREEN material border. **/

setcolor(BROWN);    // I like a wooden frame!

/** Paint the border. **/

for(int i=0;i<9;i++)

circle(cx,cy,radius+13+i);

/** Set the color white. **/

setcolor(WHITE);

/** Draw outer-inner border. **/

circle(cx,cy,radius+12);

circle(cx,cy,radius+10);

/** Draw center dot. **/

circle(cx,cy,2);

int i=0;

/** DRAW NUMERIC POINTS **/

do{

/** Getting (x,y) for numeric points **/

x=cx+radius*cos(theta*M_PI/180);

y=cy+radius*sin(theta*M_PI/180);

/** Draw Numeric Points **/

circle(x,y,2);

/* Draw Dots around each numeric points **/

circle(x+5,y,0);

circle(x-5,y,0);

circle(x,y+5,0);

circle(x,y-5,0);

/** Increase angle by 30 degrees, which is the circular distance between each numeric points. **/

theta+=30;

/** Increase i by 1. **/

i++;



} while(i!=12); //LIMIT NUMERIC POINTS UPTO =12= Numbers.

i=0;

/** DRAW DOTS BETWEEN NUMERIC POINTS. **/

do{

putpixel(cx+radius*cos(i*M_PI/180),cy+radius*sin(i*M_PI/180),DARKGRAY);

i+=6;

}while(i!=360);



/** FACE COMPLETELY DRAWN. **/

}

//================

/** Function to get the current time. **/

void get_time(int &h,int &m,int &s)

{

time_t rawtime;

struct tm *t;

time(&rawtime);

t = gmtime(&rawtime);

h=t->tm_hour;

m=t->tm_min;

s=t->tm_sec;

}

//=================

/** Function to draw Second needle. **/

void second_needle(int s)

{



float angle=-90;

float sx,sy;

setcolor(0);

sx=cx+S_N_L*cos((angle+s*6-6)*M_PI/180);

sy=cy+S_N_L*sin((angle+s*6-6)*M_PI/180);

line(cx,cy,sx,sy);

setcolor(S_N_C);

sx=cx+S_N_L*cos((angle+s*6)*M_PI/180);

sy=cy+S_N_L*sin((angle+s*6)*M_PI/180);

line(cx,cy,sx,sy);

}

/** Function to draw Minute needle. **/

void minute_needle(int m,int s)

{

float angle=-90;

float sx,sy;

setcolor(0);

sx=cx+M_N_L*cos((angle+m*6-6)*M_PI/180);

sy=cy+M_N_L*sin((angle+m*6-6)*M_PI/180);

line(cx,cy,sx,sy);

setcolor(M_N_C);

sx=cx+M_N_L*cos((angle+m*6/*+(s*6/60)*/)*M_PI/180);

sy=cy+M_N_L*sin((angle+m*6/*+(s*6/60)*/)*M_PI/180);

line(cx,cy,sx,sy);

}

/** Function to draw Hour needle. **/

void hour_needle(int h,int m,int s)

{

float angle=-90;

float sx,sy;

setcolor(0);

sx=cx+H_N_L*cos((angle+h*30-(m*30/60))*M_PI/180);

sy=cy+H_N_L*sin((angle+h*30-(m*30/60))*M_PI/180);

line(cx,cy,sx,sy);

setcolor(H_N_C);

sx=cx+H_N_L*cos((angle+h*30+(m*30/60))*M_PI/180);

sy=cy+H_N_L*sin((angle+h*30+(m*30/60))*M_PI/180);

line(cx,cy,sx,sy);

}

/*Related Posts : WinBGI graphics
Posted by Dinesh Smokin at 1:08 PM Email ThisBlogThis!Share to TwitterShare to FacebookShare to Pinterest
Labels: WinBGI graphics
14 comments:

    AnonymousMarch 8, 2013 at 6:25 PM

    "ANALOG_CLOCK.exe has stopped working"
    what should i do now?
    Reply
    Replies
        Alex WaltersSeptember 7, 2015 at 6:43 AM

        Happens to me too
        UnknownFebruary 1, 2016 at 1:05 AM

        run under a debugger, then when stops examine the stack trace and current variable values. One possibility is some/any keyboard button was pressed, which will cause the program to exit.
        Anim XuckervergJune 2, 2016 at 7:16 PM

        The problem is the faulty libbgi.a file.
        Download the file from
        https://github.com/stahta01/windows-games/blob/master/WinBGIm/lib/libbgi.a
        Works perfectly!!
        Reply
    AMOGH JAISWALNovember 24, 2013 at 11:42 AM

    iv the samme problem.....after few runs the analog clock.exe file doesnt run
    gives message tht it has stopped working,.,,,,,,...any solutions??????
    Reply
    AnonymousMay 3, 2014 at 12:46 AM

    A little help here admin..
    Linking console executable: C:\Program Files (x86)\CodeBlocks\analogclock.exe
    c:/program files (x86)/codeblocks/bin/../lib/gcc/mingw32/4.8.1/../../../../mingw32/bin/ld.exe: cannot open output file C:\Program Files (x86)\CodeBlocks\analogclock.exe: Permission denied
    collect2.exe: error: ld returned 1 exit status
    Process terminated with status 1 (0 minutes, 2 seconds)
    1 errors, 1 warnings

    Reply
    Replies
        rkwill100February 1, 2016 at 1:08 AM

        usually need admin privileges to open files in d:\Program Files...\ suggest running code blocks as administrator or producing file elsewhere then logon as administrator to copy the executable to the target location. BTW: does the ...\CodeBlocks\ directory exist?
        Reply
    manu panduOctober 3, 2014 at 1:13 PM

    i show error
    ==============================================================
    c:\program files (x86)\codeblocks\mingw\include\graphics.h|30|fatal error: sstream: No such file or directory|
    ||=== Build failed: 1 error(s), 0 warning(s) (0 minute(s), 6 second(s)) ===|
    Reply
    Replies
        AnonymousMay 28, 2015 at 10:34 AM

        Can you resolve your error? I have the same problem and I don't know what I can do...
        MrSonelsJuly 13, 2015 at 2:45 AM

        change your file extension to *.c from *.cpp
        Reply
    MrSonelsJuly 13, 2015 at 2:43 AM

    change your *.c extension by *.cpp...
    Reply
    Ariful IslamOctober 18, 2015 at 3:43 AM

    error is in this line below:
    int left=0, int right=0, int right=INT_MAX, int bottom=INT_MAX,
    bool active=true, HWND hwnd=NULL
    Reply
    Replies
        Sebastian Andrei IordacheDecember 20, 2015 at 8:59 PM

        change int right =0 to int top=0 ;)
        rkwill100February 1, 2016 at 1:09 AM

        I'm not finding that line in the posted code. What file is the line in?
        Reply

Links to this post

Create a Link
Newer Post Older Post Home
Subscribe to: Post Comments (Atom)
Find us on Facebook
www.educabila.in/photo+slideshow group communication system miniproject withallsynpsis staff management system gamma correction using opencv modulus for school fee telecom billing in c exam registration system traffic management hostel management system project for c language 15 puzzle program in c
Categories

    Mini projects (25)
    C source code (20)
    OpenGL graphics (18)
    Windows form application in C# (14)
    Cpp source code (11)
    Modern OpenGL (10)
    GLFW graphics (6)
    C on Linux (5)
    Computer Graphics (5)
    SharpGL (3)

Blog Archive

    ►  2013 (16)

    ►  2012 (38)

    ▼  2011 (47)
        ►  December (1)
        ►  November (7)
        ►  October (6)
        ▼  September (4)
            Analog Clock source code using c++ and winBGI grap...
            How to setup winBGIm library in codeblock
            “Contacts Manager” mini project in C with source c...
            Create a Matching Game using visual studio
        ►  July (3)
        ►  June (12)
        ►  March (8)
        ►  February (6)

Popular Posts

    List of Top Ten College Mini Projects in c/c++ with full source code
    Mini project snake game in c
    Mini project student database system in c++ source code download
    C++ Project Bus Reservation System in Code::blocks
    Employee’s Management System Project in c++ with source
    Mini project "library management" in C programming
    mini project "Quiz" in C
    Mini project tic-tac-toe game source code in C
    Mini project Hang Man in C++ source code download
    Mini project supermarket billing system in c++ source code download

profile for Dinesh Smokin on Stack Exchange, a network of free, community-driven Q&A sites
Follow Me by email

StatCounter - Free Web Tracker and Counter
*/
