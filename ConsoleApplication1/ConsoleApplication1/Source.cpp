#include <iostream>
#include <clocale>
#include <math.h>
using namespace std;

int first() {
	int a, b;
	cin >> a >> b;
	cout << a << " + " << b << " = ";
	cout << a + b << endl;
	cout << a << " - " << b << " = ";
	cout << a - b;
	return 0;
}

int second() {
	setlocale(LC_ALL, "Russian");
	int v,t,g = 10;
	cout << "¬ведите врем€ полета" << endl;
	cin >> t;
	v = g*t;
	int vm = v / 2;
	int s = vm*t;
	cout << "ѕассажир летел " << s << endl;
	return 0;
}

int delenie() {
	setlocale(LC_ALL, "Russian");
	int delimoe, delitel = 0;
	cout << "¬ведите делимое"<< endl;
	cin >> delimoe ;
	cout << "¬ведите делитель"<< endl;
	cin >> delitel;
	cout << "–езультат: " << ((delimoe + delitel - 1) / delitel) <<endl;
	return 0;
}

int zadacha1() {
	int n;
	int k;
	cin >> n >> k;
	cout << k % n;
	return 0;
}

int posledneyeChislo() {
	int n = 78798;
	int res = n % 100;
	cout << res;
	return 0;
}

int dvuznak() {
	int n = 34;
	cout << n / 10;
	return 0;
}

int chisloDes() {
	int n = 0;
	cin >> n;
	cout << (n % 100) / 10 <<endl;
	return 0;
}

int summaCifr() {
	int n = 0;
	cin >> n;
	cout << (n / 100) + (n/10) % 10 + (n%10);
	return 0;
}

int sleduushee() {
	int n = 0;
	cin >> n;
	cout << (n+1)+((n+1) % 2);
	return 0;
}

int parti() {
	int a, b, c = 0;
	cin >> a >> b >> c;
	cout << ((a + (a % 2)) + (b + (b % 2)) + (c + (c % 2)))/2;
	return 0;
}

int pirozki() {
	int a, b, n = 0;
	cin >> a >> b >> n;
	cout << a*n+((b*n)/100) << endl;
	cout << (b*n) % 100  << endl;
	return 0;
}

int electronChasi() {
	int n, hh, mm, ss = 0;
	cin >> n;
	hh = (n / 3600)%24;
	mm = (n % 3600) / 60;
	ss = (n % 3600)%60;
	cout << hh << ":" << mm/10 << mm%10 << ":" << ss/10 << ss%10;
	return 0;
}

int timeDif() {
	int h1, m1, s1, h2, m2, s2, res, hh, mm, ss = 0;
	cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
	hh = (h2 - h1)*3600;
	mm = (m2 - m1)*60;
	ss = s2 - s1;
	res = hh + mm + ss;
	cout << res;
	return 0;
}

int kolchevaya() {
	int v, t, l = 0;
	cin >> v >> t;
	l = v * t;
	cout << (109 + (l%109)) % 109;
	return 0;
}

int zerkalnoyeChislo() {
	setlocale(LC_ALL, "Russian");
	int ch, a1, a2, a3, a4 = 0;
	cout << "¬ведите число" << endl;
	cin >> ch;
	a1 = ch % 10;
	a2 = ((ch - a1) / 10) % 10;
	a3 = ((ch - a1 - a2) / 100) % 10;
	a4 = ((ch - a1 - a2 - a3) / 1000) % 10;
	cout << a1 << endl << a2 << endl << a3 << endl << a4 << endl;
	cout << (a1 - a4)*(a1 - a4) + (a2 - a3)*(a2 - a3) + 1;
	return 0;
}

int ulitka() {
	int h, a, b = 0;
	cin >> h >> a >> b;
	cout << (((h - b) + (a - b)-1)/(a - b));
	return 0;
}

int test() {
	int year = 2000;
	bool m = year % 400 == 0;
	cout << m;
	return 0;
}

int chisla() {
	int a, b = 0;
	cin >> a >> b;
	if (a > b) {
		cout << a;
	} else if (a < b){
		cout << b;
	}
	else {
		cout << a;
	}
	return 0;
}

int chisla2() {
	int a, b = 0;
	cin >> a >> b;
	if (a > b) {
		cout << 1;
	}
	else if (a < b) {
		cout << 2;
	}
	else {
		cout << 0;
	}
	return 0;
}

int naibol() {
	int a, b, c = 0;
	cin >> a >> b >> c;
	if ((a >= b)&&(a >= c)) {
		cout << a;
	}
	else if ((b >= a) && (b >= c)) {
		cout << b;
	}
	else {
		cout << c;
	}
	return 0;
}

int treugol() {
	int a, b, c = 0;
	cin >> a >> b >> c;
	if ((a != 0 && b != 0 && c != 0)&&(((a+b)>c)&&((a + c)>b) && ((b + c)>a))) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}

