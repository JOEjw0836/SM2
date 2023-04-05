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
	void plusCnt() {
		cnt++;
	}
	static int getCnt() {
		return cnt;
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
	Candy(string flavor) : Snack(flavor) {
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
	Chocolate(string shape) : Snack(shape) {
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
		cout << "과자 바구니에 추가할 간식을 고르시오(1: 사탕, 2: 초콜릿, 0: 종료) :  ";
		cin >> num;
		switch (num) {
		case 0:
			cout << "간식바구니에 담긴 간식의 개수는 " << Snack::getCnt() << "개 입니다." << endl;
			cout << "과자 바구니에 담긴 간식 확인하기 " << endl;
			for (int i = 0; i < v.size(); i++) {
				v[i]->printName();
			}
			return -1;
		case 1:
			cout << "맛을 입력하세요 : ";
			cin >> flavor;
			cout << endl;
			v.push_back(new Candy(flavor));
			break;
		case 2:
			cout << "모양을 입력하세요 : ";
			cin >> shape;
			cout << endl;
			v.push_back(new Chocolate(shape));
			break;
		}
	}

	
}