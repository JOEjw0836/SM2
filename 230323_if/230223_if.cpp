// 230223_if.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

//#include <iostream>

//int main()
//{ 
  //  int a;
    //std::string b;
    //std::string c;


    //std::cin >> a;
    //std::cin >> b;
    //std::cin >> c;

    //std::cout << a << b;
    //std::cout << "\n";
    //std::cout << b + c;//


//}



//int main()/
//{
//    std::string a;
//    std::cout << "이름을 입력하세요";
//    std::cin >> a;


   // int c;
  //  std::cout << "나이를 입력하세요";
//    std::cin >> c;

    //std::cout << a << c;
  //  std::cout << "안녕하세요!" << a << "님" << c << "세";



//}

//실습2(1)

#include <iostream>
int main() {
    int a;
    std::cout << "나이를 입력하세요";
    std::cin >> a;

    if (a >= 1 && a <= 7) {
        std::cout << "유아";
    }
    else if (a >= 8 && a <= 13) {
        std::cout << "초등학생";
    }
    else if (a >= 14 && a <= 16) {
        std::cout << "중학생";
    }
    else if (a >= 17 && a <=19) {
        std::cout << "고등학생";
    }
    else if (a >= 20 && a <=199) {
        std::cout << "성인";
    }
    else if (a >= 200) {
        std::cout << "나이가 너무 많습니다..!";
    }
    else {
        std::cout << "잘못된 값을 입력했습니다.";
    }





    std::string b;
    std::cout << "이름을 입력하세요";
    std::cin >> b;

    if (b == "홍길동"){
        std::cout << "남자";
    }
    else if (b == "성춘향") {
        std::cout << "여자";
    }
    else {
        std::cout << "모르겠어요.";
    }


    int c;
    std::cin >> c;
    
    c % 5 == 0 ? std::cout << c << "는 5의 배수입니다." : std::cout << c << "는 5의 배수가 아닙니다";

    int d;
    int e;
    char calc;

    std::cin >> d;
    std::cin >> e;
    std::cin >> calc;


    if (calc == '+'  ) {
        std::cout << d + e;
    }
    else if (calc == '/') {
        std::cout << d / e << d % e;
    }
    else if (calc == '-') {
        std::cout << d - e;
    }
    else if (calc == '*') {
        std::cout << d * e;
    }

}


















   /* int a = 5;
    if (a > 10) {
        std::cout << "a가 10보다 큽니다";
    }
    else if (a == 5) {
        std::cout << "a는 5입니다";
    }
    else {
        std::cout << "a는 10보다 크지않고 5가 아닙니다";
    }
}
*/

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
