#include"student.h"


void student::welcome_windows(){
	cout << endl;
	cout << "****************" << endl;
	cout << "1.��������" << endl;
	cout << "2.��������" << endl;
	cout << "3.������ѧ���" << endl;
	cout << "4.�����Ա�" << endl;
	cout << "5.�����ͥסַ" << endl;
	cout << "6.�������ĳɼ�" << endl;
	cout << "7.������ѧ�ɼ�" << endl;
	cout << "8.����Ӣ�ĳɼ�" << endl;
	cout << "9.����" << endl;
	cout << "***************" << endl;
	cout << endl;
}

student::student(student_time s){
	_student_name = "����";
	_student_age = 18;
	_student_addr = "����ʡ";
	_student_number = 1;
	_chinese_score = 0;
	_math_score = 0;
	_english_score = 0;
}

void student::input_name(){
	cout << "����������:";
	string sn;
	cin >> sn;
	_student_name = sn;
}

void student::input_age()//��������
{
	cout << "���������䣺";
	unsigned short int age;
	cin >> age;
	_student_age = age;
}
void student::input_time()//������ѧ���
{
	cout << "��������ѧ��ݣ�";
	student_time T;
	cin >> T._day;
	cin >> T._month;
	cin >> T._day;
}

void student::input_gender()//�����Ա�
{
	cout << "������1(women)/0(man):";
	int input = -1;
	cin >> input;
	if (input != 0 || input != 1){
		cout << "�����������������:" << endl;
		student::input_gender();
	}
	if (input == 0){
		_student_gender = man;
	}
	if (input == 1){
		_student_gender = women;
	}
}

void student::input_addr()//�����ͥסַ
{
	cout << "�������ͥסַ:";
	string addr;
	cin >> addr;
	_student_addr = addr;
}
void student::input_chinese()//�������ĳɼ�
{
	cout << "���������ĳɼ���";
	double chinese;
	cin >> chinese;
	_chinese_score = chinese;
}
void student::input_math()//������ѧ�ɼ�
{
	cout << "��������ѧ�ɼ���";
	double math;
	cin >> math;
	_math_score = math;
}
void student::input_english()//����Ӣ�ĳɼ�
{
	cout << "������Ӣ��ɼ���";
	double english;
	cin >> english;
	_english_score = english;
}


void student::Select_Todo(){
	cout << "���������ѡ��";
	int input = 0;
	cin >> input;
	while (input){
		switch (input){
		case 1:
			input_name();
			break;
		case 2:
			input_age();
			break;
		case 3:
			input_time();
			break;
		case 4:
			input_gender();
			break;
		case 5:
			input_addr();
			break;
		case 6:
			input_chinese();
			break;
		case 7:
			input_math();
			break;
		case 8:
			input_english();
			break;
		case 9:
			cout << "�˳�ϵͳ" << endl;
			return;
			break;
		default:
			return;
			break;
		}
	}
}

bool student::SetMassage()//����ѧ����Ϣ
{
	cout << "������ѧ����Ϣ��" << endl;
	student::welcome_windows();
	student::Select_Todo();
	return true;
}

student_massage::student_massage()//���캯��
{}

student_massage::~student_massage()//��������
{}




ostream& operator<<(ostream& _cout, student_massage& SM)//��������������
{
	return _cout;
}

istream& operator>>(istream& _cin, student_massage& SM)//���������������
{
	return _cin;
}


void student_massage::welcome_windows(){
	cout << "******************" << endl;
	cout << "��ӭ����ѧ������ϵͳ" << endl;
	cout << "1.��ѯ" << endl;
	cout << "2.������Ϣ" << endl;
	cout << "3.ɾ����Ϣ" << endl;
	cout << "4.����" << endl;
	cout << "5.�˳�ϵͳ" << endl;
}
void student_massage::Select_Todo(){
	int input = 0;
	cout << "���������ѡ��" << endl;
	cin >> input;
	while (input){
		switch (input){
		case 1:
			//��ѯ

			break;
		case 2:
			//������Ϣ
			/*if (!student::SetMassage()){
				cout << "������������ʧ��" << endl;
				return;
			}*/
			break;
		case 3:
			//ɾ����Ϣ
			break;
		case 4:
			//����
			break;
		case 5:
			//�˳�ϵͳ
			break;
		default:
			break;
		}
	}
}

