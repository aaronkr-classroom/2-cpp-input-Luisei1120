//chp1ex0
#include <iostream>
#include <string>
int main()
{
	std::cout << "What's your name?";
	std::string name;
	std::cin >> name;

	//출력하려는 메시지를 구성
	const std::string greeting = "Hello, " + name + "!";

	//인사말의 두 번재 행과 네 번째 행
	const std::string spaces(greeting.size(), ' ');
	const std::string second = "* " + spaces + " *";

	//인사말의 첫 번재 행과 다섯 번재 행
	const std::string first(second.size(), '*');

	//모두 출력
	std::cout << std::endl;
	std::cout << first << std::endl;
	std::cout << second << std::endl;
	std::cout << "* " << greeting << " *" << std::endl;
	std::cout << second << std::endl;
	std::cout << first << std::endl;

	return 0;
}