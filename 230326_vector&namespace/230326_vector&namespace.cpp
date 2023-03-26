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


//#include <iostream>
//#include <vector>
//
//int main(){
//
//
//	int x, y;
//
//	while (1) {
//		
//			std::cout << "x를 입력하세요 : ";
//			std::cin >> x;
//			std::cout << "y를 입력하세요 : ";
//			std::cin >> y;
//			if (x > 0 && y > 0) {
//
//			break;
//		}
//		else {
//			std::cout << "x와 y 모두 양수를 입력하세요." << std::endl;
//		}
//
//		}
//
//	std::vector<std::vector<int>> arr;
//	arr.assign(x, std::vector<int>(y, 0));
//	int cnt = 1;
//
//	for (int i = 0; i < x; i++) {
//		for (int j = 0; j < y; j++) {
//			arr[i][j] = cnt++;
//			std::cout << arr[i][j] << " ";
//		}
//		std::cout << std::endl;
//	}
//	
//	
//	
//}


//실습2 vector 사용해보기

#include <iostream>
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