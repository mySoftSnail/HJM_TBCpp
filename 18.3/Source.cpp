#include <iostream>
#include <sstream> // ���ڿ� ��Ʈ�� ����� ���� ��� ����
using namespace std;

int main()
{
	// stringstream�� ���ڿ� �帧�� ���� ������ �Ѵ�

	/* 
	{
		stringstream ss;
		
		ss << "Hello, World! (1)"; // <<: insertion operator, >>: extraction operator
		ss.str("Hello, World! (2)"); 

		string str;

		ss >> str; // ����
		cout << str << endl; // ��ĭ�� ������ �߸�

	}
	*/

	/* 
	{
		stringstream ss;

		ss << "Hello, World! (1)"; // <<: insertion operator, >>: extraction operator
		ss.str("Hello, World! (2)"); 

		string str;

		//ss >> str; // ����
		
		str = ss.str(); // string�� ��°�� ����
		
		cout << str << endl;

	}
	*/

	/* 
	{
		stringstream ss;

		ss << "Hello, World! (1)"; // <<: insertion operator, >>: extraction operator
		//ss.str("Hello, World! (2)"); // ���� ������ ��°�� �ٲ�
		ss << "Hello, World! (3)"; // ���� ���� ���뿡 �����̱�

		string str;

		//ss >> str; // ����

		str = ss.str(); // string�� ��°�� ����

		cout << str << endl;

	}
	*/

	//* 
	{
		stringstream ss;

		// �ٹٲ޹��ڳ� endl�� stringstream�� ���Ե� �� �ִ� 
		ss << "Hello\n";
		ss << "C++" << endl;
		ss << "World";

		string str;

		str = ss.str(); // string�� ��°�� ����

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
