// 2-9

#include <iostream>
#include <string>

int main()
{
	std::cout << "ù��° ���ڸ� �Է��Ͻÿ�: ";

	std::string num1;
	std::cin >> num1;

	std::cout << "�ι�° ���ڸ� �Է��Ͻÿ�: ";
	
	std::string num2;
	std::cin >> num2;

	if (num1 > num2) {
		std::cout << "�� ū ���ڴ� " + num1 + "�Դϴ�.\n";
	}
	else {
		std::cout << "�� ū ���ڴ� " + num2 + "�Դϴ�.\n";
	}


	



}