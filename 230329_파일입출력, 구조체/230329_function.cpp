//#include <fstream> //file 입출력
//#include <ifstream> //input file 

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	ifstream file;
	string word1;
	string word2;
	file.open("Hello.txt");

	if (file.is_open()) {
		for (int i = 0; i < 3; i++) {
			file >> word1 >> word2;
			cout << word1 << word2 << endl;
		}
	}
	else {
		cout << "fail\n";
	}
	file.close(); //Hello라는 txt가 없기때문에 fail이 나옴
					//동일 위치에 txt가 있으면 success가 나옴

/*
	string line;
	////cin >> line; //띄어쓰기 전까지만 인식
	////cout << line;
	//getline(cin, line); //문장전체가 인식됨
	//cout << line;
	getline(file, line);
	cout << line << endl;
}
*/


#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
	ifstream file;
	string word1;
	string word2;
	string line;
	file.open("Hello.txt");

	while (getline(file, line)) {
		cout << line << endl;
	}
	
	}




//실습0



#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main() {

	ifstream infile("Hello.txt");
	ofstream outfile("output.txt");
	string line;
	vector<string> v1;

	if (infile.is_open() && outfile.is_open());

	while (getline(infile, line)) {
		v1.push_back(line);
	}
	for (int i = v1.size() - 1; i >= 0; i--) {
		outfile << v1[i] << endl;
	}
	infile.close();
	outfile.close();
	}
	
	
//실습 1


#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string name;
	string line;
	int pw = 0;

	cout << "3명의 회원에 대한 이름 비밀번호를 순차적으로 입력하세요" << endl;

	ofstream file("member.txt");

	for (int i = 0; i < 3; i++) {
		cout << i + 1 << "번째 회원 : ";
		cin >> name;
		cin >> pw;

		

		file << name << " " << pw << endl;
	}
	cout << "----------회원 명부 파일 읽기----------" << endl;
	ifstream file1("member.txt");
	while (getline(file1, line)) {
		cout << line << endl;
	}
}


//실습2

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string name;
	int pw = 0;

	cout << "이름을 입력하세요 : ";
	cin >> name;
	cout << "비번을 입력하세요 : ";
	cin >> pw;
	cout << endl;

	ifstream file("member.txt");
	while (getline(file, line)) {
		
	}
	for (int i = 0; i < 3; i++) {
		file << 
	}
	if (getline(file, line1) || getline(file, line2) || getline(file, line3)) {
		cout << "로그인 성공";
	}
	else {
		cout << "로그인 실패";
	}
	

	//실습2 (선생님)


#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream member("member.txt");
	string name, pw, name_in, pw_in;

	cout << "이름을 입력하세요 : ";
	cin >> name_in;
	cout << "암호를 입력하세요 : ";
	cin >> pw_in;

	bool is_login = false;

	if (member.is_open()) {
		while (member >> name >> pw) {
			if (name_in == name && pw_in == pw) {
				is_login = true;
				break;
			}
		}

		if (is_login) {
			cout << "로그인 성공\n";
		}
		else {
			cout << "로그인 실패\n";
		}
	}
	else cout << "파일을 읽지못했습니다\n";

	member.close();
	}

	


//번외 실습 3.
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

ifstream member("member.txt");
string name, pw, name_in, pw_in, num;

cout << "이름을 입력하세요 : ";
cin >> name_in;
cout << "암호를 입력하세요 : ";
cin >> pw_in;

bool is_login = false;

if (member.is_open()) {
	while (member >> name >> pw) {

		if (name_in == name && pw_in == pw) {
			is_login = true;
			break;
		}
	}

	if (is_login) {
		cout << "로그인 성공\n";

			cout << "전화번호를 입력하세요 : ";
			cin >> num;
			

			if (name_in == name) {
				ofstream member_tel("member_tel.txt", ios::app);
				member_tel << name_in << num << endl;
			}
	}
	else {
		cout << "로그인 실패\n";
	}
}
else cout << "파일을 읽지못했습니다\n";

member.close();
	}
	

//번외실습 3.(선생님 풀이)



#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

ifstream member("member.txt");
string name, pw, name_in, pw_in;

cout << "이름을 입력하세요 : ";
cin >> name_in;
cout << "암호를 입력하세요 : ";
cin >> pw_in;

bool is_login = false;

if (member.is_open()) {
	while (member >> name >> pw) {
		if (name_in == name && pw_in == pw) {
			is_login = true;
			break;
		}
	}

	if (is_login) {
		string num_in, num;

		cout << "로그인 성공\n";
		cout << "전화번호를 입력하세요 : ";
		cin >> num_in;

		ifstream member_tel_r("member_tel.txt");

		bool is_modify = false;
		string member_tel_tmp = " ";

		if (member_tel_r.is_open()) {
			
			while (member_tel_r >> name >> num) {
				string line = name + " ";
				if (name_in == name) {
					is_modify = true;
					line += num_in;
				}
				else {
					line += num;
				}
				member_tel_tmp += line + "\n";
			}
		}

		member_tel_r.close();


		ofstream member_tel_w;


		if (is_modify) {
			member_tel_w.open("member_tel.txt");
			member_tel_w << member_tel_tmp;
		}
		else {
			ofstream member_tel_w("member_tel.txt", ios::app);

			if (member_tel_w.is_open()) {
				member_tel_w << name_in << " " << num_in << endl;
			}
		}		
		member_tel_w.close();
	}
	else {
		cout << "로그인 실패\n";
	}
}
else cout << "파일을 읽지못했습니다\n";

member.close();
	}

















//구조체

#include <iostream>
using namespace std;

struct Rectangle {
	int width = 0;
	int height = 0;
};

int main() {
	Rectangle r;
	cout << "가로, 세로 길이를 입력하세요 : ";
	cin >> r.width >> r.height;
	cout << endl << "넓이는 : ";
	cout << r.width * r.height;

}
