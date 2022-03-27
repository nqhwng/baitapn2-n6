/*Câu 2: Xây d?ng l?p giáo viên GV g?m các thu?c tính h? tên ht (ki?u char[30]), tu?i t (ki?u s? nguyên), b?ng c?p cao nh?t ðý?c ðào t?o bc (ki?u char[15]), chuyên ngành (ki?u char[20]), b?c lýõng bl (ki?u float) là các thu?c tính riêng. Trong l?p có ð?nh ngh?a các hàm công c?ng sau:
-	Hàm nh?p d? li?u cho các thông tin trên c?a 1 giáo viên
-	Hàm xu?t các thông tin trên c?a giáo viên ra màn h?nh
-	Hàm tính ti?n lýõng cõ b?n lcb bi?t r?ng lcb = bl *610
Vi?t chýõng tr?nh nh?p vào n(n nguyên dýõng nh?p t? bàn phím) giáo viên. In ra màn h?nh:
-	Danh sách các giáo viên có ti?n lýõng nh? hõn 2000.
-	Danh sách giáo viên s?p x?p theo chuyên ngành*/
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
			cout << "tuoi cua giáo vien ";
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
			cout << "giáo vien co muc luong nho hõn 2000 la :" << ht << endl;
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