/*
#include <iostream>
using namespace std;

class Person {
public:
	virtual void test() = 0;
	void sleep() {

	}
};
class Student : public Person {
public:
	void test() {
		cout << "test함수 입니다"; 
	} //이렇게 오버라이딩 해줘야 main에 객체 생성할수 있음
	//추상클래스가 하나 이상 존재한다면 전부 오버라이딩 해줘야함.
};
int main() {
	Student s = Student();
}
*/

//실습1 추상 클래스
/*
#include <iostream>
using namespace std;

class Shape {
	virtual void output() = 0;
};
class Circle : public Shape {
public:
	void output() {
		cout << "이 도형은 원입니다.\n";
	}
};
class Rect : public Shape {
public:
	void output() {
		cout << "이 도형은 사각형입니다.\n";
	}
};
class Tria : public Shape {
public:
	void output() {
		cout << "이 도형은 삼각형입니다.\n";
	}
};
int main() {
	Circle c = Circle();
	c.output();
	Rect r = Rect();
	r.output();
	Tria t = Tria();
	t.output();
}
*/

//실습 1 
/*
#include <iostream>
using namespace std;
class  Snack {
protected:
	string price, name, company;
public:
	void printName() {
		cout << "상품이름은 " << name << endl;
	}
};
class Candy : public Snack {
protected:
	string flavor;
public:
	Candy(string name) {

	}
	void snackBasket() {
		cout << "이 상품은 사탕입니다" << endl;
	}
};
	
class Chocolate : public Snack {
protected:
	string shape;
public:
	void snackBasket() {
		cout << "이 상품은 초콜릿입니다" << endl;
	}
};

int main() {
	Snack snackBasket[4] = { Candy(),Candy(), Chocolate(), Chocolate() };
}
*/

// 실습1 (선생님 풀이)
/*
#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

class Snack {
	int price;
	string name;
	string maker;
public:
	Snack(string name) {
		this->name = name;
	}
	void printName() {
		cout << "상품이름 : " << name << endl;
	}
};
class Candy : public Snack {
	string flavor;
public:
	Candy(string name) : Snack(name) {

	}
};

class Choco : public Snack {
	string shape;
public:
	Choco(string name) : Snack(name) {

	}
};

int main() {
	Snack snackBasket[4] = { Candy("츄파"), Candy("알사탕"), Choco("가나"),Choco("페레로") };
	for (int i = 0; i < 4; i++) {
		snackBasket[i].printName();
	}
}
*/


//업캐스팅 : 상위클래스의 포인터로 하위 클래스의 인스턴스를 가리키는것
//다운캐스팅 : 업캐스팅을 다시 원상복구하는 것

//Person *p = new Student(); //업캐스팅
//Student * stu = (Student*) p; // 다운캐스팅(원상복구)
//포인터로 객체를 만들면, p.test() -->(x)  p->test() -->(o)


/*
#include <iostream>
using namespace std;

class Snack {
protected:
	string flavor, shape, price, name, company;
public:
	Snack(string price, string name, string company) {
		this->price = price;
		this->name = name;
		this->company = company;
	}
	string getFlavor() {
		cout << "청포도사탕";
		return flavor;
	}
	string getShape() {
		cout << "가나 초콜릿";
		return shape;
	}
};
class Candy : public Snack {
public:
	void snackBasket() {

	}
};
class Chocolate : public Snack {

};
*/


//실습1 (선생님 풀이)
/*
#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

class Snack {
	int price;
	string name;
	string maker;
public:
	Snack(string name) {
		this->name = name;
	}
	void printName() {
		cout << "상품이름 : " << name << endl;
	}
};
class Candy : public Snack {
	string flavor;
public:
	Candy(string name) : Snack(name) {

	}
};

class Choco : public Snack {
	string shape;
public:
	Choco(string name) : Snack(name) {

	}
};

int main() {
	Snack* snackBasket[4] = { new Candy("츄파"), new Candy("알사탕"), new Choco("가나"), new Choco("페레로") };
	for (int i = 0; i < 4; i++) {
		snackBasket[i]->printName();
	}
}
*/


//실습1 간식바구니 (맛,모양 넣기)
/*
#include <iostream>
using namespace std;
class Snack {
protected:
	string price, name, company;
public:
	virtual void output() = 0;
};
class Candy : public Snack {
	string flavor;
public:
	Candy(string flavor, string price, string name, string company) : Snack() {
		this->flavor = flavor;
		this->price = price;
		this->name = name;
		this->company = company;
	}
	void output() {
		cout << "상품 이름 : " << name << endl;
		cout << "상품 가격 : " << price << endl;
		cout << "맛 : " << flavor << endl;
		cout << "제조 회사 : " << company << endl << endl;
	}
};
class Chocolate : public Snack {
	string shape;
public:
	Chocolate(string shape, string price, string name, string company) : Snack() {
		this->shape = shape;
		this->price = price;
		this->name = name;
		this->company = company;
	}
	void output() {
		cout << "상품 이름 : " << name << endl;
		cout << "상품 가격 : " << price << endl;
		cout << "모양 : " << shape << endl;
		cout << "제조 회사 : " << company << endl << endl;
	}
};
int main() {
	Snack* snackBasket[4] = { new Candy("딸기맛", "5000", "알사탕", "알회사"), new Candy("초코맛", "3000", "막대사탕", "막대회사"),
							new Chocolate("하트모양", "5000", "가나초콜릿", "가나회사"), new Chocolate("세모모양", "2000", "크런키", "쿠회사") };
	for (int i = 0; i < 4; i++) {
		snackBasket[i]->output();
	}
	for (int i = 0; i < 4; i++) {
		delete snackBasket[i];
	}
}
*/

