#include <iostream>
#include <sstream> // 문자열 스트림 사용을 위한 헤더 파일
using namespace std;

int main()
{
	// stringstream은 문자열 흐름의 버퍼 역할을 한다

	/* 
	{
		stringstream ss;
		
		ss << "Hello, World! (1)"; // <<: insertion operator, >>: extraction operator
		ss.str("Hello, World! (2)"); 

		string str;

		ss >> str; // 추출
		cout << str << endl; // 빈칸이 있으면 잘림

	}
	*/

	/* 
	{
		stringstream ss;

		ss << "Hello, World! (1)"; // <<: insertion operator, >>: extraction operator
		ss.str("Hello, World! (2)"); 

		string str;

		//ss >> str; // 추출
		
		str = ss.str(); // string을 통째로 대입
		
		cout << str << endl;

	}
	*/

	/* 
	{
		stringstream ss;

		ss << "Hello, World! (1)"; // <<: insertion operator, >>: extraction operator
		//ss.str("Hello, World! (2)"); // 버퍼 내용을 통째로 바꿈
		ss << "Hello, World! (3)"; // 기존 버퍼 내용에 덧붙이기

		string str;

		//ss >> str; // 추출

		str = ss.str(); // string을 통째로 대입

		cout << str << endl;

	}
	*/

	//* 
	{
		stringstream ss;

		// 줄바꿈문자나 endl도 stringstream에 포함될 수 있다 
		ss << "Hello\n";
		ss << "C++" << endl;
		ss << "World";

		string str;

		str = ss.str(); // string을 통째로 대입

		cout << str << endl;

	}
	//*/



	return 0;
}



//
/////* 
//{
//
//}
////*/
