#include "iostream"
#include "math.h"
using namespace std;
const int KTM = 10;

void nhap_n(int &n)
{
	do {
		cout << "nhap n: ";
		cin >> n;
	} while (n <= 0);
}
void nhap_mang(int a[][KTM], int n) {
	cout << "\nMoi ban nhap mang:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "Nhap phan tu a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}
void xuat_mang(int a[][KTM], int n)
{
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<n; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}
int ktra_ngto(int k)
{
	/*if (k < 2)
		return 0;
	for (int i = 2; i<k; i++) {
		if (k%i == 0)
			return 0;
	}
	return 1;*/
	//tui hieu y cua ong
	if (k< 2) // Nếu số A nhỏ hơn 2
	{
		return 0;// trả về false
	}
	else if (k>2)// Nếu số A lớn hơn 2
	{
		if (k % 2 == 0)  // Xét xem A có chia hết cho 2 không?
		{
			return 0;// Nếu chia hết, return false.
		}
		for (int i = 3; i < sqrt((float)k); i += 2)  // xét từ 3 đến căn bậc 2 của số A
		{
			if (k%i == 0)  // nếu A chia hết cho một số nào đó trong đoạn này
			{
				return 0;// trả về kết quả sai
			}
		}
	}
	return 1;// sau tất cả các chỗ trên, nó mà không sai thì cuối cùng nó đúng :3
}
int tong_songuyento(int a[][KTM], int n)
{
	int sum = 0;
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<n; j++)
		{
			if (ktra_ngto(a[i][j]) == 1) sum += a[i][j];
		}
	}
	return sum;
}
int ktra_chinhphuong(int k) {
	float can = sqrt((float)k);
	if (can - (int)can == 0)
		return 2;
	else
		return 0;
	//tui thi lam cach khac.
}
void xuat_ngto(int a[][KTM], int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (ktra_ngto(a[i][j]) == 1) cout << a[i][j] << "\t";
			else cout << "*\t";
		}
		cout << endl;
	}
}
void xuat_chinhphuong(int a[][KTM], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j<n; j++)
		{
			if (ktra_chinhphuong(a[i][j]) == 2)
				cout << a[i][j] << "\t";
			else
				cout << "*\t";
		}
		cout << endl;
	}
}
int tong_chinhphuong(int a[][KTM], int n)
{
	int sum = 0;
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<n; j++)
		{
			if (ktra_chinhphuong(a[i][j]) == 2)
				sum += a[i][j];
		}
	}
	return sum;
}

void hienthi_menu()
{
	cout << "\n==========================================";
	cout << "\n cac chuc nang chuon trinh." << endl;
	cout << "\n1. nhap mang. " << endl;
	cout << "\n2. xuat mang. " << endl;
	cout << "\n3. Xuat cac so nguyen to. " << endl;
	cout << "\n4. Tong cac so nguyen to.." << endl;
	cout << "\n5. xuat chinh phuong." << endl;
	cout << "\n6. Tong so chinh phuong." << endl;
	//cout << "\n7. ." << endl;
	//cout << "\n8. tong so chinh phuong." << endl;
	cout << "\n=========================================";
}
void chon_menu(int a[][KTM], int n)
{
	int chon;
	do {
		cout << "\n nhap 1 so nguyen de lua chon chuc nang. . .";
		cin >> chon;
		switch (chon)
		{
		case 1:
			system("cls");
			nhap_mang(a, n);
			hienthi_menu();
			break;
		case 2:
			system("cls");
			xuat_mang(a, n);
			hienthi_menu();
			break;
		case 3:
			system("cls");
			cout << "\ncac so nguyen to la: " << endl;
			xuat_ngto(a, n);
			hienthi_menu();
			break;
		case 4:
			system("cls");
			cout << "\ntong cac so nguyen to la: " << endl;
			cout << tong_songuyento(a, n) << endl;
			hienthi_menu();
			break;
		case 5:
			system("cls");
			cout << "\ncac so chinh phuong la: " << endl;
			xuat_chinhphuong(a, n);
			hienthi_menu();
			break;
		case 6:
			system("cls");
			cout << "\ntong cac so chinh phuong la: " << endl;
			cout << tong_chinhphuong(a, n);
			hienthi_menu();
			break;
		default:
			break;
		}
	} while (chon != 0);
}
void main()
	{
		int n, a[KTM][KTM];
		nhap_n(n);
		nhap_mang(a, n);
		//xuat_mang(a, n);
		//xuat_ngto(a, n);
		//cout << "tong cac so nguyen to: " << tong_songuyento(a, n) << endl;
		//xuat_chinhphuong(a, n);
		//cout << "tong cac so chinh phuong: " << tong_chinhphuong(a, n) << endl;
		hienthi_menu();
		chon_menu(a, n);
		system("pause");
	}