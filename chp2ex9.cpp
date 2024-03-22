// 2-9

#include <iostream>
#include <string>

int main()
{
	std::cout << "첫번째 숫자를 입력하시오: ";

	std::string num1;
	std::cin >> num1;

	std::cout << "두번째 숫자를 입력하시오: ";
	
	std::string num2;
	std::cin >> num2;

	if (num1 > num2) {
		std::cout << "더 큰 숫자는 " + num1 + "입니다.\n";
	}
	else {
		std::cout << "더 큰 숫자는 " + num2 + "입니다.\n";
	}


	



}