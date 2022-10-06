#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	/*
	{
		cout.setf(std::ios::showpos);	// ��ȣ�� �ٿ��� ����ϱ�
		cout << 108 << endl;

		cout.unsetf(std::ios::showpos);
		cout << 109 << endl;
	}
	*/

	/*
	{
		cout.unsetf(std::ios::dec);	// 10���� ��带 ���� ������
		cout.setf(std::ios::hex);	// 16������ ��� ��� �ѱ�
		cout << 108 << endl;
	}
	/*/

	/*
	{
		cout.setf(std::ios::hex, std::ios::basefield);	// basefield�� hex�� ����. 16������ ��� ��� �ѱ�
		cout << 108 << endl;
	}
	*/

	/*
	{
		cout << std::hex; // setf �� ����
		cout << 108 << endl;
		cout << 109 << endl;

		cout << std::dec;
		cout << 110 << endl;
	}
	*/

	/*
	{
		cout.setf(std::ios::uppercase);	// 16���� �����ڸ� �빮�ڷ� ����ϱ�
		cout << std::hex;
		cout << 108 << endl;
		cout << 109 << endl;

		cout << std::dec;
		cout << 110 << endl;
	}
	*/

	/*
	{
		cout << std::hex << std::uppercase; // 16���� �����ڸ� �빮�ڷ� ����ϱ� - std::ios::uppercase�� �ƴ�. <iomanip>�� �ִ°� ���
		cout << 108 << endl;
		cout << 109 << endl;

		cout << std::dec;
		cout << 110 << endl;
	}
	*/

	/*
	{
		cout << true << " " << false << endl;

		cout << std::boolalpha;	// boolean ���� ���ڷ� ����ϱ�
		cout << true << " " << false << endl;
	}
	*/

	/////*
	//{
	//	cout << std::defaultfloat;	// �ٸ� ���� �����Ѱ� �ƴϸ� default
	//	cout << std::setprecision(3) << 123.456 << endl;
	//	cout << std::setprecision(4) << 123.456 << endl;
	//	cout << std::setprecision(5) << 123.456 << endl;
	//	cout << std::setprecision(6) << 123.456 << endl;
	//	cout << std::setprecision(7) << 123.456 << endl;
	//}
	////*/

	//cout << endl;

	/////*
	//{
	//	//cout << std::defaultfloat;
	//	cout << std::fixed;	 // �Ҽ��� ���� ���ڰ� ����
	//	cout << std::setprecision(3) << 123.456 << endl;
	//	cout << std::setprecision(4) << 123.456 << endl;
	//	cout << std::setprecision(5) << 123.456 << endl;
	//	cout << std::setprecision(6) << 123.456 << endl;
	//	cout << std::setprecision(7) << 123.456 << endl;
	//}
	////*/

	//cout << endl;

	/////*
	//{
	//	//cout << std::defaultfloat;
	//	cout << std::scientific;
	//	cout << std::setprecision(3) << 123.456 << endl;
	//	cout << std::setprecision(4) << 123.456 << endl;
	//	cout << std::setprecision(5) << 123.456 << endl;
	//	cout << std::setprecision(6) << 123.456 << endl;
	//	cout << std::setprecision(7) << 123.456 << endl;
	//}
	////*/

	//cout << endl;

	/////*
	//{
	//	//cout << std::defaultfloat;
	//	cout << std::scientific << std::uppercase;
	//	cout << std::setprecision(3) << 123.456 << endl;
	//	cout << std::setprecision(4) << 123.456 << endl;
	//	cout << std::setprecision(5) << 123.456 << endl;
	//	cout << std::setprecision(6) << 123.456 << endl;
	//	cout << std::setprecision(7) << 123.456 << endl;
	//}
	////*/

	//cout << endl;

	/////*
	//{
	//	cout << std::defaultfloat;
	//	cout << std::showpoint;	// 123�� 123.���� �Ҽ����� ���´�
	//	cout << std::setprecision(3) << 123.456 << endl;
	//	cout << std::setprecision(4) << 123.456 << endl;
	//	cout << std::setprecision(5) << 123.456 << endl;
	//	cout << std::setprecision(6) << 123.456 << endl;
	//	cout << std::setprecision(7) << 123.456 << endl;
	//}
	////*/


	///*
	{
		//cout << -12345 << endl;
		//cout << std::setw(10) << -12345 << endl;
		//cout << std::setw(10) << std::left << -12345 << endl;
		//cout << std::setw(10) << std::right << -12345 << endl;
		//cout << std::setw(10) << std::internal << -12345 << endl;

		//cout << endl;

		cout.fill('*');
		cout << std::setw(10) << "Hello" << endl;

	}
	//*/

	return 0;
}
