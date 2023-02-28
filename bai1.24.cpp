#include<iostream>
using namespace std;
struct NGAY {
	int ngay, thang, nam;
};
struct HOPSUA {
	char nhanhieu[20];
	float trongluong;
	NGAY hansudung;
};
void nhapsolieu(HOPSUA& hs)
{
	cout << "nhap nhan hieu :";
	cin.getline(hs.nhanhieu, 21);//hàm kỹ tự được xác định
	cout << "trongluong :";
	cin >> hs.trongluong;
	cout << "nhap ngay het han su dung :";
	cin >> hs.hansudung.ngay;
	cout << "nhap thang het han su dung :";
	cin >> hs.hansudung.thang;
	cout << "nhap nam su dung :";
	cin >> hs.hansudung.nam;
	cin.ignore();// hàm loại bỏ ký tự xuống dòng còn lại trong bộ nhớ đệm trước khi sử dụng hàm cin.getline().
}
void xuatsolieu(HOPSUA& hs)
{
	cout << "nhan hieu la :" << hs.nhanhieu << endl;
	cout << "trong luong gam :" << hs.trongluong << endl;
	cout << "ngay het hang la :" << hs.hansudung.ngay << "/" << hs.hansudung.thang << "/" << hs.hansudung.nam << endl;
		;
}
int main()
{
	HOPSUA hs;
	nhapsolieu(hs);
	xuatsolieu(hs);
	return 0;
}
