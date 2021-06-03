#define _1
#ifdef _1//ê}å`ï\é¶introduction
#include"libone.h"
void gmain() {
	window(800, 450);
		for (int j=0; j < 9; j++) {
			for (int i = 0; i < 16; i++){
				if ((j + i) % 2 == 0)fill(0);
				else fill(0,100,0);
	
			rect(50 * i, 50 * j, 50, 50);
		}
	}
	
	while(notQuit){}
}
#endif

#ifdef _2//window&clear

#include"libone.h"
void gmain() {
	window(450, 450);
	clear(0);
	while (notQuit) {}
}
#endif

#ifdef _3//point

#include"libone.h"
void gmain() {
	window(1000, 1000);
	clear(200);
	strokeWeight(30);
	stroke(255, 0, 0);
	point(500, 500);
	stroke(255, 255, 0);
	point(700, 500);
	stroke(0, 0, 255);
	point(900, 500);
	pause();
}
#endif

#ifdef _4//line

#include"libone.h"
void gmain() {
	window(1000, 1000);
	clear(255);
	strokeWeight(100);
	stroke(0, 255, 0);
	float sx = 100;
	float sy = 500;
	float ex = 900;
	float ey = 600;
	line(sx, sy, ex, ey);
	line(500, 100, 500, 900);
	pause();
}
#endif

#ifdef _5//circle
#include"libone.h"
void gmain() {
	window(1000,1000);
	clear(200);
	float px = 500;
	float py = 500;
	float radius = 200;
	strokeWeight(20);
	stroke(0,255, 0);
	fill(255, 0, 0);
	circle(px,py,radius*2);

	pause();
}
#endif
#ifdef _6//rect
#include"libone.h"
void gmain() {
	window(1000, 1000);
	clear(200);
	rectMode(CENTER);
	angleMode(DEGREES);
	float px = 300;
	float py = 200;
	float w = 200;
	float h = 300;
	float angle = 45;
	strokeWeight(20);
	stroke(128);
	fill(255,255,0);
	rect(px,py,w,h,angle);

	pause();

}
#endif
