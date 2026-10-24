/*
//Часть_1_номер_7

#include <iostream>

using namespace std;

int schetcifr(int a);

int main() {
	int a;
	cin >> a;
	cout << schetcifr(a);

	return 0;
}

int schetcifr(int a) {
	if (a < 10) {
		return 1;
	}
	return 1 + schetcifr(a / 10);
}*/

/*
//Часть_1_номер_8

#include <iostream>

using namespace std;

void obratchislo(int n);

int main() {
	int n;
	cin >> n;
	obratchislo(n);

	return 0;
}

void obratchislo(int n) {
	if (n < 1) return;
	cout << n << " ";
	obratchislo(n - 1);
}*/

/*
//Часть_2_номер_17

#include <iostream>

using namespace std;

int rev(int n, int r = 0);

int main() {
	int n;
	cin >> n;

	if (n == rev(n))
		cout << "YES";
	else
		cout << "NO";

	return 0;
}

int rev(int n, int r) {
	if (n == 0) return r;
	return rev(n / 10, r * 10 + n % 10);
}*/

/*
//Часть_2_номер_18

#include <iostream>

using namespace std;

int funcsum(int n);

int main() {
	int n;
	cin >> n;

	cout << funcsum(n);

	return 0;
}

int funcsum(int n) {
	if (n == 0) return 0;

	int d = n % 10;

	if (d % 2 == 0)
		return d + funcsum(n / 10);

	return funcsum(n / 10);
}*/

/*
//Часть_3_номер_27

#include <iostream>

using namespace std;


*/

/*
//Часть_3_номер_28

#include <iostream>

using namespace std;

void del(int n, int i);

int main() {
	int n;
	cin >> n;
	del(n, 1);
}

void del(int n, int i) {
	if (i > n) return;
	if (n % i == 0)
		cout << i << " ";
	del(n, i + 1);
}*/