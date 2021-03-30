// CreateHourImage.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include "./EasyBMP.hpp"
#include <ctime>
#include <stdlib.h>
using namespace std;

EasyBMP::RGBColor r = EasyBMP::RGBColor(255, 0, 0);
EasyBMP::RGBColor g = EasyBMP::RGBColor(0, 255, 0);
EasyBMP::RGBColor w = EasyBMP::RGBColor(255, 255, 255);
EasyBMP::RGBColor c;


void number(char i, EasyBMP::Image *img, int posX, int posY, EasyBMP::RGBColor c) {
	switch (i) {
	case '1':
		img->SetPixel(posX + 2, posY, c);
		img->SetPixel(posX + 2, posY + 1, c);
		img->SetPixel(posX + 2, posY + 2, c);
		img->SetPixel(posX + 2, posY + 3, c);
		img->SetPixel(posX + 2, posY + 4, c);
		break;
	case '2':
		img->SetPixel(posX, posY, c);
		img->SetPixel(posX + 1, posY, c);
		img->SetPixel(posX + 2, posY, c);
		img->SetPixel(posX + 2, posY + 1, c);
		img->SetPixel(posX, posY + 2, c);
		img->SetPixel(posX + 1, posY + 2, c);
		img->SetPixel(posX + 2, posY + 2, c);
		img->SetPixel(posX, posY + 3, c);
		img->SetPixel(posX, posY + 4, c);
		img->SetPixel(posX + 1, posY + 4, c);
		img->SetPixel(posX + 2, posY + 4, c);
		break;
	case '3':
		img->SetPixel(posX, posY, c);
		img->SetPixel(posX + 1, posY, c);
		img->SetPixel(posX + 2, posY, c);
		img->SetPixel(posX + 2, posY + 1, c);
		img->SetPixel(posX, posY + 2, c);
		img->SetPixel(posX + 1, posY + 2, c);
		img->SetPixel(posX + 2, posY + 2, c);
		img->SetPixel(posX + 2, posY + 3, c);
		img->SetPixel(posX, posY + 4, c);
		img->SetPixel(posX + 1, posY + 4, c);
		img->SetPixel(posX + 2, posY + 4, c);
		break;
	case '4':
		img->SetPixel(posX, posY, c);
		img->SetPixel(posX, posY + 1, c);
		img->SetPixel(posX, posY + 2, c);
		img->SetPixel(posX + 1, posY + 2, c);
		img->SetPixel(posX + 2, posY, c);
		img->SetPixel(posX + 2, posY + 1, c);
		img->SetPixel(posX + 2, posY + 2, c);
		img->SetPixel(posX + 2, posY + 3, c);
		img->SetPixel(posX + 2, posY + 4, c);
		break;
	case '5':
		img->SetPixel(posX, posY, c);
		img->SetPixel(posX + 1, posY, c);
		img->SetPixel(posX + 2, posY, c);
		img->SetPixel(posX, posY + 1, c);
		img->SetPixel(posX, posY + 2, c);
		img->SetPixel(posX + 1, posY + 2, c);
		img->SetPixel(posX + 2, posY + 2, c);
		img->SetPixel(posX + 2, posY + 3, c);
		img->SetPixel(posX, posY + 4, c);
		img->SetPixel(posX + 1, posY + 4, c);
		img->SetPixel(posX + 2, posY + 4, c);
		break;
	case '6':
		img->SetPixel(posX, posY, c);
		img->SetPixel(posX + 1, posY, c);
		img->SetPixel(posX + 2, posY, c);
		img->SetPixel(posX, posY + 1, c);
		img->SetPixel(posX, posY + 2, c);
		img->SetPixel(posX + 1, posY + 2, c);
		img->SetPixel(posX + 2, posY + 2, c);
		img->SetPixel(posX + 2, posY + 3, c);
		img->SetPixel(posX, posY + 3, c);
		img->SetPixel(posX, posY + 4, c);
		img->SetPixel(posX + 1, posY + 4, c);
		img->SetPixel(posX + 2, posY + 4, c);
		break;
	case '7':
		img->SetPixel(posX, posY, c);
		img->SetPixel(posX + 1, posY, c);
		img->SetPixel(posX + 2, posY, c);
		img->SetPixel(posX + 2, posY + 1, c);
		img->SetPixel(posX + 2, posY + 2, c);
		img->SetPixel(posX + 2, posY + 3, c);
		img->SetPixel(posX + 2, posY + 4, c);
		break;
	case '8':
		img->SetPixel(posX, posY, c);
		img->SetPixel(posX + 1, posY, c);
		img->SetPixel(posX + 2, posY, c);
		img->SetPixel(posX, posY + 1, c);
		img->SetPixel(posX + 2, posY + 1, c);
		img->SetPixel(posX, posY + 2, c);
		img->SetPixel(posX + 1, posY + 2, c);
		img->SetPixel(posX + 2, posY + 2, c);
		img->SetPixel(posX + 2, posY + 3, c);
		img->SetPixel(posX, posY + 3, c);
		img->SetPixel(posX, posY + 4, c);
		img->SetPixel(posX + 1, posY + 4, c);
		img->SetPixel(posX + 2, posY + 4, c);
		break;
	case '9':
		img->SetPixel(posX, posY, c);
		img->SetPixel(posX + 1, posY, c);
		img->SetPixel(posX + 2, posY, c);
		img->SetPixel(posX, posY + 1, c);
		img->SetPixel(posX + 2, posY + 1, c);
		img->SetPixel(posX, posY + 2, c);
		img->SetPixel(posX + 1, posY + 2, c);
		img->SetPixel(posX + 2, posY + 2, c);
		img->SetPixel(posX + 2, posY + 3, c);
		img->SetPixel(posX, posY + 4, c);
		img->SetPixel(posX + 1, posY + 4, c);
		img->SetPixel(posX + 2, posY + 4, c);
		break;
	case '0':
		img->SetPixel(posX, posY, c);
		img->SetPixel(posX + 1, posY, c);
		img->SetPixel(posX + 2, posY, c);
		img->SetPixel(posX, posY + 1, c);
		img->SetPixel(posX + 2, posY + 1, c);
		img->SetPixel(posX, posY + 2, c);
		img->SetPixel(posX + 2, posY + 2, c);
		img->SetPixel(posX + 2, posY + 3, c);
		img->SetPixel(posX, posY + 3, c);
		img->SetPixel(posX, posY + 4, c);
		img->SetPixel(posX + 1, posY + 4, c);
		img->SetPixel(posX + 2, posY + 4, c);
	}
}


