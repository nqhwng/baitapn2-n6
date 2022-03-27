/*C�u 2: X�y d?ng l?p gi�o vi�n GV g?m c�c thu?c t�nh h? t�n ht (ki?u char[30]), tu?i t (ki?u s? nguy�n), b?ng c?p cao nh?t ��?c ��o t?o bc (ki?u char[15]), chuy�n ng�nh (ki?u char[20]), b?c l��ng bl (ki?u float) l� c�c thu?c t�nh ri�ng. Trong l?p c� �?nh ngh?a c�c h�m c�ng c?ng sau:
-	H�m nh?p d? li?u cho c�c th�ng tin tr�n c?a 1 gi�o vi�n
-	H�m xu?t c�c th�ng tin tr�n c?a gi�o vi�n ra m�n h?nh
-	H�m t�nh ti?n l��ng c� b?n lcb bi?t r?ng lcb = bl *610
Vi?t ch��ng tr?nh nh?p v�o n(n nguy�n d��ng nh?p t? b�n ph�m) gi�o vi�n. In ra m�n h?nh:
-	Danh s�ch c�c gi�o vi�n c� ti?n l��ng nh? h�n 2000.
-	Danh s�ch gi�o vi�n s?p x?p theo chuy�n ng�nh*/
#include<iostream>
#include<iomanip>
using namespace std;
class giaovien {
private:
	char ht[30];
	int tuoi;
	char bc[15];
	char cn[20];
	float bl;
	
public:
	void nhap() {
		
			cin.ignore();
			cout << "ho ten giao vien :";
			cin.getline(ht, 30);
			cout << "tuoi cua gi�o vien ";
			cin >> tuoi;
			cin.ignore();
			cout << "bang cap giao vien :";
			cin.getline(bc, 15);
			cout << "chuyen nganh cua giao vien :";
			cin.getline(cn, 20);
			cout << "bac luogn cua giao vien la :";
			cin >> bl;

		
	}
	void lcb() {
		int lcb = 1;
		lcb = bl * 610;
		cout << "luong co ban cua nhan vien la :" << lcb << endl;
	}
	void xuat() {
		cout << "ho ten giao vien :" << ht << endl;
		cout << "tuoi giao vien :" << tuoi << endl;
		cout << "bang cap:" << bc << endl;
		cout << "chuyen nganh :" << cn << endl;
		cout << "bac luong :" << bl << endl;
	}
	void luong() {
		if (bl < 2000)
		{
			cout << "gi�o vien co muc luong nho h�n 2000 la :" << ht << endl;
		}
	}
};

int main() {
	giaovien gv[30];
	int n;
	cout << "moi nhap so giao vien "; cin >> n;
	for (int i = 0; i < n; i++) {
		gv[i].nhap();
    }
	for (int i = 0; i < n; i++) {
		gv[i].xuat();
	} 
	for (int i = 0; i < n; i++) {
		gv[i].lcb();
	}
	for (int i = 0; i < n; i++) {
		gv[i].luong();
	}
	return 0;
}