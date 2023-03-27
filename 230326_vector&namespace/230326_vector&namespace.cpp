/*#include <iostream>
#include <vector>

int main() {
	std::vector<int> v = { 1, 2, 3 };

	v.assign(5, 2);
	v.push_back(7);
	v.push_back(6);
	v.pop_back();

	for (int i = 0; i < v.size(); i++) {
		std::cout << v.at(i) << std::endl;

	}
	*/
	
	
//실습 1 vetor사용해보기


/*#include <iostream>
#include <vector>

int main(){


	int x, y;

	while (1) {
		
			std::cout << "x를 입력하세요 : ";
			std::cin >> x;
			std::cout << "y를 입력하세요 : ";
			std::cin >> y;
			if (x > 0 && y > 0) {

			break;
		}
		else {
			std::cout << "x와 y 모두 양수를 입력하세요." << std::endl;
		}

		}

	std::vector<std::vector<int>> arr;
	arr.assign(x, std::vector<int>(y, 0));
	int cnt = 1;

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			arr[i][j] = cnt++;
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
	
	
	
}
*/

//실습2 vector 사용해보기

/*#include <iostream>
#include <vector>

int main() {
	int num;
	int sum = 0;

	std::vector<int> v;

	std::cout << "사용자가 입력한 숫자 더하기" << std::endl;
	
	while (1) {
		std::cout << "숫자를 입력하세요 (0 : exit) : ";
		std::cin >> num;
		if (num == 0) {
			break;
		}
		v.push_back(num);
	}
	for (int i = 0; i < v.size(); i++) {
		sum = sum + v.at(i);
	}
	std::cout << "사용자가 입력한 수의 합은 : ";
	std::cout << sum;
}
*/

/*
#include <iostream>
#include <vector>

namespace test {
	int num = 1;
	int sum(int n, int n2) {
		return 0;
	}
}

namespace test_1 {
	int num = 1;
	int sum(int n, int n2) {
		return 0;
	}
}

using namespace std;
using test::num;

int main() {
	int num = 0;
	cout << num << endl;
	cout << test::num << endl;
	cout << test_1::sum << endl;
}
*/


/*
#include <iostream>
#include <vector>

using namespace std;

namespace wooriBank {
	int balance = 0;
	double deposit(int money) {
		double money_d = (double)money;
		return money_d + 0.03 * money_d;
	}
}

namespace hanaBank {
	int balance = 0;
	double deposit(int money) {
		double money_d = (double)money;
		return money_d + 0.05 * money_d;
	}
}

int main() {
	int money;
	std::string bank;

	cout << "은행 돈을 순서대로 띄어쓰기를 기준으로 입력하세요 : ";
	cin >> bank >> money;

	if (bank == "우리") {
		cout << "예상 출금 금액 : " << wooriBank::deposit(money);
	}
	else if (bank == "하나") {
		cout << "예상 출금 금액 : " << hanaBank::deposit(money);
	}
	else {
		cout << "은행이 잘못되었습니다";
	}
}
*/

//실습 1 namespace 사용해보기

/*
#include <iostream>
#include <vector>

namespace seoul {
	std::string num = "02";
	std::string landmark = "남산타워";

}

namespace busan {
	std::string num = "051";
	std::string landmark = "해운대";
}

using namespace busan;

int main() {
	std::cout << "서울의 지역번호는 " << seoul::num << "이고 랜드마크는 " << seoul::landmark << std::endl;
	std::cout << "부산의 지역번호는 " << num << "이고 랜드마크는 " << landmark << std::endl;

	
}
*/


