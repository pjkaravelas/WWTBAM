#include <iostream>
#include <stdio.h> 
#include <cstdlib>
#include <string>
#include <conio.h>
#include <windows.h>
//sss

/******************************************
	  Here, we call the "ShowWindow" function, and pass it
	  the active window (Our program), and a constant meaning
	  "Maximize", as it is descriptively named.
	*******************************************/
//ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);

int id{};
int val1{};
int val2{};
int val3{};

int intro();
int d100();
int d200(int, int, int);
int d300(int, int, int);
int d500(int, int, int);
int d1k(int, int, int);
int d2k(int, int, int);
int d4k(int, int, int);
int d8k(int, int, int);
int d16k(int, int, int);
int d32k(int, int, int);
int d64k(int, int, int);
int d125k(int, int, int);
int d250k(int, int, int);
int d500k(int, int, int);
int d1m(int, int, int);
int outro();

void swtch() {
	
	switch (id){

	case 111:
		val1 = 1;
		val2 = 1;
		val3 = 1;	
		break;

	case 110:
		val1 = 1;
		val2 = 1;
		val3 = 0;
		break;

	case 101:
		val1 = 1;
		val2 = 0;
		val3 = 1;
		break;

	case 100:
		val1 = 1;
		val2 = 0;
		val3 = 0;
		break;

	case 011:
		val1 = 0;
		val2 = 1;
		val3 = 1;
		break;

	case 010:
		val1 = 0;
		val2 = 1;
		val3 = 0;
		break;

	case 001:
		val1 = 0;
		val2 = 0;
		val3 = 1;
		break;

	case 000:
		val1 = 0;
		val2 = 0;
		val3 = 0;
		break;
	}
	
}

int main() {

	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);

	
	id = intro();
	
	system("CLS");

	id = d100();
	if (id == 9) {
		goto end;
	}
	else {
		swtch();
	}

	system("CLS");

	id = d200(val1,val2,val3);
	if (id == 9) {
		goto end;
	}
	else {
		swtch();
	}
	
	system("CLS");

	id = d300(val1, val2, val3);
	if (id == 9) {
		goto end;
	}
	else {
		swtch();
	}

	system("CLS");

	id = d500(val1, val2, val3);
	if (id == 9) {
		goto end;
	}
	else {
		swtch();
	}

	system("CLS");

	id = d1k(val1, val2, val3);
	if (id == 9) {
		goto end;
	}
	else {
		swtch();
	}

	system("CLS");

	id = d2k(val1, val2, val3);
	if (id == 9) {
		goto end;
	}
	else {
		swtch();
	}

	system("CLS");

	id = d4k(val1, val2, val3);
	if (id == 9) {
		goto end;
	}
	else {
		swtch();
	}

	system("CLS");

	id = d8k(val1, val2, val3);
	if (id == 9) {
		goto end;
	}
	else {
		swtch();
	}

	system("CLS");

	id = d16k(val1, val2, val3);
	if (id == 9) {
		goto end;
	}
	else {
		swtch();
	}

	system("CLS");

	id = d32k(val1, val2, val3);
	if (id == 9) {
		goto end;
	}
	else {
		swtch();
	}

	system("CLS");

	id = d64k(val1, val2, val3);
	if (id == 9) {
		goto end;
	}
	else {
		swtch();
	}

	system("CLS");

	id = d125k(val1, val2, val3);
	if (id == 9) {
		goto end;
	}
	else {
		swtch();
	}

	system("CLS");

	id = d250k(val1, val2, val3);
	if (id == 9) {
		goto end;
	}
	else {
		swtch();
	}

	system("CLS");

	id = d500k(val1, val2, val3);
	if (id == 9) {
		goto end;
	}
	else {
		swtch();
	}

	system("CLS");

	id = d1m(val1, val2, val3);
	if (id == 9) {
		goto end;
	}
	else {
		swtch();
	}

	system("CLS");
	
end:

	outro();

	return 0;

}
