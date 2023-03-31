/*
#include <iostream>

using namespace std;

class Cat {
	string name;
	int age;

public:

	Cat(string name, int age) {
		this->name = name;
		this->age = age;
		cout << "고양이가 태어났습니다.\n";
	}
	Cat (){

	}

	void mew() {
		cout << "냐용\n";
	}
};


int main()
{
	Cat cat1("나비", 5);

	cat1.mew();
}
*/

//실습 1

/*
#include <iostream>

using namespace std;

class Rectangle {
	int width;
	int height;

public:
	Rectangle(int width, int height) {
		this->width = width;
		this->height = height;
	}
	int area() {
		return width * height;
	}
};

int main() {
	int width, height;
	cout << "사각형의 가로와 세로 길이를 입력해주세요(띄어쓰기로 구분) : \n";
	cin >> width;
	cout << endl;
	cin >> height;

	Rectangle rec(width, height);
	cout << endl;
	cout << rec.area();
}
*/


//실습2

/*
#include <iostream>

using namespace std;

class Rectangle {
	int width;
	int height;

public:

	int getWidth() {
		return width;
	}
	int getHeight() {
		return height;
	}
	void setWidth(int width) {
		this->width = width; //반환값이 없기때문에 void사용
	}
	void setHeight(int height) {
		this->height = height; //반환값(return)이 없기때문에 void사용
	}
	int area() {
		return width * height; 
	}
};

int main() {
	int width;
	int height;

	cout << "사각형의 가로와 세로 길이를 입력해주세요(띄어쓰기로 구분) : \n";
	cin >> width >> height;

	Rectangle rec;
	
	rec.setWidth(width);
	rec.setHeight(height);
	cout << "넓이는 : " << rec.area();
}
*/


//실습3

/*
#include <iostream>

using namespace std;

class Character {
	string name;
	int level = 0;
	int item_num = 0;

public:
	Character(string name) {
		this->name = name;
		level = 0;
		item_num = 0;
	}
	void setName(string name) {
		this->name = name;
		cout << "이름이 변경되었습니다\n" << "new name : " << name;
	}
	void level_up() {
		++level;
		cout << "1레벨 업!\n " << "현재 레벨 : " << level;
	}
	void item_get() {
		++item_num;
		cout << "아이템을 얻었습니다!\n" << "현재 아이템 개수 : " << item_num;
	}
	void item_use() {
		--item_num ;
		cout << "아이템을 사용했습니다!\n" << "현재 아이템 개수 : " << item_num;
	}
	void output() {
		cout << "이름 : " << name << endl << "레벨 : " << level << endl;
		cout << "현재 아이템 개수 : " << item_num<< endl;
	}
};

int main() {
	int num = 0;
	int level = 0;
	int item_num = 0;
	string name;

	cout << "이름을 입력해주세요 : ";
	cin >> name;
	Character ch(name);
	cout << endl << name << " 캐릭터가 생성되었습니다.";
	

	while (1) {
		cout << endl << "어떤 동작을 실행하시겠습니까? (0: 종료)";
		cin >> num;
		switch (num) {
		case 0:
			return -1;
		case 1:
			cout << "새 이름을 입력해주세요 : ";
			cin >> name;
			ch.setName(name);
			break;
		case 2:
			ch.level_up();
			break;
		case 3:
			ch.item_get();
			break;
		case 4:
			ch.item_use();
			break;
		case 5:
			ch.output();
		default:
			break;
		}
	}
	
}
*/


//실습4

/*#include <iostream>

using namespace std;

class Character {
	string name;
	int level = 0;
	int item_num = 0;

public:
	Character(string name) {
		this->name = name;
		level = 0;
		item_num = 0;
	}
	void setName(string name) {
		this->name = name;
		cout << "이름이 변경되었습니다\n" << "new name : " << name;
	}
	void level_up() {
		++level;
		cout << "1레벨 업!\n " << "현재 레벨 : " << level;
	}
	void item_get() {
		++item_num;
		cout << "아이템을 얻었습니다!\n" << "현재 아이템 개수 : " << item_num;
	}
	void item_use() {
		--item_num;
		cout << "아이템을 사용했습니다!\n" << "현재 아이템 개수 : " << item_num;
	}
	void output() {
		cout << "이름 : " << name << endl << "레벨 : " << level << endl;
		cout << "현재 아이템 개수 : " << item_num << endl;
	}
};

int main() {
	int num = 0;
	int level = 0;
	int item_num = 0;
	string name;

	cout << "이름을 입력해주세요 : ";
	cin >> name;
	Character ch(name);
	cout << endl << name << " 캐릭터가 생성되었습니다.";


	while (1) {
		cout << endl << "어떤 동작을 실행하시겠습니까? (0: 종료)";
		cin >> num;
		switch (num) {
		case 0:
			return -1;
		case 1:
			cout << "새 이름을 입력해주세요 : ";
			cin >> name;
			ch.setName(name);
			break;
		case 2:
			ch.level_up();
			break;
		case 3:
			ch.item_get();
			break;
		case 4:
			ch.item_use();
			break;
		case 5:
			ch.output();
		default:
			break;
		}
	}

}
*/