#include<iostream>
using namespace std;
class khachhang {
private:
	char ht[30];
	struct  NS {
		int ngay, thang, nam;
	} ns ;
	char cmt[10];
	char hk[30];
public:
	void nhap() {
		
			cin. ignore();
			cout << "ho ten nhan vien la :";
			cin.getline(ht, 30);
			cout << "ngay sinh cua nhan vien ";
			cin >> ns.ngay >> ns.thang >> ns.nam;
			cin.ignore();
			cout << "moi nhap so chung minh thu :";
			cin.getline(cmt, 10);
			cout << "ho khau cua khach hang :";
			cin.getline(hk, 30);
	}
	void xuat() {
		cout << "ho ten :" << ht << endl;
		cout << "ngày sinh :" << ns.ngay<<ns.thang<<ns.nam << endl;
		cout << "chung minh thu " <<cmt << endl;
		cout << "ho khau :" <<hk << endl;
	}
	void in() {
		if (ns.thang == 12) {
			cout << "hoten" << ht << endl;
		}
	}

};

int main() {
	khachhang kh[30];
	int n;
	cout << "danh sach co so nhan vien la :"; cin >> n;
	
	for (int i = 0; i < n; i++) {
		kh[i].nhap();
	}
	for (int i = 0; i < n; i++) {
		kh[i].xuat();
	}
	kh->in();
	return 0;
}