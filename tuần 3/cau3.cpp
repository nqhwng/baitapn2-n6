#include <iostream>
#include<math.h>
using namespace std;
class DaThuc3
{
	private:
		int a, b, c, d, x;
	public:
		void Nhap()
		{
			cout << " NHAP CAC GIA TRI: "<<endl;
			cout << " a = ";
			cin >> a;
			cout << " b = ";
			cin >> b;
			cout << " c = ";
			cin >> c;
			cout << " d = ";
			cin >> d;	
		}
		void Xuat()
		{
			if (a != 0)
			{
				cout << " \n " << a << "x^3 + " << b << "x^2 + " << c << "x + " << d <<endl;								
			}
			else if(b != 0)
			{
				cout << " \n " << b << "x^2 + " << c << "x + " << d <<endl;
			}
			else if(c != 0)
			{
				cout << " \n " << c << "x + " << d <<endl;
			}
			else if(d != 0)
			{
				cout << " \n " << d <<endl;
			}
			else
			{
				cout <<" \n KHONG TON TAI DA THUC !!! "<<endl;
			}
		}
		int geta()
		{
			return a;
		}
		int getb()
		{
			return b;
		}
		int getc()
		{
			return c;
		}
		int getd(){
			return d;
		}
};
int main()
{
	DaThuc3 a[2];
	cout << "\n NHAP DA THUC !!! "<<endl;
	cout << " \n\t DA THUC 1 !! " << endl;
	a[0].Nhap();
	cout << " \n\t DA THUC 2 !! " << endl;
	a[1].Nhap();
	cout << " \n XUAT DA THUC !!!"<<endl;
	cout << " \t DA THUC 1 !! " << endl;
	a[0].Xuat();
	cout << " \t DA THUC 2 !! " << endl;
	a[1].Xuat();
	cout << " \n TINH TONG 2 DA THUC !! "<<endl;
	cout << " \n\t " << a[0].geta() + a[1].geta() << " x^3 + "
 		             << a[0].getb() + a[1].getb() << " x^2 + "
 	  	             << a[0].getc() + a[1].getc() << " x + "
 		             << a[0].getd() + a[1].getd() << endl;
	return 0;
}
