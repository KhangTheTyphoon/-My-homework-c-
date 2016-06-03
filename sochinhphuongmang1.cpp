#include "iostream"
#include "math.h"
using namespace std;
void nhapsonguyen(int &k);
void nhapmang(int a[], int n);
void xuatmatran(int a[], int n);
int ktsochinhphuong(int x);
void xuatsochphuongle(int a[], int n);
void main()
{
	int b[100];
	int  m;
	nhapsonguyen(m);
	nhapmang(b, m);
	xuatmatran(b, m);
	cout << "\nSo chinh phuong tai vij tri le:";
	xuatsochphuongle(b, m);
	system("pause");


}
void nhapsonguyen(int &k)
{
	do {
		cout << "\Nhap so luong phan tu mang:";
		cin >> k;
	} while (k <= 0);
}
void nhapmang(int a[], int n)
{
	for (int i = 0; i < n; i ++)
	{
		cout << "\nNhap so  phan tu  thu [" << i << "]";
		cin >> a[i];
	}
}
void xuatmatran(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nCac phan tu cua mang:";
		cout << a[i] << "\t";
	}
}
int ktsochinhphuong(int x)
{
	float i = sqrt((float)x);
	if (i*i == x)
		return 1;
	else
		return 0;
}
void xuatsochphuongle(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (ktsochinhphuong(a[i]) == 1)
		{
			if (a[i] % 2 != 0)
				cout << a[i] << "\t";
		}
	}
}