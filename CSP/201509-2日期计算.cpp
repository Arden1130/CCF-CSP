#include<iostream>
using namespace std;
int main() {
	int y, d, month, day;
	cin >> y >> d;
	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) { //闰年
		if (d <= 31) {
			month = 1;
			day = d;
		}
		if (d > 31 && d <= 60) {
			month = 2;
			day = d % 31;
		}
		if (d > 60 && d <= 91) {
			month = 3;
			day = d % 60;
		}
		if (d > 91 && d <= 121) {
			month = 4;
			day = d % 91;
		}
		if (d > 121 && d <= 152) {
			month = 5;
			day = d % 121;
		}
		if (d > 152 && d <= 182) {
			month = 6;
			day = d % 152;
		}
		if (d > 182 && d <= 213) {
			month = 7;
			day = d % 182;
		}
		if (d > 213 && d <= 244) {
			month = 8;
			day = d % 213;
		}
		if (d > 244 && d <= 274) {
			month = 9;
			day = d % 244;
		}
		if (d > 274 && d <= 305) {
			month = 10;
			day = d % 274;
		}
		if (d > 305 && d <= 335) {
			month = 11;
			day = d % 305;
		}
		if (d > 335 && d <= 366) {
			month = 12;
			day = d % 335;
		}
	}
	else { //不是闰年
		if (d <= 31) {
			month = 1;
			day = d;
		}
		if (d > 31 && d <= 59) {
			month = 2;
			day = d % 31;
		}
		if (d > 59 && d <= 90) {
			month = 3;
			day = d % 59;
		}
		if (d > 90 && d <= 120) {
			month = 4;
			day = d % 90;
		}
		if (d > 120 && d <= 151) {
			month = 5;
			day = d % 120;
		}
		if (d > 151 && d <= 181) {
			month = 6;
			day = d % 151;
		}
		if (d > 181 && d <= 212) {
			month = 7;
			day = d % 181;
		}
		if (d > 212 && d <= 243) {
			month = 8;
			day = d % 212;
		}
		if (d > 243 && d <= 273) {
			month = 9;
			day = d % 243;
		}
		if (d > 273 && d <= 304) {
			month = 10;
			day = d % 273;
		}
		if (d > 304 && d <= 334) {
			month = 11;
			day = d % 304;
		}
		if (d > 334 && d <= 365) {
			month = 12;
			day = d % 334;
		}
	}
	cout << month << endl << day;
	return 0;
}