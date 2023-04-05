//멤버 : 변수(필드), 메소드들을 통틀어 이르는 말

#include <iostream>

using namespace std;

class Person {
public:
	static int static_var;
	static void static_method() {
		//일반 멤버(변수)는 static 생성자 내부에 사용 불가능
		//같은 static만 사용가능 --> 반대로 일반멤버에서는 static 사용가능
	}
	string name;
};
int Person::static_var = 0; //static은 초기화가 필수임
							//static은 객체를 생성하지 않아도 사용 가능
//일반 멤버(변수)들은 객체생성을 안하면 사용불가
//static은 class에 적히는 순간 사용가능

int main() {
	Person::static_var = 5; //이렇게도 호출 가능
	Person p;
	p.name = "홍길동";
	p.static_var = 5;

	cout << p.name << endl;
	cout << p.static_var<< endl;

	Person p2;
	p2.name = "성춘향";
	p2.static_var = 2;

	cout << p2.name << endl;
	cout << p2.static_var;
}



//실습1 static 멤버

/*
#include <iostream>
#include <vector>
using namespace std;

class Snack {
protected:
	string name;
	static int cnt;
public:
	Snack(string name) {
		this->name = name;
		plusCnt();
	}
	static int getCnt() {
		return cnt;
	}
	void plusCnt() {
		cnt++;
	}
	virtual void printName() {
		cout << name;
	}
};
int Snack::cnt = 0;

class Candy : public Snack {
protected:
	string flavor;
public:
	Candy(string flavor) : Snack("사탕") {
		this->flavor = flavor;
	}
	void printName() {
		cout << flavor << "맛 사탕입니다" << endl;
	}
};

class Chocolate : public Snack {
protected:
	string shape;
public:
	Chocolate(string shape) : Snack("초콜릿") {
		this->shape = shape;
	}
	void printName() {
		cout << shape << "모양 초콜릿입니다" << endl;
	}
};

int main() {

	int num;
	string flavor, shape;
	vector<Snack*> v;
	while (1) {
		cout << "과자 바구니에 추가할 간식을 고르시오(1:사탕, 2:초콜릿, 0:종료)" << endl;
		cin >> num;

		switch (num) {
		case 0: 
			cout << "과자 바구니에 담긴 간식의 개수는 " << Snack::getCnt() << "개\n";
			cout << "과자 바구니에 담긴 간식 확인하기\n";
			for (int i = 0; i < v.size(); i++) {
				v[i]->printName();
				cout << endl;
			}
			return -1;
		case 1: 
			cout << "맛을 입력하세요 : ";
			cin >> flavor;
			v.push_back(new Candy(flavor));
			break;
		case 2:
			cout << "모양을 입력하세요 : ";
			cin >> shape;
			v.push_back(new Chocolate(shape));
			break;
		case 3:
			cout << "0~2를 입력하세요\n";
			break;
		}
	}
}
*/

//실습2 static 멤버

/*
#include <iostream>
using namespace std;

class Introduce {
public:
	static string introduce() {

	}
	string name;
};


int main() {
	string name;
	Introduce i;
	i.introduce = "조장원";

	while (1) {
		cout << "이름쌓기 이름쌓기 : ";
		cin >> name;
	}
}
*/




















/*
#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::endl;

class Person {
	static int cnt;
	string name;
public:
	Person(string name) {
		this->name = name;
		plusCnt();
	}
	static int getCnt() {
		return cnt;
	}
	void plusCnt() {
		cnt++;
	}
};

int Person::cnt = 0;

class Student : public Person {
public:
	Student(string name) : Person(name) {
		cout << "Student 생성자" << endl;
	}
};

int main() {
	Person p("김소연");
	Person p2("채동현");

	cout << "인원 : " << Person::getCnt() << endl;

	Student p3("채동현");

	cout << "인원 : " << Person::getCnt() << endl;
	return 0;
}
*/