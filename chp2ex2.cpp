// 2-2

#include <iostream>
#include <string>

// ǥ�� ���̺귯������ �����ͼ� ����� �̸��� ���
using std::cin; using std::endl;
using std::cout; using std::string;

int main()
{
	// �̸��� ����
	cout << "Please enter your first name: ";

	// �̸��� �Է�
	string name;
	cin >> name;

	// ����Ϸ��� �޽��� ����
	const string greeting = "Hello, " + name + "!";

	// �λ縻�� �� �� �׵θ� ������ ���� ����
	const int pad = 10;

	// ����� ���� ��ü ����
	const int rows = pad * 2 + 3;
	const string::size_type cols = greeting.size() + pad * 2 + 2;

	// �Է°� ����� �����Ϸ��� �� ���� �ǳʶ�
	cout << endl;

	// rows��ŭ�� ���� ���
	//�Һ���: ���ݱ��� r���� ���� ���
	for (int r = 0; r != rows; ++r) {
		string::size_type c = 0;

		//�Һ���: ���� �࿡�� c�� ���ڸ� ���
		while (c != cols) {
			// �λ縻 ��� ���θ� �Ǻ�
			if (r == pad + 1 && c == pad + 1) {
				cout << greeting;
				c += greeting.size();
			}
			else {
				//�׵θ� ��� ���θ� �Ǻ�
				if (r == 0 || r == rows - 1 ||
					c == 0 || c == cols - 1)
					cout << "*";
				else
					cout << " ";
				++c;
			}// if-else ��
		}// while ��
		cout << endl;
	} // for ��
	return 0;
}// main �� 