#include <iostream>
#include <string>
#include <iomanip> // input / output manipulators

using namespace std;

int main()
{
	// Example -1
	/*
	{
		cout << "Enter a number" << endl;

		int i;
		cin >> i;

		cout << i << endl;
	}
	*/

	// Example 0
	/*
	{
		char buf[5]; // 4���ڸ� �ʰ��� �Է��ϸ� ��Ÿ�ӿ���

		cin >> buf;
	}
	*/

	// Example 1
	/*
	{
		// ��Ÿ�ӿ����� ��� �Ű澲�� �������� <iomanip> include �ؼ� setw(n) ���

		char buf[5];

		cin >> setw(5) >> buf; // setw(n): �ִ� n ���ڸ� �޵��� ����
		cout << buf << '\n'; // n-1���� ���ڸ� ��µǴ� ������ ������ �ڸ��� null ĳ���Ϳ��� �ϱ� �����̴�

		cin >> setw(5) >> buf; // ���ۿ��� ���� ���ڸ� �ٷ� �����´� 1
		cout << buf << '\n';

		cin >> setw(5) >> buf; // ���ۿ��� ���� ���ڸ� �ٷ� �����´� 2
		cout << buf;
	}
	*/

	// Example 2
	/*
	{

		char ch;

		while (cin >> ch) // "Hello World"�� �Է��ϸ� ��ĭ�� ������� "HelloWorld"�� ��µȴ�.
			cout << ch;
	}
	*/

	// Example 3
	/*
	{
		int i;
		float f;

		cin >> i >> f; // �ٸ� �ڷ����� int�� float�� ��ĭ���� �����ؼ� �� ���� �Է� ���� �� �ִ�.
		cout << i << " | " << f << '\n';
	}
	*/

	// Example 4 - 1
	/*
	{
		int ch;

		while ((ch = cin.get()) != EOF)
		{
			cout << (char)ch;
		}

	}
	*/

	// Example 4 - 2
	/*
	{
		char ch;

		while (cin.get(ch)) // ��ĭ�� �о ���
			cout << ch;
	}
	*/

	// Example 5
	/*
	{
		char buf[5];

		cin.get(buf, 5); // cin.get���� �� ĭ�� �Է¹����鼭 �迭�� �����ϱ�
		cout << buf << '\n';

		cin.get(buf, 5); // cin.get���� �� ĭ�� �Է¹����鼭 �迭�� �����ϱ�
		cout << buf << '\n';

	}
	*/

	// Example 6
	/*
	{
		char buf[5];

		cin.get(buf, 5); 
		cout << cin.gcount() << " " << buf << '\n'; // cin.gcount()�� ��� �� ���� �о����� �� �� �ִ�

		cin.get(buf, 5); 
		cout << cin.gcount() << " " << buf << '\n';

	}
	*/

	// Example 7
	/*
	{
		char buf[5];

		cin.getline(buf, 5); // ���ۿ��� �� ���� ��°�� �� �о����
		cout << cin.gcount() << " " << buf << '\n';

		cin.getline(buf, 5); 
		cout << cin.gcount() << " " << buf << '\n'; // ù ��° getline�� ���� �� �о������Ƿ� 0

	}
	*/

		// Example 7
	/*
	{
	char buf[10];

		//cin.get(buf, 10);
		//cout << cin.gcount() << " " << buf << '\n';

		cin.getline(buf, 10);
		cout << cin.gcount() << " " << buf << '\n';

	}
	*/

	// Example 8
	/*
	{
		char buf[100];

		//cin.getline(buf, 100); // �ٹٲ� ��ȣ���� �д´�

		while (1)
		{
			cin.get(buf, 100); // �ٹٲ� ��ȣ�� ���� �д´�
			cout << cin.gcount() << " " << buf << '\n';
		}


		//cin.getline(buf, 100);
		//cout << cin.gcount() << " " << buf << '\n'; // ù ��° getline�� ���� �� �о������Ƿ� 0


	//*/

	// Example 9
	/*
	{
		string buf;
		
		while (1)
		{
			getline(cin, buf); // string�� �� ���� getline�� �Ķ���ͷ� cin�� ����
			cout << cin.gcount() << " " << buf << '\n'; // cin�� �� �� �ƴ϶� cin.gcount()�� 0�̴�
		}


	}
	*/

	// Example 10
	/*
	{
		char buf[1024];

		cin.ignore(5, 'e');

		cin >> buf;
		cout << buf << '\n';
	}
	*/

	// ��ũ�� ����¿� ������ ���⺸�ٴ� ���� ����� �� �� �����ϴ�

	// Example 11
	/*
	{
		char buf[1024];

		cout << "peek: " << (char)cin.peek() << '\n'; // cin.peek()�� ���۸� �鿩�ٺ��⸸ �ϰ� �������� �ʴ� �뵵

		cin >> buf;
		cout << buf << '\n';
	}
	*/

	// Example 12
	/*
	{
		char buf[1024];

		cin >> buf;
		cout << buf << '\n';

		cout << "--- cin.unget() ---\n";
		cin.unget(); // �������� ���� ���ڸ� ���۷� �ٽ� �������

		cin >> buf;
		cout << buf << endl;

	}
	*/

	// Example 13
	///*
	{
		char buf[1024];

		cin >> buf;
		cout << buf << '\n';

		cout << "--- cin.putback('A') ---\n";
		cin.putback('A'); // ���ϴ� ���ڸ� ���ۿ� �������

		cin >> buf;
		cout << buf << endl;

	}
	//*/

	return 0;
}