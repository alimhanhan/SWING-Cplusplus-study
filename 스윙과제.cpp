/*1.�̸� �Է��ϰ� ����ϱ�+2~4*/
#include <iostream>
using namespace std;

int main() {
	
	cout << "����� �̸��� �����Դϱ�? ";
	char name0[11]; //���ڿ��� ������ ������ �� �ֵ��� �߰��� ����Ʈ�� �ο��Ѵ�.
	cin.getline(name0, 11); //��¹޴� �̸��� name0�� ����ȴ�.
	cout << "�ݰ����ϴ�. " << name0 << "��\n\n";
	
	int coke, sam, fanta;
	int c_n, s_n, f_n;
	int price;

	cout << "----------SWING 30----------\n";
	cout << "������ ���� �Է��� �����մϴ�.\n\n";

	cout << "�ݶ��� ���� : ";
	cin >> coke;
	cout << "��ټ��� ���� : ";
	cin >> sam;
	cout << "ȯŸ�� ���� : ";
	cin >> fanta;

	cout << "\n������ �Է����ּ���. \n\n";

	cout << "�ݶ� ���� : ";
	cin >> c_n;
	cout << "��ټ� ���� : ";
	cin >> s_n;
	cout << "ȯŸ ���� : ";
	cin >> f_n;

	cout << "----------------------------" << endl;

	price = coke * c_n + sam * s_n + fanta * f_n; //�� ����x������ ���� price�� �����Ѵ�.

	cout << "500���� ���ι޾� �� " << price - 500 << "�� �Դϴ�.\n"; //���������� 500���� ���� price ������ ����.
	return 0;}


