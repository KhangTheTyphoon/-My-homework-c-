//viết hàm đếm các phần tử âm, hàm đếm các phần tử dương có trong ma trận.
//viết hàm đếm các phần tử chẳn, hàm đếm các phần tử lẻ trong ma trận.
#include "iostream"
using namespace std;
const int KTM = 100;
void nhapsonguyen(int &k);
void nhapmatran(int a[][KTM], int m);
void xuatmatran(int a[][KTM], int m);
int demptam(int a[][KTM], int m);
int demptduong(int a[][KTM], int m);
int demptchan(int a[][KTM], int m);
int demptle(int a[][KTM], int m);
void display();
void choosemenu(int a[][KTM], int m);
void main()
{
	int a[KTM][KTM];
	int n;
	nhapsonguyen(n);
	nhapmatran(a,n);
	display();
	choosemenu(a, n);
	system("cls");
}
void nhapsonguyen(int &k)
{
	do {
		cout << "\nNhap 1 so:";
		cin >> k;
	} while (k <= 0 || k > KTM);
}
void nhapmatran(int a[][KTM], int m)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << "\nNhap phan tu thu " << "[" << i << "]"<<"[" << j <<"]:";
			cin >> a[i][j];
		}
	}
}
void xuatmatran(int a[][KTM], int m)
{
	cout << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
			cout << a[i][j] << "\t";
			cout << endl;

	}

}
int demptam(int a[][KTM], int m)
{
	int demam = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
			if (a[i][j] < 0)
				demam++;
			else cout << "*\t";
		cout << endl;
	}
	return demam;
}
int demptduong(int a[][KTM], int m)
{
	int demduong = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
			if (a[i][j] > 0)
				demduong++;
			else cout << "*\t";
		cout << endl;
	}
	return demduong;
}
int demptchan(int a[][KTM], int m)
{
	int demchan = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
			if (a[i][j]%2==0)
				demchan++;
			else cout << "*\t";
		cout << endl;
	}
	return demchan;
}
int demptle(int a[][KTM], int m)
{
	int demle = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
			if (a[i][j]%2!= 0)
				demle++;
			else cout << "*\t";
		cout << endl;
	}
	return demle;
}
void display()
{
	cout << "\n1.xuat ma tran ra mang hinh." << endl;
	cout << "\n2.xuat ra phan tu am." << endl;
	cout << "\n3.xuat ra phan tu duong." << endl;
	cout << "\n4.xuat ra phan tu chan." << endl;
	cout << "\n5.xuat ra phan tu le." << endl;
	cout << "\n0. Neu ban muon dung chuong trinh." << endl;
}
void choosemenu(int a[][KTM], int m)
{
	int chon;
	do{
		cout << "\nMoi ban chon chuc nang.";
		cin >> chon;
		switch (chon)
		{
		case 1:
			system("cls");
			xuatmatran(a, m);
			display();
			choosemenu(a, m);
			break;
		case 2:
			system("cls");
			cout << "\nPhan tu am la:" << demptam(a, m);
			display();
			choosemenu(a, m);
			break;
		case 3:
			system("cls");
			cout << "\nPhan tu duong la:" << demptduong(a, m);
			display();
			choosemenu(a, m);
			break;
		case 4:
			system("cls");
			cout << "\nPhan tu chan la:" << demptchan(a, m);
			display();
			choosemenu(a, m);
			break;
		case 5:
			system("cls");
			cout << "\nPhan tu le la:" << demptle(a, m);
			display();
			choosemenu(a, m);
			break;
		default:
			break;
		}
		}while (chon!= 0);
}
