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
		char buf[5]; // 4글자를 초과해 입력하면 런타임에러

		cin >> buf;
	}
	*/

	// Example 1
	/*
	{
		// 런타임에러를 계속 신경쓰기 귀찮으니 <iomanip> include 해서 setw(n) 사용

		char buf[5];

		cin >> setw(5) >> buf; // setw(n): 최대 n 글자만 받도록 방지
		cout << buf << '\n'; // n-1개의 글자만 출력되는 이유는 마지막 자리는 null 캐릭터여야 하기 때문이다

		cin >> setw(5) >> buf; // 버퍼에서 남은 글자를 바로 가져온다 1
		cout << buf << '\n';

		cin >> setw(5) >> buf; // 버퍼에서 남은 글자를 바로 가져온다 2
		cout << buf;
	}
	*/

	// Example 2
	/*
	{

		char ch;

		while (cin >> ch) // "Hello World"를 입력하면 빈칸이 사라져서 "HelloWorld"가 출력된다.
			cout << ch;
	}
	*/

	// Example 3
	/*
	{
		int i;
		float f;

		cin >> i >> f; // 다른 자료형인 int와 float를 빈칸으로 구분해서 한 번에 입력 받을 수 있다.
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

		while (cin.get(ch)) // 빈칸도 읽어서 출력
			cout << ch;
	}
	*/

	// Example 5
	/*
	{
		char buf[5];

		cin.get(buf, 5); // cin.get으로 빈 칸을 입력받으면서 배열에 저장하기
		cout << buf << '\n';

		cin.get(buf, 5); // cin.get으로 빈 칸을 입력받으면서 배열에 저장하기
		cout << buf << '\n';

	}
	*/

	// Example 6
	/*
	{
		char buf[5];

		cin.get(buf, 5); 
		cout << cin.gcount() << " " << buf << '\n'; // cin.gcount()로 방금 몇 글자 읽었는지 알 수 있다

		cin.get(buf, 5); 
		cout << cin.gcount() << " " << buf << '\n';

	}
	*/

	// Example 7
	/*
	{
		char buf[5];

		cin.getline(buf, 5); // 버퍼에서 한 줄을 통째로 다 읽어오기
		cout << cin.gcount() << " " << buf << '\n';

		cin.getline(buf, 5); 
		cout << cin.gcount() << " " << buf << '\n'; // 첫 번째 getline에 의해 다 읽어졌으므로 0

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

		//cin.getline(buf, 100); // 줄바꿈 기호까지 읽는다

		while (1)
		{
			cin.get(buf, 100); // 줄바꿈 기호는 빼고 읽는다
			cout << cin.gcount() << " " << buf << '\n';
		}


		//cin.getline(buf, 100);
		//cout << cin.gcount() << " " << buf << '\n'; // 첫 번째 getline에 의해 다 읽어졌으므로 0


	//*/

	// Example 9
	/*
	{
		string buf;
		
		while (1)
		{
			getline(cin, buf); // string을 쓸 때의 getline은 파라미터로 cin이 들어간다
			cout << cin.gcount() << " " << buf << '\n'; // cin을 쓴 게 아니라서 cin.gcount()는 0이다
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

	// 스크린 입출력에 쓰려고 배우기보다는 파일 입출력 할 때 유용하다

	// Example 11
	/*
	{
		char buf[1024];

		cout << "peek: " << (char)cin.peek() << '\n'; // cin.peek()은 버퍼를 들여다보기만 하고 꺼내지는 않는 용도

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
		cin.unget(); // 마지막에 읽은 글자를 버퍼로 다시 집어넣음

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
		cin.putback('A'); // 원하는 글자를 버퍼에 집어넣음

		cin >> buf;
		cout << buf << endl;

	}
	//*/

	return 0;
}