int triChisla() {
	int a, b, c = 0;
	cin >> a >> b >> c;
	if (a == b && b == c && c == a) {
		cout << 3;
	}
	else if (a == b || b == c || c == a) {
		cout << 2;
	}
	else {
		cout << 0;
	}
	return 0;
}

int ladya() {
	int c1, c2, c3, c4 = 0;
	cin >> c1 >> c2 >> c3 >> c4;
	if ((c1 == c3) || (c2 == c4)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}

int korol() {
	int c1, c2, c3, c4 = 0;
	cin >> c1 >> c2 >> c3 >> c4;
	int x, y = 0;
	x = (c3 - c1)*(c3 - c1);
	y = (c4 - c2)*(c4 - c2);
	if ((x + y) <= 2) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}

int slon() {
	int c1, c2, c3, c4 = 0;
	cin >> c1 >> c2 >> c3 >> c4;
	int x, y = 0;
	x = (c3 - c1)*(c3 - c1);
	y = (c4 - c2)*(c4 - c2);
	if (x==y) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}

int ferz() {
	int c1, c2, c3, c4 = 0;
	cin >> c1 >> c2 >> c3 >> c4;
	int x, y = 0;
	x = (c3 - c1)*(c3 - c1);
	y = (c4 - c2)*(c4 - c2);
	if ((x == y)|| ((c1 == c3) || (c2 == c4))) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}

int kon() {
	int c1, c2, c3, c4 = 0;
	cin >> c1 >> c2 >> c3 >> c4;
	int x, y = 0;
	x = (c3 - c1)*(c3 - c1);
	y = (c4 - c2)*(c4 - c2);

	if ((x + y) == 5) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}

int shock() {
	int n, m, k = 0;
	cin >> n >> m >> k;
	if ((k < (n*m))&&((k%n)==0||(k%m)==0)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}

int bassein() {
	int n, m, x, x1, y, y1 = 0;
	cin >> n >> m >> x >> y;
	if (n < m) {
		x1 = n - x;
		y1 = m - y;
	}
	else {
		x1 = m - x;
		y1 = n - y;
	}
	cout << x << endl << x1 << endl << y << endl << y1 << endl;
	
	if (x <= x1) {
		if (y <= y1) {
			if (x <= y) {
				cout << x;
			}
			else {
				cout << y;
			}
		}
		else {
			if (x <= y1) {
				cout << x;
			}
			else {
				cout << y1;
			}
		}
	}
	else {
		if (y <= y1) {
			if (x1 <= y) {
				cout << x1;
			}
			else {
				cout << y;
			}
		}
		else {
			if (x1 <= y1) {
				cout << x1;
			}
			else {
				cout << y1;
			}
		}
	}
	return 0;
}

void triCh(int *a, int *b, int *c) {
	int a1, b1, c1 = 0;
	a1 = *a;
	b1 = *b;
	c1 = *c;
	if ((*a <= *b) && (*a <= *c)) {
		if (*b <= *c) {
			*a=a1, *b=b1, *c=c1;
		}
		else {
			*a = a1, *b = c1, *c = b1;
		}
	}
	else if ((*b <= *a) && (*b <= *c)) {
		if (*a <= *c) {
			*a = b1, *b = a1, *c = c1;
		}
		else {
			*a = b1, *b = c1, *c = a1;
		}
	}
	else {
		if (*a <= *b) {
			*a = c1, *b = a1, *c = b1;
		}
		else {
			*a = c1, *b = b1, *c = a1;
		}
	}
}

int korob() {
	int a1, b1, c1, a2, b2, c2 = 0;
	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;


	triCh(&a1, &b1, &c1);
	triCh(&a2, &b2, &c2);
	cout << a1 << "" << b1 << "" << c1 << endl;
	cout << a2 << "" << b2 << "" << c2 << endl;


	if ((a1 > a2) && (b1 > b2) && (c1 > c2)) {
		cout << "The first box is larger than the second one" << endl;
	}
	else if ((a1 < a2) && (b1 < b2) && (c1 < c2)) {
		cout << "The first box is smaller than the second one" << endl;
	}
	else if ((a1 == a2) && (b1 == b2) && (c1 == c2)) {
		cout << "Boxes are equal" << endl;
	}
	else {
		cout << "Boxes are incomparable";
	}
	return 0;
}

int main() {
	//first();
	//second();
	//delenie();
	//zadacha1();
	//posledneyeChislo();
	//dvuznak();
	//chisloDes();
	//summaCifr();
	//sleduushee();
	//parti();
	//pirozki();
	//electronChasi();
	//timeDif();
	//kolchevaya();
	//zerkalnoyeChislo();
	//ulitka();
	//test();
	//chisla();
	//chisla2();
	//naibol();
	//treugol();
	//triChisla();
	//ladya();
	//korol();
	//slon();
	//ferz();
	//kon();
	//shock();
	//bassein();
	//triCh();
	korob();

	return 0;
}