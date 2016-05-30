#include "iostream"
using namespace std;
const int KTM = 100;
void nhapsonguyen(int &k);
void nhapmang(int a[], int n);
void xuatmang(int a[], int n);
int ktsonguyento(int n);
void xuatsonguyento(int a[], int n);
int tongsongto(int a[], int n);
void main()
{
	int b[KTM];
	int m, x;
	nhapsonguyen(m);
	nhapmang(b, m);
	cout << "\nPhan tu cua mang la:" << endl;
	xuatmang(b, m);
	cout << "\n cac So nguyen to co trong mang:" << endl;
	xuatsonguyento(b, m);
	cout << "\nTong so nguyent to:" << tongsongto(b, m) << endl;
}
void nhapsonguyen(int &k)
{
	do {
		cout << "\nNhap phan tu cua mang:";
		cin >> k;
	} while (k <= 0 || k > KTM);
}
void nhapmang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap phan tu thu [" << i << "]: ";
			cin >> a[i];
	}
}
void xuatmang(int a[], int n)
{
	for (int i = 0; i < n; i++)
			cout << a[i]<< "\t";

}
int ktsonguyento(int n)
{
	if (n< 2) // Nếu số A nhỏ hơn 2
	{
		return 0;// trả về false
	}
	else if (n>2)// Nếu số A lớn hơn 2
	{
		if (n % 2 == 0)  // Xét xem A có chia hết cho 2 không?
		{
			return 0;// Nếu chia hết, return false.
		}
		for (int i = 3; i < sqrt((float)n); i += 2)  // xét từ 3 đến căn bậc 2 của số A
		{
			if (n%i == 0)  // nếu A chia hết cho một số nào đó trong đoạn này
			{
				return 0;// trả về kết quả sai
			}
		}
	}
	return 1;// sau tất cả các chỗ trên, nó mà không sai thì cuối cùng nó đúng :3
}
void xuatsonguyento(int a[], int n)
{
	for (int i = 0; i < n; i++)
			if (ktsonguyento(a[i]) == 1)
				cout << a[i]<< "\t";
			else
				cout << "*\t";

}
int tongsongto(int a[], int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
			if (ktsonguyento(a[i]) == 1)
				tong += a[i];


	}
	return tong;
}