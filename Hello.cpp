#include "header.h"
#include <string>

using namespace std;

// <define>
// define 지시문에 포함한 식별자를 정의한 내용으로 대체하는 매크로
// 반복해서 작성할 내용을 대체하기 위한 기능
// 단순 대체이기 때문에 괄호, 세미콜론 사용에 주의

//#define SIZE 1024
//#define HELLO(text) std::cout << "Hello" << text << std::endl

int main_Hello() {

    // <표준입출력>
    // 콘솔	: 컴퓨터와 사용자가 소통하기 위한 수단, c++에서 iostream의 기능으로 구현되어있음
    // cin 	: 콘솔 입력을 진행
    // cout	: 콘솔 출력을 진행
    // endl	: 줄바꿈
    // getline : 콘솔 입력(공백값 가능)
    cout << "모명준" << endl;

    //HELLO("테스트");

    cout << "콘솔을 통해 입력을 진행합니다." << endl;
    cout << "입력 : ";

    string str;
    //cin.getline(str, 100);
    cin >> str;

    cout << "입력한 내용은 " << str << " 입니다." << endl;
    return 0;
}