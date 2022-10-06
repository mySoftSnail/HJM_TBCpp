/*

�پ��� ����� ���� ���α׷����� �����ϰų� ���� �ð� ������ ���� �ܺ� ���̺귯��, ���¼ҽ��� ����ϰ� �Ѵ�
C++, Ư�� ���־� ��Ʃ����� ����� ��� vcpkg�� ����ϸ� �ܺ� ���̺귯���� ���� ���ϰ� ����� �� �ִ�.
���������δ� ������ �ڵ��ϸ� ���� ����ҰŶ�� �����Ѵ�!

���ۿ��� vcpkg�� �˻��� ����꿡 ����. 'C++ Library Manager for Windows'��� ���� �ִ�.
README�� �а� ��ġ����.
1. �� cmd�� ����
2. ��ġ ��ҷ� �̵��Ѵ�
3. git clone '�ּ�' ��ɾ ģ��. �ڵ����� vcpkg ������ �����.
4. cd vcpkg
5. bootstrap-vcpkg.bat ��ġ ������ �����Ѵ�

�����Ƽ� boost ���̺귯���� ��ġ�غ���
vcpkg.exe install "��ġ�ϰ��� �ϴ� ���̺귯�� �̸�"
��) vcpkg.exe install boost -> x86�� ��ġ��
vcpkg.exe install boost:x64-winidows -> x64�� ��ġ
vcpkg.exe install sdl2:x64-winidows -> sdl2�� x64�������� ��ġ

vcpkg integrate install ��ɾ ġ��
���־� ��Ʃ������� �ڵ����� include �� �� �ְ� �ȴ� ���� ���ϴ�

vcpkg search eigen3 'eigen3' ���̺귯���� vcpkg�� ��ġ�� �� �ִ��� �˻�
vcpkg search opengl

vcpkg list ��pc�� ��ġ�� ���̺귯���� ���� �ִ��� �˾ƺ���

��ġ�� ���̺귯���� vs���� ����Ҷ��� #include <boost/asio.hpp> �̷��� ���� ���� �ȴ�.
������ �ܺ� ���̺귯���� ������ ������ ������Ʈ ��Ŭ�� -> Propreties -> C/C++ -> General -> Additional Include Directiories ����
������ ���� ���� ������ϵ��� ��ġ�� �� ����, Linker -> General -> Additional Library Directories���� ������ �������� ����� �Ѵ�
�� �۾��� vcpkg�� �̹� ����� ������ �׳� include �ϸ� �Ǵ� ��

�׸��� x64/x86 ������ ���缭 ���带 �ؾ� �ϱ� ������ ���־� ��Ʃ��� ���õ� ����� �Կ� ��������.

*/