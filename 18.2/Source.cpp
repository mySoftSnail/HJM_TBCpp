#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	/*
	{
		cout.setf(std::ios::showpos);	// 부호를 붙여서 출력하기
		cout << 108 << endl;

		cout.unsetf(std::ios::showpos);
		cout << 109 << endl;
	}
	*/

	/*
	{
		cout.unsetf(std::ios::dec);	// 10진수 모드를 먼저 꺼야함
		cout.setf(std::ios::hex);	// 16진수로 출력 모드 켜기
		cout << 108 << endl;
	}
	/*/

	/*
	{
		cout.setf(std::ios::hex, std::ios::basefield);	// basefield에 hex를 세팅. 16진수로 출력 모드 켜기
		cout << 108 << endl;
	}
	*/

	/*
	{
		cout << std::hex; // setf 안 쓰기
		cout << 108 << endl;
		cout << 109 << endl;

		cout << std::dec;
		cout << 110 << endl;
	}
	*/

	/*
	{
		cout.setf(std::ios::uppercase);	// 16진수 영문자를 대문자로 출력하기
		cout << std::hex;
		cout << 108 << endl;
		cout << 109 << endl;

		cout << std::dec;
		cout << 110 << endl;
	}
	*/

	/*
	{
		cout << std::hex << std::uppercase; // 16진수 영문자를 대문자로 출력하기 - std::ios::uppercase가 아님. <iomanip>에 있는거 사용
		cout << 108 << endl;
		cout << 109 << endl;

		cout << std::dec;
		cout << 110 << endl;
	}
	*/

	/*
	{
		cout << true << " " << false << endl;

		cout << std::boolalpha;	// boolean 값을 문자로 출력하기
		cout << true << " " << false << endl;
	}
	*/

	/////*
	//{
	//	cout << std::defaultfloat;	// 다른 모드로 설정한거 아니면 default
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
	//	cout << std::fixed;	 // 소수점 뒤의 숫자가 고정
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
	//	cout << std::showpoint;	// 123도 123.으로 소수점이 나온다
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
