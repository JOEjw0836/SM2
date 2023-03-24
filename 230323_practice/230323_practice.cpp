#include <iostream>

int main() {
	std::string str1 = "------실습1-------";
	std::string str2 = "나이를 입력하세요.";
	int age;

	std::cout << str1;
	std::cout << "\n";
	std::cout << str2;
	std::cout << "\n";
	std::cin >> age;
	
	if (age >= 1 && age <= 7) {
		std::cout << "유아";
	}
	else if (age <= 13) {
		std::cout << "초등학생";
	}
	else if (age <= 16) {
		std::cout << "중학생";
	}
	else if (age <= 19) {
		std::cout << "고등학생";
	}
	else if (age >= 20 && age < 200) {
		std::cout << "성인";
	}
	else {
		std::cout << "나이가 너무 많습니다..!";
	}

	std::string str3 = "------실습2------";
	std::string str4 = "이름을 입력하세요.";
	std::string name;

	std::cout << "\n";
	std::cout << str3;
	std::cout << "\n";
	std::cout << str4;
	std::cout << "\n";

	std::cin >> name;

	if (name == "홍길동") {
		std::cout << "남자";
	}
	else if (name == "성춘향") {
		std::cout << "여자";
	}
	else {
		std::cout << "모르겠어요.";
	}

	std::string str5 = "------실습3------";
	std::string str6 = "숫자를 입력하세요.";
	int num;

	std::cout << "\n";
	std::cout << str5;
	std::cout << "\n";
	std::cout << str6;

	std::cin >> num;

	num % 5 == 0 ? std::cout << num << "는 5의 배수" : std::cout << num << "는 5의 배수가 아님";

	std::string str7 = "------실습4-------";
	std::string str8 = "연산할 정수 두 개를 입력하시오";
	std::string str9 = "연산자를 입력하시오";
	std::string str10 = "------";
	
	

	int num1;
	int num2;
	char calc;

	std::cout << "\n";
	std::cout << str7;
	std::cout << "\n";
	std::cout << str8;
	std::cout << "\n";
	std::cin >> num1;
	std::cin >> num2;
	std::cout << "\n";
	std::cout << str9;
	std::cout << "\n";
	std::cin >> calc;
	std::cout << "\n";	
	std::cout << str10;
	std::cout << "\n";

	if (calc == '+' ) {
		std::cout << num1 + num2;
	}
	else if (calc == '-') {
		std::cout << num1 - num2;
	}
	else if (calc == '*') {
		std::cout << num1 * num2;
	}
	else if (calc == '/') {
		std::cout << "몫:" << num1 / num2 << "나머지는" << num1 % num2 << "입니다.";
	}
	else {
		std::cout << "다시 입력하세요";
	}









}