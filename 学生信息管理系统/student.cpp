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

student::student(student_time s){
	_student_name = "张三";
	_student_age = 18;
	_student_addr = "江苏省";
	_student_number = 1;
	_chinese_score = 0;
	_math_score = 0;
	_english_score = 0;
}

void student::input_name(){
	cout << "请输入姓名:";
	string sn;
	cin >> sn;
	_student_name = sn;
}

void student::input_age()//设置年龄
{
	cout << "请输入年龄：";
	unsigned short int age;
	cin >> age;
	_student_age = age;
}
void student::input_time()//设置入学年份
{
	cout << "请输入入学年份：";
	student_time T;
	cin >> T._day;
	cin >> T._month;
	cin >> T._day;
}

void student::input_gender()//设置性别
{
	cout << "请输入1(women)/0(man):";
	int input = -1;
	cin >> input;
	if (input != 0 || input != 1){
		cout << "输入错误，请重新输入:" << endl;
		student::input_gender();
	}
	if (input == 0){
		_student_gender = man;
	}
	if (input == 1){
		_student_gender = women;
	}
}

void student::input_addr()//输入家庭住址
{
	cout << "请输入家庭住址:";
	string addr;
	cin >> addr;
	_student_addr = addr;
}
void student::input_chinese()//输入语文成绩
{
	cout << "请输入语文成绩：";
	double chinese;
	cin >> chinese;
	_chinese_score = chinese;
}
void student::input_math()//输入数学成绩
{
	cout << "请输入数学成绩：";
	double math;
	cin >> math;
	_math_score = math;
}
void student::input_english()//输入英文成绩
{
	cout << "请输入英语成绩：";
	double english;
	cin >> english;
	_english_score = english;
}


void student::Select_Todo(){
	cout << "请输入你的选择：";
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
			cout << "退出系统" << endl;
			return;
			break;
		default:
			return;
			break;
		}
	}
}

void student::SetMassage()//输入学生信息
{
	cout << "请输入学生信息：" << endl;
	student::welcome_windows();
	student::Select_Todo();
	
}

student_massage::student_massage()//构造函数
{}

student_massage::~student_massage()//析构函数
{}




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
			student::SetMassage();
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

