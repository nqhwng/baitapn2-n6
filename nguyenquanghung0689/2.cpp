#include<iostream>
using namespace std;
class sanpham {
private:
	char msp[15];
	char tsp[30];
	int dg;
public:
	void nhap() {
		cin.ignore();
		cout << "ma san pham la "; cin.getline(msp, 15);
		cout << "ten san pham la :"; cin.getline(tsp, 30);
		cout << "don gia "; cin >> dg;
	}
	void xuat() {
		cout << "ma sp:" << msp << endl;
		cout << "ten sp:" << tsp << endl;
		cout << "don gia : " << dg << endl;
	}
	~sanpham() {};

};
class thuoc : public sanpham
{
private:
	char lt[15];
	int hsd;
	char tp[30];
public:
	void nhap() {
		sanpham::nhap();
		cout << "loai thuoc :"; cin.getline(lt, 15);
		cout << "han su dung :"; cin >> hsd;
		cin.ignore();
		cout << "thanh phan :"; cin.getline(tp, 30);
	}
	
	void xuat() {
		sanpham::xuat();
		cout << "lo?i thuoc :" << lt << endl;
		cout << "han su dung " << hsd << endl;
		cout << " thanh phan :" << tp << endl;
	}
	~thuoc() {};

};
int main() {
	sanpham sp[30];
	thuoc t[50];
	int n;
	cout << "so san pham :"; cin >> n;
	for (int i = 0; i < n; i++) {
		sp[i].nhap();
	}for (int i = 0; i < n; i++) {
		sp[i].xuat();
	}
	cout << "cac loai thuoc " << endl;
	int m;
	cout << "thuoc "; cin >> m;
	for (int i = 0; i < m; i++) {
		sp[i].nhap();
	}for (int i = 0; i < m; i++) {
		sp[i].xuat();
	}
	return 0;
}