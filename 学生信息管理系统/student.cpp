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

void student::Select_Todo(){
	cout << "���������ѡ��";
	int input = 0;
	cin >> input;
	while (input){
		switch (input){
		case 1:

			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		default:
			break;
		}
	}
}


student_massage::student_massage()//���캯��
{
}

student_massage::~student_massage()//��������
{
}

bool student::Check_time_valid(const student_time& S)//�����ѧʱ��ĺϷ���
{
	return true;
}



bool student::SetMassage()//����ѧ����Ϣ
{
	cout << "������ѧ����Ϣ��" << endl;
	student::welcome_windows();
	student::Select_Todo();
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

