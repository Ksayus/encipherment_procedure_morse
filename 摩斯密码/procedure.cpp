#include <iostream>
#include "encipherment_word.h"
#include <Windows.h>
#include "decode.h"

using namespace std;

int main() {
	
	
	//����ģʽ���е��ú���
	while (1)
	{
		//����ģʽ������
		int type_modoul = 0;
		system("cls");
		do {
			cout << "����������ѡ��ģʽ:" << endl;
			cout << "1-����ģʽ" << "    " << "2-����ģʽ" << "    " << "3-�˳�" << endl;
			cin >> type_modoul;
		} while (type_modoul != 1 && type_modoul != 2 && type_modoul != 3);

		if (type_modoul == 1)
		{
			system("cls");
			cout << "�������ģʽ" << endl;
			encipherment_word();
			//encipherment_contect_cout();
			cout << endl;
			system("pause");
		}
		else {
			if (type_modoul == 2)
			{
				system("cls");
				cout << "�������ģʽ" << endl;
				decode_word();
				cout << endl;
				system("pause");
			}
			else {
				if (type_modoul == 3)
				{
					system("cls");
					cout << "�˳�����" << endl;
					break;
				}
			}
		}
	}
	
	system("pause");
	return 0;
}