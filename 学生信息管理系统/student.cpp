#include"student.h"


void student::welcome_windows(){
	cout << endl;
	cout << "****************" << endl;
	cout << "1.输入姓名" << endl;
	cout << "2.输入年龄" << endl;
	cout << "3.输入入学年份" << endl;
	cout << "4.输入性别" << endl;
	cout << "5.输入家庭住址" << endl;
	cout << "6.输入语文成绩" << endl;
	cout << "7.输入数学成绩" << endl;
	cout << "8.输入英文成绩" << endl;
	cout << "9.返回" << endl;
	cout << "***************" << endl;
	cout << endl;
}

void student::Select_Todo(){
	cout << "请输入你的选择：";
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


student_massage::student_massage()//构造函数
{
}

student_massage::~student_massage()//析构函数
{
}

bool student::Check_time_valid(const student_time& S)//检查入学时间的合法性
{
	return true;
}



bool student::SetMassage()//输入学生信息
{
	cout << "请输入学生信息：" << endl;
	student::welcome_windows();
	student::Select_Todo();
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
			/*if (!student::SetMassage()){
				cout << "输入有误，输入失败" << endl;
				return;
			}*/
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

