//코드가 실행되는 동안의 시간 측정하려면
//#include <ctime>
//int main(void) {
//	clock_t startTime = clock();
//
//	clock_t endTime = clock();
//	cout << "걸린시간" << (endTime - startTime) / CLOCKS_PER_SEC;
//}
// 
//String으로 들어온 단어에서 맨 앞 글자와 맨 뒤 글자 가져오기
//[맨 앞글자]
//string word = "hello";
//cout << word[0]; --> 'h'가 출력됨
//[맨 뒷글자]
//string word = "hello";
//int n = word.size();
//cout << word[n - 1]; --> 'o'가 출력됨

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;
int main() {
	vector <string> output;
	output.push_back("airplane");
	string word;
	clock_t startTime = clock();

	while (1) {
		for (int i = 0; i < output.size(); i++) 
			cout << " --> " << output.at(i);
			cout << endl << "다음 단어를 입력하세요 : ";
			cin >> word;
			cout << endl;
			
			clock_t endTime = clock();
			int timer = (endTime - startTime) / CLOCKS_PER_SEC;
			cout << timer << "초 경과" << endl;

			if (timer > 20) {
				cout << "타임오버! 게임종료!!" << endl;
				cout << "총 입력한 단어 수 : " << output.size() - 1 << endl;
				break;
			}
			int a = output.back().size();
			if (word[0] != output.back()[a - 1]) {
				cout << "잘못된 입력입니다." << endl;
				continue;
			}
			for (int i = 0; i < output.size(); i++){
				if (word == output.at(i)) {
				cout << "이미 쓴 단어입니다! 게임종료!!" << endl;
				cout << "총 입력한 단어 수 : " << output.size() - 1 << endl;
				return 0;
				}
			}output.push_back(word);
	}
}