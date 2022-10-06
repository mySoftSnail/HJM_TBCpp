/*

다양한 기능을 가진 프로그래밍을 개발하거나 개발 시간 단축을 위해 외부 라이브러리, 오픈소스를 사용하곤 한다
C++, 특히 비주얼 스튜디오를 사용할 경우 vcpkg를 사용하면 외부 라이브러리를 아주 편리하게 사용할 수 있다.
개인적으로는 앞으로 코딩하며 많이 사용할거라고 생각한다!

구글에서 vcpkg를 검색해 깃허브에 들어간다. 'C++ Library Manager for Windows'라고 써져 있다.
README를 읽고 설치하자.
1. 깃 cmd를 연다
2. 설치 장소로 이동한다
3. git clone '주소' 명령어를 친다. 자동으로 vcpkg 폴더가 생긴다.
4. cd vcpkg
5. bootstrap-vcpkg.bat 배치 파일을 실행한다

시험삼아서 boost 라이브러리를 설치해보자
vcpkg.exe install "설치하고자 하는 라이브러리 이름"
예) vcpkg.exe install boost -> x86용 설치됨
vcpkg.exe install boost:x64-winidows -> x64용 설치
vcpkg.exe install sdl2:x64-winidows -> sdl2를 x64버전으로 설치

vcpkg integrate install 명령어를 치면
비주얼 스튜디오에서 자동으로 include 할 수 있게 된다 정말 편하다

vcpkg search eigen3 'eigen3' 라이브러리가 vcpkg로 설치할 수 있는지 검색
vcpkg search opengl

vcpkg list 내pc에 설치한 라이브러리가 뭐가 있는지 알아본다

설치한 라이브러리를 vs에서 사용할때는 #include <boost/asio.hpp> 이렇게 갖다 쓰면 된다.
원래는 외부 라이브러리를 가져다 쓰려면 프로젝트 우클릭 -> Propreties -> C/C++ -> General -> Additional Include Directiories 에서
가져다 쓰고 싶은 헤더파일들의 위치를 다 적고, Linker -> General -> Additional Library Directories에서 일일히 수동으로 적어야 한다
그 작업을 vcpkg가 이미 해줬기 때문에 그냥 include 하면 되는 것

그리고 x64/x86 버전에 맞춰서 빌드를 해야 하기 때문에 비주얼 스튜디오 세팅도 맞춰야 함에 유념하자.

*/