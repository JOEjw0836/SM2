
#include <iostream>
using namespace std;
class Person {
protected:
	string name;
	int age;
public:
	//public : 모든곳에서 접근가능
	//protected : 자기자신과 하위 클래스에서 접근가능
	Person(string name) {
		this->name = name;
	}
	Person(string name, int age) {

	}
	void sleep() {
		cout << "잠자기";
	}
};
class Student : public Person {
public:
	//Student는 Peson의 하위클래스
	Student() : Person("aaa") {
		//상위클래스의 생성자를 선택1
	}
	Student(string name, int age) : Person(name, age) {
		//생성자 선택2
		this->name = name; //위에서 protected해줬기 때문에 가능.
	}
	void study() {
		sleep();
		cout << "공부하기";
	}
};
int main() {
	Person p = Person("조장원");
	Student s = Student("조장원",27);
}


//실습1 상속 사용해보기

#include <iostream>
using namespace std;

class Shape {
protected:
	int num, length;
public:
	Shape(int num, int length) {
		this->num = num;
		this->length = length;
	}
	void output_r() {
		cout << "사각형의 변의 개수 : " << num << endl;
		cout << "사각형의 가로길이 : " << length << endl;
	}
	void output_t() {
		cout << "삼각형의 변의 개수 : " << num << endl;
		cout << "삼각형의 밑변길이 : " << length << endl;
	}
};
class Rectangle : public Shape {
	int width_r;
public:
	Rectangle(int num, int length) : Shape(num, length) {
		this->num = num;
		this->length = length;
	}
	void area() {
		output_r();
		cout << "사각형의 세로길이를 적으세요 : ";
		cin >> width_r;
		cout << "사각형의 넓이는 : ";
		cout << width_r * length << endl;
	}
};
class Triangle : public Shape {
	int width_t;
public:
	Triangle(int num, int length) : Shape(num, length) {
		this->num = num;
		this->length = length;
	}
	void area() {
		output_t();
		cout << "삼각형의 높이를 적으세요 : ";
		cin >> width_t;
		cout << "삼각형의 넓이는 : ";
		cout << width_t * length / 2;
	}
};
int main() {
	Rectangle r = Rectangle(4,4);
	Triangle t = Triangle(3,4);

	
	r.area();
	cout << endl;
	t.area();
}



//실습1 (선생님)


#include <iostream>
using namespace std;

class Shape {
protected:
	int num; //변의 개수
	int width; //밑변의 길이

public:
	void printInfo() {
		cout << "변의 개수는 : " << num << endl;
		cout << "밑변의 길이는 : " << width << endl;
	}
};
class Rectangle : public Shape {
	int height; //세로길이
public:
	Rectangle(int width, int height) : Shape() {
		this->num = 4;
		this->width = width;
		this->height = height;
	}
	void area() {
		cout << "넓이는 : " << width * height;
	}
};
class Triangle : public Shape {
	int height;//높이
public:
	Triangle(int width, int height) : Shape() {
		this->num = 3;
		this->width = width;
		this->height = height;
	}
	void area() {
		cout << "넓이는 : " << width * height / 2;
	}
};

int main() {
	Rectangle r = Rectangle(5, 3);
	r.printInfo();
	r.area();
	Triangle t = Triangle(6, 4);
	t.printInfo();
	t.area();
}


//오버라이딩 수업내용


#include <iostream>
using namespace std;
class Person {
protected:
	string name;
	int age;
public:
	Person(int age, string name) {
		this->age = age;
		this->name = name;
	}
	//public : 모든곳에서 접근가능
	//protected : 자기자신과 하위 클래스에서 접근가능
	void sleep() { //상위에서 정의한 메소드를 하위에서 다시 정의
		cout << "잠자기" << endl;
	}
	int override_test(int num) {
		return num;
	}
	int getAge() {
		return age;
	}
};
class Student : public Person {
	string stu_id;
public:
	Student(int age, string name) : Person(age, name) {

	}
	void study() {
		cout << "공부하기" << endl;
	}
	void sleep() {
		cout << "10시에 잠자기" << endl;
	}
	int override_test(int num) {
		return num + getAge();
	}
};
int main() {
	Student s = Student(27, "홍길동");
	s.sleep();
	cout << s.override_test(10);
}


//실습 1. 오버라이딩 이해하기


#include <iostream>
using namespace std;

class Student {
protected:
	string name, school;
	int age, num;

public:
	Student(string name, string school, int age, int num) {

	}
	void lunch() {
		cout << "점심은 학식";
	}
};
class Kim : public Student {
public:
	Kim(string name, string school, int age, int num) : Student (name, school, age, num) {

	}
	void lunch() {
		cout << "이름 : ";
		cin >> name;
		cout << endl << "학교 : ";
		cin >> school;
		cout << endl << "나이 : ";
		cin >> age;
		cout << endl << "학번 : ";
		cin >> num;
		cout << endl << "점심은 김가네 김밥" << endl;
	}
};
class Baek : public Student {
public:
	Baek(string name, string school, int age, int num) : Student(name, school, age, num) {

	}
	void lunch() {
		cout << "이름 : ";
		cin >> name;
		cout << endl << "학교 : ";
		cin >> school;
		cout << endl << "나이 : ";
		cin >> age;
		cout << endl << "학번 : ";
		cin >> num;
		cout << endl << "점심은 백종원 피자" << endl;
	}
};

int main() {
	Kim k = Kim("김철수", "서울대학교", 27, 1111);
	Baek B = Baek("백종원", "종원대학교", 30, 2222);
	k.lunch();
	cout << endl;
	B.lunch();
}


//실습 1. 오버라이딩 (선생님)


#include <iostream>
using namespace std;

class Student {
protected:
	string name, school;
	int age, num;
public:
	void lunch() {
		cout << "점심은 학식" << endl;
	}
};
class Kim : public Student {
public:
	Kim(string name, string school, int age, int num) {
		this->name = name;
		this->school = school;
		this->age = age;
		this->num = num;
	}
	void lunch() {
		cout << "점심은 김가네 김밥" << endl;
	}
};
class Baek : public Student {
public:
	Baek(string name, string school, int age, int num) {
		this->name = name;
		this->school = school;
		this->age = age;
		this->num = num;
	}
	void lunch() {
		cout << "점심은 백종원 피자" << endl;
	}
};

int main() {
	Kim k = Kim("", "", 23, 11111);
	Baek b = Baek("", "", 27, 1111);

	k.lunch();
	b.lunch();
}

