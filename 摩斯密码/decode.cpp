//#include "decode.h"
//#include <iostream>
//#include <Windows.h>
//using namespace std;
//
//static void decode_word()
//{
//
//	const int max_encipherment = 512;
//	const int mix_encipherment = 128;
//	int decode_inspection_number = 0;
//	int decode_count = 0;
//	int decode_program_long = 0;
//	int decode_array[max_encipherment] = {};
//
//
//	char input_encipherment_word[max_encipherment] = {};
//	const char* output_encipherment_word[max_encipherment] = {};
//	const char* output_decode_word[max_encipherment] = {};
//
//
//	//�����ı�
//	cin >> input_encipherment_word;
//
//
//	//�����������char����ת��Ϊchar*
//	char* input_encipherment_word_exchange_type[max_encipherment] = {};
//	input_encipherment_word_exchange_type[mix_encipherment] = input_encipherment_word;
//
//
//	//��������ı����ж�ȡ�����ж����ĳ��Ȳ����ı����ݷֿ�
//	do {
//		//���� "," ʱ������decode_program_long������
//		if (input_encipherment_word[decode_count] == ',')
//		{
//			decode_array[decode_inspection_number] = decode_program_long;
//			cout << decode_array[decode_inspection_number] << endl;
//			decode_program_long = 0;
//			decode_inspection_number++;
//		}
//		//�������� "," ʱ��decode_program_long��һλ��
//		if (input_encipherment_word[decode_count] != ',')
//		{
//			decode_program_long++;
//		}
//		decode_count++;
//	} while (input_encipherment_word[decode_count] != 0);
//	//���Դ���
//	cout << decode_inspection_number << endl;
//
//
//	int decode_long_used = 0;
//	char* encipherment_to_decode[max_encipherment] = {};
//
//	for (int i = 0; i < decode_inspection_number; i++)
//	{
//		for (int j = 0; j < decode_array[i]; j++)
//		{
//			encipherment_to_decode[j] = input_encipherment_word_exchange_type[decode_long_used + j];
//			cout << encipherment_to_decode[j];
//		}
//		cout << endl;
//		decode_long_used += decode_array[i] + 1;
//		Sleep(300);
//	 }
//}
