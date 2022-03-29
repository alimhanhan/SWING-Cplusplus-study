/*1.이름 입력하고 출력하기+2~4*/
#include <iostream>
using namespace std;

int main() {
	
	cout << "당신의 이름은 무엇입니까? ";
	char name0[11]; //문자열에 공백을 포함할 수 있도록 추가로 바이트를 부여한다.
	cin.getline(name0, 11); //출력받는 이름은 name0에 저장된다.
	cout << "반갑습니다. " << name0 << "님\n\n";
	
	int coke, sam, fanta;
	int c_n, s_n, f_n;
	int price;

	cout << "----------SWING 30----------\n";
	cout << "음료의 가격 입력을 시작합니다.\n\n";

	cout << "콜라의 가격 : ";
	cin >> coke;
	cout << "삼다수의 가격 : ";
	cin >> sam;
	cout << "환타의 가격 : ";
	cin >> fanta;

	cout << "\n개수를 입력해주세요. \n\n";

	cout << "콜라 수량 : ";
	cin >> c_n;
	cout << "삼다수 수량 : ";
	cin >> s_n;
	cout << "환타 수량 : ";
	cin >> f_n;

	cout << "----------------------------" << endl;

	price = coke * c_n + sam * s_n + fanta * f_n; //각 가격x수량의 합을 price에 저장한다.

	cout << "500원을 할인받아 총 " << price - 500 << "원 입니다.\n"; //마지막으로 500원을 원래 price 값에서 뺀다.
	return 0;}


