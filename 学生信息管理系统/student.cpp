#include"student.h"

student_massage::student_massage(unsigned short int year, unsigned short int month,
	unsigned short int day)//构造函数
{
}

student_massage::~student_massage()//析构函数
{
}

bool student_massage::Check_time_valid(const student_time& S)//检查入学时间的合法性
{
	return true;
}

ostream& operator<<(ostream& _cout, student_massage& SM)//输出运算符的重载
{
	return _cout;
}

istream& operator>>(istream& _cin, student_massage& SM)//输入运算符的重载
{
	return _cin;
}

bool student_massage::SetMassage()//输入学生信息
{
	student_massage S;
	return true;
}

void student_massage::welcome_windows(){
	cout << "******************" << endl;
	cout << "欢迎来到学生管理系统" << endl;
	cout << "1.查询" << endl;
	cout << "2.输入信息" << endl;
	cout << "3.删除信息" << endl;
	cout << "4.排序" << endl;
	cout << "5.退出系统" << endl;
}
void student_massage::Select_Todo(){
	int input = 0;
	cout << "请输入你的选择" << endl;
	cin >> input;
	while (input){
		switch (input){
		case 1:
			//查询

			break;
		case 2:
			//输入信息
			if (!SetMassage()){
				cout << "输入有误，输入失败" << endl;
				return;
			}
			break;
		case 3:
			//删除信息
			break;
		case 4:
			//排序
			break;
		case 5:
			//退出系统
			break;
		default:
			break;
		}
	}
}

