/*

TCP/IP 네트워킹에 대해 알아봅시다
이번 강의에서는 Boost 라이브러리의 asio 모듈을 이용해서 iostream과 거의 유사한 방법으로 소켓 프로그래밍을 해봅니다

서버-클라이언트 모델: 온라인 게임에서 사용
서버가 처음 하는 일은 켜지고 클라이언트가 접속하기를 기다리는 것

이 예제를 실습하려면 boost 라이브러리가 필요하므로 vcpkg를 사용해서 설치합니다.
boost 라이브러리는 표준에 들어가기를 기다리는 예비 표준 정도로 사용됩니다

간혹, 설치는 됐는데 비주얼 스튜디오에서 include로 인식을 못하면 vppkg integrate install 명령어를 치세요

boost 라이브러리 매뉴얼은 초보자가 읽기에 조금 어려울 수 있습니다.

boost asio를 사용할 수 있는 상태라면 #include <boost/asio.hpp> 에 에러가 안뜰겁니다.

예제를 봅시다.

using boost::asio::ip::tcp; 네임스페이스가 아주 깁니다.

try-catch 문이 있는데, 네트워크 프로그래밍할때는 여러가지 불안정한 상태도 고려해야 하기 때문에
예외처리를 사용하는게 기본입니다.

tcp/ip같은 경우는 주고받고를 명확히 확인합니다. 그래서 아주 빈번하게 주고받아야 하는 게임서버에서는 udp를 대신 사용하기도 합니다.

acceptor, endpoint라는게 있습니다.
endpoint는 통신을 하는 끝 점으로 종이컵 전화기의 종이컵같은 겁니다.
tcp가 버전4가 있고 버전6가 있는데 예제에서는 버전 4를 씁니다.
13은 포트넘버입니다. 포트는 똑같은 인터넷 회선 안에서 회선이 여러개 있는 것처럼 나눠주는 역할을 합니다.
텔레비전 회선은 하나지만 채널은 여러개인 것처럼요.

어쨌든 일단 네트워킹이 이루어지기 위해서는 서버는 자신이 구동되면서 자신이 가지고 있는 ip주소를 가지고 시작합니다.
(그래서 서버 코드에는 ip를 설정하는 부분이 없습니다)
13은 나는 이 포트넘버로 통신하겠다는 의미로 설정합니다. 

for문 무한반복을 돌립니다.
서버는 기본적으로 여러 컴퓨터가 임의로 접속하고 나가는 상황을 가정하므로 무한루프로 돌립니다.

서버가 접속한 클라이언트에 Hello From Server를 보낼겁니다.

boost::asio::ip::tcp::iostream stream;
printf와 cout을 비교했을 때 printf 쓰지 왜 cout을 쓰냐는 질문이 많은데,
연산자 오버로딩을 통해 파일 입출력이나 네트워킹에도 같은 코드를 쓸 수 있습니다.

boost::system::error_code ec; 어떤 에러코드가 나타날지 미리 선언합니다
요즘에는 리턴값으로 받는게 추세긴 한데, 여기서는 파라미터로 넣어 출력값처럼 받습니다.

그다음에 acceptor를 보죠.
endpoint와 accpetor가 연결돼 있습니다. acceptor를 만들때 endpoint를 주죠.
acceptor.accept를 하고 시작합니다.

acceptor.accept(*stream.rdbuf(), ec); 클라이언트가 접속을 하면 rdbuf로 읽습니다.

if(!ec) -> 클라이언트가 제대로 접속이 됐다면

스트림에서 getline으로 입력을 받습니다.
tcp/ip 통신을 그냥 스트림처럼 쓰면 됩니다.

주거니 받거니 할 때 getline으로 받으니까 마지막에 endl을 꼭 보냅니다.

이때 주의해야 할 것은.. receive코드와 send 코드가 있는데
어떠한 데이터를 언제 주고 받을 지 약속이 되어있어야 합니다

만약에 if(!ec)로 들어가지 못했으면 다시 올라가서 클라이언트가 접속을 할 때까지 계속 돕니다

그리고 이 과정에서 문제가 생기면 try-catch문에서 받을 수 있습니다

네트워크 프로그래밍에서 번거로운 점 하나는
클라/서버 코드가 분리되어 있고 테스트하기가 불편하다는 거죠

클라이언트 코드를 보겠습니다
제가 보통은 솔루션을 하나만 만드는데
이번 강의에서는 보기에 편하시라고 별도의 솔루션으로 나눴습니다

streaming style이라고 주석을 달아놨는데요
tcp/ip 통신을 직접 소켓을 열고 닫으면서 구현하는 예제도 있어요
조금 더 로우레벨에서 소켓 예제를 보고싶으신 분들은 보시고
네트워킹하는 아주 많은 예제들이 있습니다

코드를 보면
main
try catch
조금 특이한건 argument로 서버의 주소를 입력받고 있어요
이 예제를 실행시킬때는 Properties->Debugging->Command Argument에 127.0.0.1(내컴퓨터) 또는 접속하려는 서버컴퓨터의 ip 주소를 적으면 됩니다

argument가 없을 때에는 실행이 안되고 종료합니다.

있으면 stream을 만들 때 입력한 주소를 넣습니다. 포트넘버도 13으로 넣고요

만약 하드웨어적인 문제로 스트림이 안만들어지면 메세지가 나오고 끝납니다

hello from client와 endl을 보냅니다

아까 서버 구현에서 봤듯이 주고받기로 했으므로 그런 구조로 되어있어요

설명을 길게 하고 있는데 개념은 아주 간단합니다.
tcp/ip를 사용하고 프로그램 두개가 서로 데이터를 주고받는거만 차이가 있고 stream을 사용하는겁니다

서버 먼저 실행을 시켜봅니다
check1까지 진행후 acccept로 기다리고 있어요
클라이언트를 실행하면 클라이언트가 서버로 메시지를 보내고 종료합니다
서버는 메시지를 받고 출력하고 다시 accept를 기다립니다
순식간에 일어나지만 내부를 들여다보면 데이터를 주고받는걸 알 수 있습니다

흥미가 생기신 분들을 위해 추가적으로 할 수 있는걸 알려드릴게요
채팅 프로그램을 만들어 보세요
todo 1. 한명이 먼저 얘기하고 다른 사람이 먼저 얘기하고 주거니 받거니 할 수 있게

todo 2. 근데, 채팅이란게 꼭 번갈아가면서 하진 않잖아요
그럴때는 어떻게 구현할지 한 번 풀어보세요

todo 3. 멀티스레딩을 사용해서 훨씬 많은 클라이언트가 접속해도 처리되도록 해보세요

*/
