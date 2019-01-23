#pragma once

#include<iostream>
#include<string>
using namespace std;


enum student_gender{
	man=0,
	women
};


struct student_time{
	unsigned short int _year;//��
	unsigned short int _month;//��
	unsigned short int _day;//��
	student_time(unsigned short int year=1990, unsigned short int month=1,
		unsigned short int day=1){
		_year = year;
		_month = month;
		_day = day;
	}
};

class student{
	student(student_time s){
		_student_name = "����";
		_student_age = 18;
		_student_add = "����ʡ";
		_student_number = 1;
		_chinese_score = 0;
		_math_score = 0;
		_english_score = 0;
	}
	bool Check_time_valid(const student_time& S);//�����ѧʱ��ĺϷ���
	bool SetMassage();//����ѧ����Ϣ
	void welcome_windows();//��ӡ����
	void Select_Todo();//ѡ��ѡ��
	void input_name();//��������
	void input_age();//��������
	void input_time();//������ѧ���
public:
	student_time _student_time;//��ѧʱ��
	string _student_name;//ѧ������
	unsigned short int _student_age;//ѧ������
	student_gender _student_gender;//ѧ���Ա�
	int _student_number;//ѧ��ѧ��
	string _student_add;//��ͥסַ
	double _chinese_score;//���ĳɼ�
	double _math_score;//��ѧ�ɼ�
	double _english_score;//Ӣ��ɼ�
};

class student_massage{
public:
	student_massage();//���캯��
	~student_massage();//��������
	friend ostream& operator<<(ostream& _cout, student_massage& SM);//��������������
	friend istream& operator>>(ostream& _cin, student_massage& SM);//���������������
	
	void welcome_windows();//��ӡ����
	void Select_Todo();//ѡ��ѡ��
};



