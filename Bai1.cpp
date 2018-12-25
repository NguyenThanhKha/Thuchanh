#include<iostream>
using namespace std;


int main()
{
	int luachon;
	while(1)
	{
		system("cls");//xoa man hinh//
		cout<<"\n\n\t\t===================== Menu =====================";
		cout<<"\n\t\t 1.Them danh ba";
		cout<<"\n\t\t 2.Liet ke danh ba";
		cout<<"\n\t\t 3.Chinh sua danh ba";
		cout<<"\n\t\t 4.Xoa danh ba";
		cout<<"\n\t\t 5.Tim kiem theo ten";
		cout<<"\n\t\t 0. Ket thuc";
		cout<<"\n\n\t\t=====================  End  =====================";
		cout<<"\n\t nhap lua chon:";
		cin>> luachon;
		if(luachon != 0 && luachon != 1 && luachon != 2 && luachon != 3 && luachon != 4 && luachon != 5)
		{
			cout<<"\n lua chon khong phu hop!";
			system("pause");
		}
//		else
//			if(luachon==1)
//		{
//			cout<<
//			system("pause");
//		}

	else
	{
		break;
	}

	}
}
