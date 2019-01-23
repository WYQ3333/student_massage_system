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
	student(student_time s);//���캯��
	bool SetMassage();//����ѧ����Ϣ
	void welcome_windows();//��ӡ����
	void Select_Todo();//ѡ��ѡ��
	void input_name();//��������
	void input_age();//��������
	void input_time();//������ѧ���
	void input_gender();//�����Ա�
	void input_addr();//�����ͥסַ
	void input_chinese();//�������ĳɼ�
	void input_math();//������ѧ�ɼ�
	void input_english();//����Ӣ�ĳɼ�
	
public:
	student_time _student_time;//��ѧʱ��
	string _student_name;//ѧ������
	unsigned short int _student_age;//ѧ������
	student_gender _student_gender;//ѧ���Ա�
	int _student_number;//ѧ��ѧ��
	string _student_addr;//��ͥסַ
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