void letter(char l, EasyBMP::Image *img, int posX, int posY, EasyBMP::RGBColor c) {
	switch (l) {
	case 'U':
		img->SetPixel(posX, posY, c);
		img->SetPixel(posX, posY + 1, c);
		img->SetPixel(posX, posY + 2, c);
		img->SetPixel(posX, posY + 3, c);
		img->SetPixel(posX, posY + 4, c);
		img->SetPixel(posX + 1, posY + 4, c);
		img->SetPixel(posX + 2, posY, c);
		img->SetPixel(posX + 2, posY + 1, c);
		img->SetPixel(posX + 2, posY + 2, c);
		img->SetPixel(posX + 2, posY + 3, c);
		img->SetPixel(posX + 2, posY + 4, c);
		break;
	case 'T':
		img->SetPixel(posX, posY, c);
		img->SetPixel(posX + 1, posY, c);
		img->SetPixel(posX + 2, posY, c);
		img->SetPixel(posX + 1, posY + 1, c);
		img->SetPixel(posX + 1, posY + 2, c);
		img->SetPixel(posX + 1, posY + 3, c);
		img->SetPixel(posX + 1, posY + 4, c);
		break;
	case 'C':
		img->SetPixel(posX, posY, c);
		img->SetPixel(posX + 1, posY, c);
		img->SetPixel(posX, posY + 1, c);
		img->SetPixel(posX, posY + 2, c);
		img->SetPixel(posX, posY + 3, c);
		img->SetPixel(posX, posY + 4, c);
		img->SetPixel(posX + 1, posY + 4, c);
		break;
	case 'E':
		img->SetPixel(posX, posY, c);
		img->SetPixel(posX + 1, posY, c);
		img->SetPixel(posX, posY + 1, c);
		img->SetPixel(posX, posY + 2, c);
		img->SetPixel(posX + 1, posY + 2, c);
		img->SetPixel(posX, posY + 3, c);
		img->SetPixel(posX, posY + 4, c);
		img->SetPixel(posX + 1, posY + 4, c);
		break;
	case 'S':
		img->SetPixel(posX, posY, c);
		img->SetPixel(posX + 1, posY, c);
		img->SetPixel(posX, posY + 1, c);
		img->SetPixel(posX, posY + 2, c);
		img->SetPixel(posX + 1, posY + 2, c);
		img->SetPixel(posX + 1, posY + 3, c);
		img->SetPixel(posX, posY + 4, c);
		img->SetPixel(posX + 1, posY + 4, c);
		break;
	case 'P':
		img->SetPixel(posX, posY, c);
		img->SetPixel(posX + 1, posY, c);
		img->SetPixel(posX + 2, posY, c);
		img->SetPixel(posX, posY + 1, c);
		img->SetPixel(posX + 2, posY + 1, c);
		img->SetPixel(posX, posY + 2, c);
		img->SetPixel(posX + 1, posY + 2, c);
		img->SetPixel(posX + 2, posY + 2, c);
		img->SetPixel(posX, posY + 3, c);
		img->SetPixel(posX, posY + 4, c);
		break;
	}
}


