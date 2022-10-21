
#include<stdio.h>
#include<stdlib.h>
#include<process.h>
#include<iostream.h>
#include<dos.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<sys\timeb.h>
#include<time.h>
#include "gpi7seg.h"
//#include "gbi.h"


struct  time t;
int detik,menit,jam;
int a;
int x;

main()
{
int gdriver=IBM8514LO,gmode=1;
   initgraph(&gdriver, &gmode,"c:\\turboc3\\bgi\\");
  // initgraph(&gdriver, &gmode,"d:\\turboc3\\bgi\\");


setcolor(2);
while(!kbhit())
{
//setbkcolor(0);
delay(1000);
setgraphmode(getgraphmode());
setbkcolor(0);


////////garis putih/////
line(426,155,426,325);
line(425,155,425,325);
line(424,155,424,325);
///////////////////
line(218,155,218,325);
line(217,155,217,325);
line(216,155,216,325);
//////////////////////////////
/*
///////sinar salib //////////////
setcolor(14);
//circle(275,68,4);
line(200,75,430,55);     //1
line(190,95,410,25);      //2
line(220,105,355,15);     //3
line(269,15,280,130);    //4
line(240,15,320,135);     //5
line(230,30,350,130);    //6
//////////////////////////////
*/
//setcolor(1);
//line(200,75,250,55);
////////////12=MERAH TERANG//////////////////////
setcolor(12);
//line(240,115,290,15);  // hor all
line(240,115,260,75);  // hor kanan
line(269,57,290,15);    // kiri

//line(260,120,310,20);  // hor all
line(260,120,281,79);  // hor kanan //
line(289,62,310,20);  // hor kiri //
line(240,115,260,120);  //hor
line(290,15,310,20);    //hor

//line(217,43,437,103);    //vert
line(217,43,269,57);
line(289,62,437,103);

//line(210,60,430,120);    //vert
line(210,60,260,74);
line(280,79,430,120);

line(217,43,210,60);
line(437,103,430,120);

//line(265,80,270,80);  //test line
setfillstyle(1,12);
floodfill(268,80,12);
/////////////////////////////////////////


setcolor(9);   //9=biru
//////bayangan////////////////
/////bayangan hor kanan///
//line(265,130,313,35);   //hor a
line(240,115,245,122);  //hor
line(245,122,263,127);   //hor
line(263,127,284,86);    //hor
line(284,86,435,130);
line(435,130,441,114);
line(441,114,439,104);
line(439,104,431,122);
line(431,122,282,80);
line(282,80,261,120);
line(261,120,240,115);

////////bayangan vert kaki
//line(245,120,250,120);
setfillstyle(1,9);
floodfill(250,120,9);
///////////////////////

//////////bayangan hor kiri///
line(295,63,311,32);     //hor kiri
line(310,20,311,32);    //
line(310,20,289,62);
line(289,62,295,63);
///////////////
//line(305,38,307,38);
setfillstyle(1,9);
floodfill(305,38,9);
//////////////////////////////

///////bayangan vertikal kepala///
line(210,61,260,75);    //vert kepala
line(210,61,215,68);    // vert kepala
line(215,68,256,80);   // vert kepala
line(256,80,260,75);  // vert kepala
///////////////////////////
//line(225,70,230,70);   //test line
setfillstyle(1,9);
floodfill(230,70,9);
///////////////////////////

setcolor(15);
line(426,155,426,325);
line(425,155,425,325);
line(424,155,424,325);
///////////////////
line(218,155,218,325);
line(217,155,217,325);
line(216,155,216,325);

settextstyle(TRIPLEX_FONT, HORIZ_DIR, 4);
outtextxy(100,340, "GEREJA PENGKABARAN INJIL");
outtextxy(215,380, " JALAN SUCI ");
outtextxy(125,420, "KOTA SORONG,IRIANJAYA ");
settextstyle(TRIPLEX_FONT, HORIZ_DIR,1);
outtextxy(450,110, "Clock");

gettime(&t);
detik=t.ti_sec;
menit=t.ti_min;
jam=t.ti_hour;

//while(!kbhit())
{
//a;
///////////////////////////////
setcolor(1);
line(200,75,230,73); //1
line(192,95,241,78); //2
line(218,107,255,80); //3
line(280,125,277,100);   //4
line(320,133,290,90);  //5
line(350,132,310,95);  //6
line(430,54,309,67);       //7
line(410,25,300,60);  //8
line(355,15,305,47);  //9
line(268,15,271,50);    //10
line(240,13,265,55);    //11
line(230,30,260,54);    //12
delay(100);
setcolor(2);
line(200,75,230,73); //1
line(192,95,241,78); //2
line(218,107,255,80); //3
line(280,125,277,100);   //4
line(320,133,290,90);  //5
line(350,132,310,95);  //6
line(430,54,309,67);       //7
line(410,25,300,60);  //8
line(355,15,305,47);  //9
line(268,15,271,50);    //10
line(240,13,265,55);    //11
line(230,30,260,54);    //12
delay(100);
setcolor(3);
line(200,75,230,73); //1
line(192,95,241,78); //2
line(218,107,255,80); //3
line(280,125,277,100);   //4
line(320,133,290,90);  //5
line(350,132,310,95);  //6
line(430,54,309,67);       //7
line(410,25,300,60);  //8
line(355,15,305,47);  //9
line(268,15,271,50);    //10
line(240,13,265,55);    //11
line(230,30,260,54);    //12
delay(100);
setcolor(4);
line(200,75,230,73); //1
line(192,95,241,78); //2
line(218,107,255,80); //3
line(280,125,277,100);   //4
line(320,133,290,90);  //5
line(350,132,310,95);  //6
line(430,54,309,67);       //7
line(410,25,300,60);  //8
line(355,15,305,47);  //9
line(268,15,271,50);    //10
line(240,13,265,55);    //11
line(230,30,260,54);    //12
setcolor(14);
line(200,75,230,73); //1
line(192,95,241,78); //2
line(218,107,255,80); //3
line(280,125,277,100);   //4
line(320,133,290,90);  //5
line(350,132,310,95);  //6
line(430,54,309,67);       //7
line(410,25,300,60);  //8
line(355,15,305,47);  //9
line(268,15,271,50);    //10
line(240,13,265,55);    //11
line(230,30,260,54);    //12

}







//if(jam== 0 && menit==0 && detik==0)
if(jam==24 && menit==0 && detik==0)
{
  setcolor(0);
  line(426,155,426,325);
  line(425,155,425,325);
  line(424,155,424,325);
///////////////////
  line(218,155,218,325);
  line(217,155,217,325);
  line(216,155,216,325);

  setcolor(15);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR, 7);
  outtextxy(45,200, "HAPPY NEW YEAR");
//  gbi();
//  a;
  getch();

  setcolor(0);
  setfillstyle(1,0);
  bar3d(0,150,639,325,1,1);

  setbkcolor(0);
  delay(1000);

 // clrscr();
  // delay(1000);
  //break;

}


if(jam==24)
{
  gpi7segmen_2(-520,0);
  gpi7segmen_3(-420,0);
}


if(jam==0)
{
 gpi7segmen_2(-520,0);
 gpi7segmen_3(-420,0);
}


if(jam==1)
{
  gpi7segmen_2(-520,0);
  gpi7segmen_2(-420,0);
}


if(jam==2)
{
  gpi7segmen_2(-520,0);
  gpi7segmen_1(-420,0);
}

if(jam==3)
{
  gpi7segmen_2(-520,0);
  gpi7segmen_0(-420,0);
}


if(jam==4)
{
  gpi7segmen_1(-520,0);
  gpi7segmen_9(-420,0);
}

if(jam==5)
{
  gpi7segmen_1(-520,0);
  gpi7segmen_8(-420,0);
}

if(jam==6)
{
  gpi7segmen_1(-520,0);
  gpi7segmen_7(-420,0);
}

if(jam==7)
{
  gpi7segmen_1(-520,0);
  gpi7segmen_6(-420,0);
}

if(jam==8)
{
  gpi7segmen_1(-520,0);
  gpi7segmen_5(-420,0);
}

if(jam==9)
{
  gpi7segmen_1(-520,0);
  gpi7segmen_4(-420,0);
}

if(jam==10)
{
  gpi7segmen_1(-520,0);
  gpi7segmen_3(-420,0);
}

if(jam==11)
{
  gpi7segmen_1(-520,0);
  gpi7segmen_2(-420,0);
}

if(jam==12)
{
  gpi7segmen_1(-520,0);
  gpi7segmen_1(-420,0);
}

if(jam==13)
{
  gpi7segmen_1(-520,0);
  gpi7segmen_0(-420,0);
}

if(jam==14)
{
  gpi7segmen_0(-520,0);
  gpi7segmen_9(-420,0);
}

if(jam==15)
{
  gpi7segmen_0(-520,0);
  gpi7segmen_8(-420,0);
}

if(jam==16)
{
  gpi7segmen_0(-520,0);
  gpi7segmen_7(-420,0);
}

if(jam==17)
{
  gpi7segmen_0(-520,0);
  gpi7segmen_6(-420,0);
}

if(jam==18)
{
  gpi7segmen_0(-520,0);
  gpi7segmen_5(-420,0);
}

if(jam==19)
{
  gpi7segmen_0(-520,0);
  gpi7segmen_4(-420,0);
}

if(jam==20)
{
  gpi7segmen_0(-520,0);
  gpi7segmen_3(-420,0);
}

if(jam==21)         //angka nol
{
 //gbi7segdetik_1(0,0);
// gbi7segdetik_2(-100,0);
// gbi7segdetik_0(-210,0);
// gbi7segdetik_1(-210,-156);
// gbi7segdetik_2(-310,0);
  gpi7segmen_0(-520,0);
  gpi7segmen_2(-420,0);

// gbi7segdetik_5(-0,-156);
// gbi7segdetik_6(0,-156);
// gbi7segdetik_7(-100,156);
// gbi7segdetik_9(0,156);
}

if(jam==22)
{
  gpi7segmen_0(-520,0);
  gpi7segmen_1(-420,0);
}

if(jam==23)
{
  gpi7segmen_0(-520,0);
  gpi7segmen_0(-420,0);
}


//////////////////////////////////////
//  MENIT
/////////////////////////////////////
if(menit==0)
{
 gpi7segmen_0(-310,0);
 gpi7segmen_0(-210,0);
 }
if(menit==1)
{
 gpi7segmen_5(-310,0);
 gpi7segmen_8(-210,0);
}
if(menit==2)
{
 gpi7segmen_5(-310,0);
 gpi7segmen_7(-210,0);
}
if(menit==3)
{
 gpi7segmen_5(-310,0);
 gpi7segmen_6(-210,0);
}
if(menit==4)
{
 gpi7segmen_5(-310,0);
 gpi7segmen_5(-210,0);
}
if(menit==5)
{
 gpi7segmen_5(-310,0);
 gpi7segmen_4(-210,0);
}
if(menit==6)
{
 gpi7segmen_5(-310,0);
 gpi7segmen_3(-210,0);
}
if(menit==7)
{
 gpi7segmen_5(-310,0);
 gpi7segmen_2(-210,0);
}
if(menit==8)
{
 gpi7segmen_5(-310,0);
 gpi7segmen_1(-210,0);
}
if(menit==9)
{
 gpi7segmen_5(-310,0);
 gpi7segmen_0(-210,0);
}
if(menit==10)
{
 gpi7segmen_4(-310,0);
 gpi7segmen_9(-210,0);
}
if(menit==11)
{
 gpi7segmen_4(-310,0);
 gpi7segmen_8(-210,0);
}
if(menit==12)
{
 gpi7segmen_4(-310,0);
 gpi7segmen_7(-210,0);
}
if(menit==13)
{
 gpi7segmen_4(-310,0);
 gpi7segmen_6(-210,0);
}
if(menit==14)
{
 gpi7segmen_4(-310,0);
 gpi7segmen_5(-210,0);
}
if(menit==15)
{
 gpi7segmen_4(-310,0);
 gpi7segmen_4(-210,0);
}
if(menit==16)
{
 gpi7segmen_4(-310,0);
 gpi7segmen_3(-210,0);
}
if(menit==17)
{
 gpi7segmen_4(-310,0);
 gpi7segmen_2(-210,0);
}
if(menit==18)
{
 gpi7segmen_4(-310,0);
 gpi7segmen_1(-210,0);
}
if(menit==19)
{
 gpi7segmen_4(-310,0);
 gpi7segmen_0(-210,0);
}
if(menit==20)
{
 gpi7segmen_3(-310,0);
 gpi7segmen_9(-210,0);
}
if(menit==21)
{
 gpi7segmen_3(-310,0);
 gpi7segmen_8(-210,0);
}
if(menit==22)
{
 gpi7segmen_3(-310,0);
 gpi7segmen_7(-210,0);
}
if(menit==23)
{
 gpi7segmen_3(-310,0);
 gpi7segmen_6(-210,0);
}
if(menit==24)
{
 gpi7segmen_3(-310,0);
 gpi7segmen_5(-210,0);
}
if(menit==25)
{
 gpi7segmen_3(-310,0);
 gpi7segmen_4(-210,0);
}
if(menit==26)
{
 gpi7segmen_3(-310,0);
 gpi7segmen_3(-210,0);
}
if(menit==27)
{
 gpi7segmen_3(-310,0);
 gpi7segmen_2(-210,0);
}
if(menit==28)
{
 gpi7segmen_3(-310,0);
 gpi7segmen_1(-210,0);
}

if(menit==29)
{
 gpi7segmen_3(-310,0);
 gpi7segmen_0(-210,0);
}

if(menit==30)
{
 gpi7segmen_2(-310,0);
 gpi7segmen_9(-210,0);
}

if(menit==31)
{
 gpi7segmen_2(-310,0);
 gpi7segmen_8(-210,0);
}

if(menit==32)
{
 gpi7segmen_2(-310,0);
 gpi7segmen_7(-210,0);
}
if(menit==33)
{
 gpi7segmen_2(-310,0);
 gpi7segmen_6(-210,0);
}

if(menit==34)
{
 gpi7segmen_2(-310,0);
 gpi7segmen_5(-210,0);
}

if(menit==35)
{
 gpi7segmen_2(-310,0);
 gpi7segmen_4(-210,0);
}

if(menit==36)
{
 gpi7segmen_2(-310,0);
 gpi7segmen_3(-210,0);
}
if(menit==37)
{
 gpi7segmen_2(-310,0);
 gpi7segmen_2(-210,0);
}

if(menit==38)
{
 gpi7segmen_2(-310,0);
 gpi7segmen_1(-210,0);
}

if(menit==39)
{
 gpi7segmen_2(-310,0);
 gpi7segmen_0(-210,0);
}
if(menit==40)
{
 gpi7segmen_1(-310,0);
 gpi7segmen_9(-210,0);
}
if(menit==41)
{
 gpi7segmen_1(-310,0);
 gpi7segmen_8(-210,0);
}

if(menit==42)
{
 gpi7segmen_1(-310,0);
 gpi7segmen_7(-210,0);
}

if(menit==43)
{
 gpi7segmen_1(-310,0);
 gpi7segmen_6(-210,0);
}

if(menit==44)
{
 gpi7segmen_1(-310,0);
 gpi7segmen_5(-210,0);
}

if(menit==45)
{
 gpi7segmen_1(-310,0);
 gpi7segmen_4(-210,0);
}

if(menit==46)
{
 gpi7segmen_1(-310,0);
 gpi7segmen_3(-210,0);
}

if(menit==47)
{
 gpi7segmen_1(-310,0);
 gpi7segmen_2(-210,0);
}

if(menit==48)
{
 gpi7segmen_1(-310,0);
 gpi7segmen_1(-210,0);
}

if(menit==49)
{
 gpi7segmen_1(-310,0);
 gpi7segmen_0(-210,0);
}

if(menit==50)
{
 gpi7segmen_0(-310,0);
 gpi7segmen_9(-210,0);
}

if(menit==51)
{
 gpi7segmen_0(-310,0);
 gpi7segmen_8(-210,0);
}

if(menit==52)
{
 gpi7segmen_0(-310,0);
 gpi7segmen_7(-210,0);
}

if(menit==53)
{
 gpi7segmen_0(-310,0);
 gpi7segmen_6(-210,0);
}

if(menit==54)
{
 gpi7segmen_0(-310,0);
 gpi7segmen_5(-210,0);
}

if(menit==55)
{
 gpi7segmen_0(-310,0);
 gpi7segmen_4(-210,0);
}

if(menit==56)
{
 gpi7segmen_0(-310,0);
 gpi7segmen_3(-210,0);
}

if(menit==57)
{
 gpi7segmen_0(-310,0);
 gpi7segmen_2(-210,0);
}

if(menit==58)
{
 gpi7segmen_0(-310,0);
 gpi7segmen_1(-210,0);
}

if(menit==59)
{
 gpi7segmen_0(-310,0);
 gpi7segmen_0(-210,0);
}

///////////////////////////////////
//      DETIK
////////////////////
if(detik==0)
{
 gpi7segmen_0(-100,0);
 gpi7segmen_0(-0,0);
}
if(detik==1)
{
 gpi7segmen_5(-100,0);
 gpi7segmen_9(-0,0);
}
if(detik==2)
{
 gpi7segmen_5(-100,0);
 gpi7segmen_8(-0,0);
}
if(detik==3)
{
 gpi7segmen_5(-100,0);
 gpi7segmen_7(-0,0);
}
if(detik==4)
{
 gpi7segmen_5(-100,0);
 gpi7segmen_6(-0,0);
}
if(detik==5)
{
 gpi7segmen_5(-100,0);
 gpi7segmen_5(-0,0);
}
if(detik==6)
{
 gpi7segmen_5(-100,0);
 gpi7segmen_4(-0,0);
}
if(detik==7)
{
 gpi7segmen_5(-100,0);
 gpi7segmen_8(-0,0);
}
if(detik==8)
{
 gpi7segmen_5(-100,0);
 gpi7segmen_2(-0,0);
}
if(detik==9)
{
 gpi7segmen_5(-100,0);
 gpi7segmen_1(-0,0);
}

if(detik==10)
{
 gpi7segmen_5(-100,0);
 gpi7segmen_0(-0,0);
}
if(detik==11)
{
 gpi7segmen_4(-100,0);
 gpi7segmen_9(-0,0);
}
if(detik==12)
{
 gpi7segmen_4(-100,0);
 gpi7segmen_8(-0,0);
}
if(detik==13)
{
 gpi7segmen_4(-100,0);
 gpi7segmen_7(0,0);
}
if(detik==14)
{
 gpi7segmen_4(-100,0);
 gpi7segmen_6(0,0);
}
if(detik==15)
{
 gpi7segmen_4(-100,0);
 gpi7segmen_5(0,0);
}
if(detik==16)
{
 gpi7segmen_4(-100,0);
 gpi7segmen_4(0,0);
}
if(detik==17)
{
 gpi7segmen_4(-100,0);
 gpi7segmen_3(0,0);
}
if(detik==18)
{
 gpi7segmen_4(-100,0);
 gpi7segmen_2(0,0);
}
if(detik==19)
{
 gpi7segmen_4(-100,0);
 gpi7segmen_1(0,0);
}
if(detik==20)
{
 gpi7segmen_4(-100,0);
 gpi7segmen_0(0,0);
}
if(detik==21)
{
 gpi7segmen_3(-100,0);
 gpi7segmen_9(0,0);
}
if(detik==22)
{
 gpi7segmen_3(-100,0);
 gpi7segmen_8(0,0);
}
if(detik==23)
{
 gpi7segmen_3(-100,0);
 gpi7segmen_7(0,0);
}
if(detik==24)
{
 gpi7segmen_3(-100,0);
 gpi7segmen_6(0,0);
}
if(detik==25)
{
 gpi7segmen_3(-100,0);
 gpi7segmen_5(0,0);
}
if(detik==26)
{
 gpi7segmen_3(-100,0);
 gpi7segmen_4(0,0);
}
if(detik==27)
{
 gpi7segmen_3(-100,0);
 gpi7segmen_3(0,0);
}
if(detik==28)
{
 gpi7segmen_3(-100,0);
 gpi7segmen_2(0,0);
}
if(detik==29)
{
 gpi7segmen_3(-100,0);
 gpi7segmen_1(0,0);
}
if(detik==30)
{
 gpi7segmen_3(-100,0);
 gpi7segmen_0(0,0);
}
if(detik==31)
{
 gpi7segmen_2(-100,0);
 gpi7segmen_9(0,0);
}
if(detik==32)
{
 gpi7segmen_2(-100,0);
 gpi7segmen_8(0,0);
}
if(detik==33)
{
 gpi7segmen_2(-100,0);
 gpi7segmen_7(0,0);
}
if(detik==34)
{
 gpi7segmen_2(-100,0);
 gpi7segmen_6(0,0);
}
if(detik==35)
{
 gpi7segmen_2(-100,0);
 gpi7segmen_5(0,0);
}
if(detik==36)
{
 gpi7segmen_2(-100,0);
 gpi7segmen_4(0,0);
}
if(detik==37)
{
 gpi7segmen_2(-100,0);
 gpi7segmen_3(0,0);
}
if(detik==38)
{
 gpi7segmen_2(-100,0);
 gpi7segmen_2(0,0);
}
if(detik==39)
{
 gpi7segmen_2(-100,0);
 gpi7segmen_1(0,0);
}
if(detik==40)
{
 gpi7segmen_2(-100,0);
 gpi7segmen_0(0,0);
}
if(detik==41)
{
 gpi7segmen_1(-100,0);
 gpi7segmen_9(0,0);
}
if(detik==42)
{
 gpi7segmen_1(-100,0);
 gpi7segmen_8(0,0);
}
if(detik==43)
{
 gpi7segmen_1(-100,0);
 gpi7segmen_7(0,0);
}
if(detik==44)
{
 gpi7segmen_1(-100,0);
 gpi7segmen_6(0,0);
}
if(detik==45)
{
 gpi7segmen_1(-100,0);
 gpi7segmen_5(0,0);
}
if(detik==46)
{
 gpi7segmen_1(-100,0);
 gpi7segmen_4(0,0);
}
if(detik==47)
{
 gpi7segmen_1(-100,0);
 gpi7segmen_3(0,0);
}
if(detik==48)
{
 gpi7segmen_1(-100,0);
 gpi7segmen_2(0,0);
}
if(detik==49)
{
 gpi7segmen_1(-100,0);
 gpi7segmen_1(0,0);
}
if(detik==50)
{
 gpi7segmen_1(-100,0);
 gpi7segmen_0(0,0);
}
if(detik==51)
{
 gpi7segmen_0(-100,0);
 gpi7segmen_9(0,0);
}
if(detik==52)
{
 gpi7segmen_0(-100,0);
 gpi7segmen_8(0,0);
}
if(detik==53)
{
 gpi7segmen_0(-100,0);
 gpi7segmen_7(0,0);
}
if(detik==54)
{
 gpi7segmen_0(-100,0);
 gpi7segmen_6(0,0);
}
if(detik==55)
{
 gpi7segmen_0(-100,0);
 gpi7segmen_5(0,0);
}
if(detik==56)
{
 gpi7segmen_0(-100,0);
 gpi7segmen_4(0,0);
}
if(detik==57)
{
 gpi7segmen_0(-100,0);
 gpi7segmen_3(0,0);
}
if(detik==58)
{
 gpi7segmen_0(-100,0);
 gpi7segmen_2(0,0);
}
if(detik==59)
{
 gpi7segmen_0(-100,0);
 gpi7segmen_1(0,0);
}
//if(detik==60)
//{
// gbi7segmen_0(-100,0);
// gbi7segmen_0(0,0);
//}
}
getch();
return 1;
//getch();
}
//closegraph();
//getch();
  //  return 1;
//getch();
//
//}