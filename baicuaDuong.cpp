#include "iostream"
using namespace std;
const int MAX= 50;
struct dayso
{
	int ds[MAX];
	int n;
};
void initalize (dayso &x)
{
	x.n=0;
}
int empty (dayso x)
{
	return (x.n==0?1:0);
}
int lizesize (dayso &x)
{
	return x.n;
}
void readlist (dayso x)
{
	cout <<"\n Nhap so phan tu cua danh sach: ";
	cin>>x.n;
	for(int i=0; i<lizesize(x); i++){
		cout<<"\nNhap cho phan tu thu:"<<i+1<<":";
		cin>>x.ds[i];
	}
}
void Printlist (dayso x)
{
	cout <<"\n DS Dac la: ";
	for(int i=0; i<lizesize(x);i++)
		cout<<x.ds[i]<<" ";
}
void chen (dayso &x, int pos, int a)
{
	if(pos<0 || pos> lizesize(x))
		cout<<"\n vi tri "<<pos <<"khong hop le";
	else {
		for(int i=lizesize(x) -1 ; i>= pos; i--)
			x.ds[i+1] = x.ds [i];
		x.ds[pos]=a;
		x.n++;
	}
}
int main ()
{
	dayso x;
	initalize(x);
	readlist(x);
	Printlist(x);
	int pos , k;
	cout<<"\n Ban hay nhap vi tri can chen";
	cin>>pos;
	cout<<"Ban hay nhap phan tu can chen: ";
	cin>>k;
	chen(x,pos,k);
	cout<<"\n DS sau khi chen them la: ";
	Printlist(x);
}