/*
#include <iostream>

using namespace std;

class Person {
public:
	Person() {
		cout << "Person 생성자입니다" << endl;
	}
	virtual void sleep() { 
		cout << "잠자기" << endl; // 가상함수
	}
	~Person() {
		cout << "Peson 소멸자입니다" << endl;
	}
};
class Student : public Person {
public:
	virtual void sleep() {
		cout << "10시에 잠자기" << endl; //가상함수(오버라이딩) 재정의
	}
	virtual ~Student() {
		cout << "Student 소멸자입니다" << endl;
	}
};

int main() {
	Student s = Student();
	s.sleep(); //정적바인딩  --> 가상함수라서 하위클래스가 재정의 할것이라 기대함
				//하위클래스에 재정의 돼있으면 하위클래스가 나옴

	Person* s2 = new Student(); //업캐스팅
	s2->sleep(); //동적바인딩 --> 가상함수라서 하위클래스가 재정의 할것이라 기대함
				//하위클래스에 재정의 돼있으면 하위클래스가 나옴
				//하위클래스에 재정의 하지않으면 상위클래스가 나옴
	delete s2;
}
*/
/*
#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

//클래스는 필드, 메소드, 생성자, 소멸자로 구성됨.
//생성자 : 객체가 생성될 때 자동으로 실행되는 메소드
//소멸자 : 객체가 소멸될 때 자동으로 실행되는 메소드

class Person {
public:
	Person() {
		cout << "Person 생성자 입니다" << endl;
	}
	//가상함수 : 부모클래스에서 정의될 예정. 
	//자식클래스가 재정의(오버라이딩)할 것이라고 기대하는 함수
	//순수 가상함수 : 구현이 안되어 있는 함수 ( = 0)
	//virtual void sleep() = 0;
	virtual void sleep() { //가상 함수 : 동적 바인딩을 하기 위해
		cout << "잠자기" << endl;
	}

	virtual ~Person() {
		cout << "Person 소멸자 입니다" << endl;
	}
};

class Student : public Person {
public:
	Student() : Person() {
		cout << "Student 생성자 입니다" << endl;
	}
	void sleep() { //가상 함수를 재정의(오버라이딩)한 것
		cout << "10시에 잠자기" << endl;
	}
	~Student() {
		cout << "Student 소멸자 입니다" << endl;
	}
};

int main() {
	Student s = Student();
	//Person 생성자 입니다
	//Student 생성자 입니다
	s.sleep(); // 정적 바인딩 // 10시에 잠자기

	//Student* s = new Student();
	//Person* p = new Person();

	//Person p = Student();
	//p.sleep();

	Person* s2 = new Student(); //업캐스팅
	//Person 생성자 입니다
	//Student 생성자 입니다
	s2->sleep(); // 동적 바인딩 // 10시에 잠자기
	delete s2;
	//Student 소멸자 입니다 // 안나오네? 잉
	//Person 소멸자 입니다

	cout << "안녕하세요" << endl;


	//Student 소멸자 입니다
	//Person 소멸자 입니다
	return 0;
}
*/

//실습1 간식바구니

/*
#include <iostream>

using namespace std;


class Snack {
	int price;
	string name;
	string maker;
public:
	Snack(string name) {
		this->name = name;
	}
	void printName() {
		cout << "상품이름 : " << name << endl;
	}
};
class Candy : public Snack {
	string flavor;
public:
	Candy(string name) : Snack(name) {

	}
	void printFlavor(string flavor) {
		cout << flavor << " 사탕입니다" << endl;
	}
};

class Choco : public Snack {
	string shape;
public:
	Choco(string name) : Snack(name) {

	}
	void printShape(string shape) {
		cout << shape << " 모양 초콜릿입니다" << endl;
	}
};

int main() {
	Candy c = Candy("딸기맛");
	Candy c1 = Candy("초코맛");
	Choco ch = Choco("하트");
	Choco ch2 = Choco("바나나맛");
	Snack snackBasket1[2] = { Candy("츄파"), Candy("알사탕") };
	Snack snackBasket2[2] = { Choco("가나"), Choco("페레로") };

	snackBasket1[0].printName();
	c.printFlavor("딸기맛");
	snackBasket1[1].printName();
	c.printFlavor("초코맛");
	snackBasket2[0].printName();
	ch.printShape("하트");
	snackBasket2[1].printName();
	ch2.printShape("세모");
	
	
	//c.printFlavor("딸기맛");
	//ch.printShape("하트");
}
*/
