#include"student.h"

student_massage::student_massage(unsigned short int year, unsigned short int month,
	unsigned short int day)//���캯��
{
}

student_massage::~student_massage()//��������
{
}

bool student_massage::Check_time_valid(const student_time& S)//�����ѧʱ��ĺϷ���
{
	return true;
}

ostream& operator<<(ostream& _cout, student_massage& SM)//��������������
{
	return _cout;
}

istream& operator>>(istream& _cin, student_massage& SM)//���������������
{
	return _cin;
}

bool student_massage::SetMassage()//����ѧ����Ϣ
{
	student_massage S;
	return true;
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
			if (!SetMassage()){
				cout << "������������ʧ��" << endl;
				return;
			}
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

