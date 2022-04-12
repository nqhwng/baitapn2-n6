#include<iostream>
using namespace std;
class sanpham{
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
		cout << "don gia : "<<dg<<endl;
	}
	~sanpham() {};
};
int main() {
	sanpham sp[30];
	int n;
	cout << "so san pham :"; cin >> n;
	for (int i = 0; i < n; i++) {
		sp[i].nhap();
	}for (int i = 0; i < n; i++) {
		sp[i].xuat();
	}
	return 0;
}