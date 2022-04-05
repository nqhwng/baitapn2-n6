#include <iostream>
using namespace std;
class gv
{
	private:
		char ht[30];
		int t;
		char bc[15];
		char chuyen_nganh[20];
		float bl;
	public:
		void nhap();
		void xuat();
		void tinh();
};

void gv::nhap()
{
	cout << " \n Nhap ho ten giao vien : ";cin.getline(ht,30);
	cout << " Nhap tuoi giao vien : ";cin>>t;fflush(stdin);
	cout << " Nhap bang cap cao nhat duoc dao tao : ";cin.getline(bc,15);
	cout << " Nhap chuyen nganh : ";cin.getline(chuyen_nganh,20);
	cout << " Nhap bac luong : ";cin>>bl;
	fflush(stdin);
}

void gv::xuat()
{

	cout << "\n Ho ten giao vien : " << ht
		 << "\n Tuoi : "<<t
		 << "\n Bang cap cao nhat duoc dao tao : " <<bc
		 << "\n Chuyen nganh : " <<chuyen_nganh
		 << "\n Bac luong : "<<bl
		 << "\n ------------------------------------"<<endl;
}

int main()
{
	int n;
	cout << " \n\t Nhap so luong giao vien : ";
	cin >> n;
	gv a[n];
	fflush(stdin);
	for(int i=0;i<n;i++)
	{
		cout<<"\n Thong tin giao vien thu " << i+1 <<endl;
		a[i].nhap();
	}
	cout<<"\n\t THONG TIN GIAO VIEN";
	for(int i=0;i<n;i++)
	{
		cout << "\n Thong tin giao vien thu " << i+1 <<endl;
		a[i].xuat();
	}
	return 0;
}