void setup(EasyBMP::Image *img) {
	
	//UTC
	letter('U', img, 8, 0, w);
	letter('T', img, 11, 0, w);
	letter('C', img, 14, 0, w);
	//EST
	letter('E', img, 8, 5, r);
	letter('S', img, 11, 5, r);
	letter('T', img, 13, 5, r);
	//PST
	letter('P', img, 8, 10, g);
	letter('S', img, 11, 10, g);
	letter('T', img, 13, 10, g);


}

void test(EasyBMP::Image *img) {
	number(1, img, 0, 0, w);
	number(2, img, 4, 0, w);
	number(3, img, 8, 0, w);
	number(4, img, 12, 0, w);
	number(5, img, 0, 6, w);
	number(6, img, 4, 6, w);
	number(7, img, 8, 6, w);
	number(8, img, 12, 6, w);
	number(9, img, 4, 11, r);
	number(0, img, 8, 11, r);
}


int main()
{

	EasyBMP::Image img(16, 16, "output.bmp", EasyBMP::RGBColor(0,0,0));
	setup(&img);
	//test(&img);
	
	
	//get UTC hours
	time_t     now = time(0);
	struct tm  tstruct;
	char       buf_utc[80];
	char	   buf_est[2];
	char	   buf_pst[2];
	gmtime_r(&now, &tstruct);
	strftime(buf_utc, sizeof(buf_utc), "%H", &tstruct);
	int curTimeUTC = (buf_utc[0] - '0') * 10 + (buf_utc[1] - '0');

	//write UTC to image
	number(buf_utc[0], &img, 0, 0, w);
	number(buf_utc[1], &img, 4, 0, w);

	//convert to EST
	int curTimeEST = curTimeUTC - 5;
	//if it's summertime, uncomment this line. Fuck DST.
	curTimeEST += 1;

	//check for day loop
	if (curTimeEST < 0) {
		curTimeEST += 24;
	}

	//write in char array
	if (curTimeEST < 9) buf_est[0] = '0';
	else if (curTimeEST < 19) buf_est[0] = '1';
	else buf_est[0] = '2';
	buf_est[1] = '0' + (curTimeEST % 10);

	//write EST to image
	number(buf_est[0], &img, 0, 5, r);
	number(buf_est[1], &img, 4, 5, r);



	//convert to PST
	int curTimePST = curTimeUTC - 8;
	//if it's summertime, uncomment this line. Fuck DST.
	curTimePST += 1;

	//check for day loop
	if (curTimePST < 0) {
		curTimePST += 24;
	}
	
	//write in char array
	if (curTimePST < 9) buf_pst[0] = '0';
	else if (curTimePST < 19) buf_pst[0] = '1';
	else buf_pst[0] = '2';
	buf_pst[1] = '0' + (curTimePST % 10);

	//write PST to image
	number(buf_pst[0], &img, 0, 10, g);
	number(buf_pst[1], &img, 4, 10, g);




	img.Write();
	return 0;
}

