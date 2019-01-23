#pragma once

#include<iostream>
#include<string>
using namespace std;


enum student_gender{
	man=0,
	women
};


struct student_time{
	unsigned short int _year;//年
	unsigned short int _month;//月
	unsigned short int _day;//日
	student_time(unsigned short int year=1990, unsigned short int month=1,
		unsigned short int day=1){
		_year = year;
		_month = month;
		_day = day;
	}
};

class student{
	student(student_time s){
		_student_name = "张三";
		_student_age = 18;
		_student_addr = "江苏省";
		_student_number = 1;
		_chinese_score = 0;
		_math_score = 0;
		_english_score = 0;
	}
	bool Check_time_valid(const student_time& S);//检查入学时间的合法性
	bool SetMassage();//输入学生信息
	void welcome_windows();//打印界面
	void Select_Todo();//选择选项
	void input_name();//设置姓名
	void input_age();//设置年龄
	void input_time();//设置入学年份
	void input_gender();//设置性别
	void input_addr();//输入家庭住址
	void input_chinese();//输入语文成绩
	void input_math();//输入数学成绩
	void input_english();//输入英文成绩
	
public:
	student_time _student_time;//入学时间
	string _student_name;//学生姓名
	unsigned short int _student_age;//学生年龄
	student_gender _student_gender;//学生性别
	int _student_number;//学生学号
	string _student_addr;//家庭住址
	double _chinese_score;//语文成绩
	double _math_score;//数学成绩
	double _english_score;//英语成绩
};

class student_massage{
public:
	student_massage();//构造函数
	~student_massage();//析构函数
	friend ostream& operator<<(ostream& _cout, student_massage& SM);//输出运算符的重载
	friend istream& operator>>(ostream& _cin, student_massage& SM);//输入运算符的重载
	
	void welcome_windows();//打印界面
	void Select_Todo();//选择选项
};



