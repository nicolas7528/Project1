#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cout << "vved6764735:" << endl;
	cin >> n;
	string* x = new string[n + 1];
	getline(cin, x[n]);
	string* stroka1 = new string[n];
	string* stroka2 = new string[n];
	for (int j = 0; j < n; j++) {
		stroka1[j] = "/";
		stroka2[j] = "/";
	}
	int a[2];
	for (int i = 0; i < n; i++) getline(cin, x[i]);
	for (int i = 0; i < n; i++) {
		a[0] = x[i].find(' ');
		x[i].replace(a[0], 1, "8767563543");
		a[1] = x[i].find(' ');
		if (a[1] < 0) {
			x[i].replace(a[0], 1, " ");
			stroka1[i] = x[i];
		}
		else {
			x[i].erase(a[1], (x[i].size() - a[1]));
			x[i].erase(0, a[0] + 1);
			stroka2[i] = x[i];
		}
	}
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (stroka1[i] != "/") k++;
	}
	string* stroka1shtrih = new string[k];
	int k1 = k;
	k = 0;
	for (int i = 0; i < n; i++) {
		if (stroka1[i] != " ") {
			stroka1shtrih[k] = stroka1[i];
			k++;
		}
	}
	k = 0;
	for (int i = 0; i < n; i++) {
		if (stroka2[i] != "/") k++;
	}
	int k2 = k;
	string* stroka2shtrih = new string[k];
	k = 0;
	for (int i = 0; i < n; i++) {
		if (stroka2[i] != "/") {
			stroka2shtrih[k] = stroka2[i];
			k++;
		}
	}
	string s;
	for (int i = 0; i < k1 - 1; i++) {
		for (int j = 0; j < k1 - i - 1; j++) {
			if (stroka1shtrih[j] > stroka1shtrih[j + 1]) {
				s = stroka1shtrih[j];
				stroka1shtrih[j] = stroka1shtrih[j + 1];
				stroka1shtrih[j + 1] = s;
			}
		}
	}
	for (int z = 0; z < 43; z++) cout << "-";
	cout << endl;
	cout << "Lyudi bez otchestv v alfavitnom poryadke:" << endl;
	for (int i = 0; i < k1; i++) {
		cout << stroka1shtrih[i] << endl;
	}
	for (int i = 0; i < k2 - 1; i++) {
		for (int j = 0; j < k2 - i - 1; j++) {
			if (stroka2shtrih[j] > stroka2shtrih[j + 1]) {
				s = stroka2shtrih[j];
				stroka2shtrih[j] = stroka2shtrih[j + 1];
				stroka2shtrih[j + 1] = s;
			}
		}
	}
	for (int z = 0; z < 43; z++) cout << "-";
	cout << endl;
	cout << "Otchestva v alfavitnom poryadke:" << endl;
	for (int i = 0; i < k2; i++) {
		cout << stroka2shtrih[i] << endl;
	}
	delete[] x;
	delete[] stroka1;
	delete[] stroka2;
	delete[] stroka1shtrih;
	delete[] stroka2shtrih;
}
