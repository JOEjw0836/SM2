#include <iostream>

int main() {
	//배열문 : 변수[크기] = { "1", "2", "3",,,} --> 선언 시 크기 정해야함

	//int num; //변수의 선언
	//num = 0; //변수 초기화

	//std::string fruit[3]; // 배열의 선언
	//fruit[0] = "apple";
	//fruit[1] = "banana";
	//fruit[2] = "grape";

	/*std::string fruit[3] = {"apple", "banana", "grape"};

	std::cout << "fruit" << std::endl;
	std::cout << "-----" << std::endl;
	std::cout << fruit[0] << std::endl;
	std::cout << fruit[1] << std::endl;
	std::cout << fruit[2]<<std::endl;


	for (int i = 0; i < 3; i++) {
		std::cout << fruit[i] << std::endl;
	}
	//sizeof() : 변수의 크기를 byte단위로
	for (int i = 0; i < sizeof(fruit) / sizeof(fruit[0]); i++) {
		std::cout << fruit[i] << std::endl;
	}
}

//다차원 배열

	//int num[행][열];

	//int num[2][3] = { {2,2,2,}, {3,2,1} };
	/*int i, j;
	char word[2][4] = { {'a', 'b', 'c', 'd'}, {'e','f','g','h'} };

	//std::cout << word;


	for (i = 0; i < 2; i++) {
		for (j = 0; j < 4; j++) {
			std::cout << word[i][j] << " ";
		}std::cout << std::endl;
	}
}
	//for - each 문법 : ex) for(auto n : num2){};

//실습1 배열 사용해보기


#include <iostream>

int main() {
	int i;
	std::string city[5] = { "KOR", "USA", "JPN", "CHN", "RUS" };

	for (i = 0; i < 5; i++) {
		std::cout << city[i] << std::endl;
	}
}



//실습2 배열 사용해보기

#include <iostream>

int main() {

	std::string city2[5];

	for (int i = 0; i < 5; i++) {
		std::cout << "나라 5개를 입력하시오 : ";
		std::cin >> city2[i];
		
		
	}
	for (int i = 0; i < 5; i++) {
		std::cout << std::endl;
		std::cout << city2[i];
	}
	

	
}

//실습3 배열 활용하기

#include <iostream>

int main() {
	
	int grade[5];
	int sum = 0;
	//double avg = 0;

	for (int i = 0; i < 5; i++) {
		std::cout << i+1 << "번 학생의 성적을 입력하세요 : ";
		std::cin >> grade[i];
		sum = sum + grade[i];
	}
	std::cout << "성적평균 : " << double(sum)/5;
}

//동적배열과 포인터

int n = 3;
int* p = &n; --> p에 n의 주소값을 저장한다는 의미

std::cout << p;
그냥 변수이름으로 접근하면, 주소값 출력(n의 주소값)

std::cout << *p;
3이 출력, p가 가리키는 주소에 들어간 실제 값을 출력

#include <iostream>

int main() {
	std::string str = "aaa";
	std::string* str_p = &str;

	std::cout << str_p << std::endl;
	std::cout << *str_p;
}

#include <iostream>
int main() {
	
	int n = 3;
	int& num = n;
	
	std::cout << n << std::endl;
	std::cout << num << std::endl;
	std::cout << &n << std::endl;
	//std::cout << *num << std::endl;
	std::cout << &num << std::endl;
}

#include <iostream>

int main() {
	//포인터를 이용하면, 동적 메모리를 생성할 수 있다.
	//포인터가 나오기 전의 변수들은, 정적 메모리

	int n = 3;
	int* p = &n;
	int* p = new int; //동적 메모리 할당

	delete p; // p가 필요없어지는 순간에 제거해줘야함

	int num;
	std::cout << "크기를 입력하세요";
	std::cin >> num;
	int* arr = new int[num];

	for (int i = 0; i < num; i++) {
		arr[i] = i + 1;
	}
	for (int i = 0; i < num; i++) {
		std::cout << arr[i] << " ";
	}
	delete[] arr;

	//num * num 행렬 만들기

	int num = 5;
	int** arr = new int* [num]; //2차 행렬이기 때문

		for (int i = 0; i < num; i++) {
			arr[i] = new int[num];
		}
		for (int i = 0; i < num; i++) {
			for (int j = 0; j < num; j++) {
				arr[i][j] = 1;
				std::cout << arr[i][j] << " ";
			}
		}std::cout << std::endl;

		for (int i = 0; i < num; i++) {
			delete[] arr[i];
		}
		delete[] arr;

}



//실습 1 동적 배열 사용해보기


#include <iostream>

int main() {
	int x, y;
	int num = 0;
	while (1) {
		std::cout << "x를 입력하세요 : ";
		std::cin >> x;
		std::cout << "y를 입력하세요 : ";
		std::cin >> y;
		if (x < 0 || y < 0) {
			std::cout << "x와 y모두 양수를 입력해주세요" << std::endl;
		}
		else {
			break;
		}
	}
	int** arr = new int* [x];
	for (int i = 0; i < x; i++) {
		arr[i] = new int[y];
	}
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			arr[i][j] = ++num;
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
	for (int i = 0; i < x; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}


//번외 실습2

#include <iostream>

int main() {
	
	int num;
	double sum = 0;
	
	
	std::cout << "학생의 수를 입력하세요 : ";
	std::cin >> num;
	int* students = new int[num];

	for (int i = 0; i < num; i++) {
	
		std::cout << i + 1 << "번 학생의 성적은 : ";
		std::cin >> students[i];

		sum = sum + students[i];
	}
	std::cout << "성적 평균은 : ";
	std::cout << double(sum) / num;
}


