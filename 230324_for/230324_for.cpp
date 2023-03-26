// 230324_for.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

/*#include <iostream>

int main(){
    std::cout << "시작합니다";
    std::cout << "\n";

    for (int i = 0; i < 5; i++) {
        //(초기값; 조건문 ; 증감문)
        std::cout << "안녕하세요" << std::endl;
    }

    for (int a = 10; a > 3; a--) {
        std::cout << "Hello" << std::endl;
    }

    std::cout << "끝났습니다";

}
*/

/*#include <iostream>

int main() {
    //while ( 조건문) { 조건문이 참인 경우 반복적으로 실행하는 명령문}
    int i = 0;
    while (i < 5) {
        std::cout << "안녕하세요." << std::endl;
        i++;
    }
}
*/

//while문은 보통 언제까지 반복할지 모를 때 사용
/*#include <iostream>

int main() {
    int order;
    while (1) {
        std::cout << "1~3 중 하나를 입력하세요";
        std::cin >> order;

        if (order == 1) {
            std::cout << "아메리카노 주문" << std::endl;
        }
        else if (order == 2) {
            std::cout << "라떼 주문" << std::endl;
        }
        else if (order == 3) {
            break;
        }
        else {
            std::cout << "1~3을 입력하시오" << std::endl;
        }
        
    }
    std::cout << "종료합니다";
}
*/

//do while문 -- 무조건 1번은 실행시킨 다음 조건을 검사함.
//while문 -- 조건을 먼저 검사하고 실행시킴.

//do { 반복하고 싶은 것
//   }
//while(조건문);



//실습1 : 구구단 만들기

/*#include <iostream>

int main() {
    std::cout << "구구단 5단" << std::endl;
    std::cout << "----------" << std::endl;

    for (int i = 1; i < 10; i++) {
        std::cout << "5 * " << i << "=" << 5 * i << std::endl;
    }

    std::cout << "1~9단 출력" << std::endl;
    std::cout << "----------" << std::endl;

    for (int j = 1; j < 10; j++) {
        std::cout << "----" << j << "단----" << std::endl;
        for (int k = 1; k < 10; k++) {
            std::cout << j << "*" << k << " = " << j * k << std::endl;
        }
    }

  
}
*/

//실습2 1부터 n까지 합 구하기

/*#include <iostream>

int main() {
    int n;
    int sum = 0;
    int num;

    std::cout << "1부터 n까지의 합 구하기" << std::endl << std::endl;
    std::cout << "숫자(양의 정수)를 입력하세요 : ";
    std::cin >> n;
    std::cout << "\n";
    std::cout << "1부터 " << n << "까지의 합은 : ";

    for (int num = 1; num <= n;  num++) {
        sum = sum + num;
    }
    std::cout << sum;


}
*/


//실습3 while문 사용해보기

/*#include <iostream>

int main() {
    std::cout << "구구단 5단" << std::endl;
    std::cout << "----------" << std::endl;

    int i = 1;
    int j = 1;
    while (i < 10) {
        i++;
        std::cout << "5 * " << i << "=" << 5 * i << std::endl;
    }

    std::cout << "1~9단 출력" << std::endl;
    std::cout << "----------" << std::endl;

    while (j < 10) {
        j++;
        std::cout << "----" << j << "단----" << std::endl;
        for (int k = 1; k < 10; k++) {
            std::cout << j << "*" << k << " = " << j * k << std::endl;
        }
    }
}
*/

/*#include <iostream>

int main() {
    int n;
    int sum = 0;
    int num = 1;

    std::cout << "1부터 n까지의 합 구하기" << std::endl << std::endl;
    std::cout << "숫자(양의 정수)를 입력하세요 : ";
    std::cin >> n;
    std::cout << "\n";
    std::cout << "1부터 " << n << "까지의 합은 : ";

    while(num <= n) {
       
        sum = sum + num;
        num++;
    }
    std::cout << sum;


}*/

/*#include <iostream>
void multiple(int num1, int num2) {
    std::cout << num1 * num2;
   
}
int main() {
    multiple(3,6);
}
*/

//실습4: 사용자가 입력한 숫자 더하기

/*#include <iostream>

int main() {
    int num;
    int sum = 0;
    std::cout << "사용자가 입력한 숫자 더하기";
    std::cout << "\n";

    do
    {
        std::cout << "숫자를 입력하세요. (0, exit) : ";
        std::cin >> num;
        sum += num;
    } while (num);
    std::cout << "사용자가 입력한 수의 합은 : " << sum;
}
*/


//실습 4 (선생님 답안)

/*int main() {
    int num = 1;
    int sum = 0;

    while (num != 0) {
        std::cout << "값을 입력하세요(exit : 0)";
        std::cin >> num;

        sum = sum + num;

    }
    std::cout << "총 합은 : " << sum;
}
*/


/*#include <iostream>

int add(int n1, int n2) {
    int result = n1 + n2;

    return result;
}

int minus(int n1, int n2) {
    if (n1 > n2) {
        int result1 = n1 - n2;

        return result1;
    }
    else if (n2 > n1) {
        int result2 = n2 - n1;

        return result2;
    }
}*/

//번외 실습

/*int main() {
    int star;
    int j;

    std::cout << "총 수 입력";
    std::cin >> star;
    for (int i = 1; i <= star; i++) {
        for (int j = 0; j < i; j++) {
            std::cout << "*";
        }
    }std::cout << std::endl;
    j = 0;
}
*/

/*int multiple(int n1, int n2) {
    int result = n1 * n2;

    return result;
}

double divide(int n1, int n2) {
    double result = (double)n1 / (double)n2;

    return result;
}

int main() {
    std::cout << add(4, 3) << std::endl;
    std::cout << minus(4, 3) << std::endl;
    std::cout << multiple(4, 3) << std::endl;
    std::cout << divide(4, 3) << std::endl;
}
*/

/*#include <iostream>

void test(int num) {

    if (num % 2 == 1) {
        std::cout << "홀수";
    }
    else if (num % 2 == 0) {
        std::cout << "짝수";
    }
}

int main() {
    test(5);
}
*/

//실습문제

/*int compare(int a, int b, int c) {
    int result;
    if (a > b && a > c) {
        result = a;
    }
    else if (b > a && b > c) {
        result = b;
    }
    else if (c > a && c > b) {
        result = c;
    }
    else {
        std::cout << "잘못된 값";
    }
    return result;
}

int main() {
    int a, b, c;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    std::cout << compare(a,b,c);
}*/