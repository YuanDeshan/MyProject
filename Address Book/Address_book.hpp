#pragma once
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;
#define MAX 999   //���������ϵ�˸�����,���ڵ�������


//�˵�����
void showMenu()
{
	cout << "        ͨѶ¼        " << endl;
	cout << "**********************" << endl;
	cout << "***  1.�����ϵ��  ***" << endl;
	cout << "***  2.��ʾ��ϵ��  ***"<< endl;
	cout << "***  3.ɾ����ϵ��  ***" << endl;
	cout << "***  4.������ϵ��  ***" << endl;
	cout << "***  5.�޸���ϵ��  ***" << endl;
	cout << "***  6.�����ϵ��  ***" << endl;
	cout << "***  0.�˳�ͨѶ¼  ***"<< endl;
	cout << "**********************" << endl;
}


//��ϵ�˽ṹ��
struct Person
{
	string _name; //��ϵ������
	int _gender; //��ϵ���Ա�
	int _age;    //��ϵ������
	string _telephone; //��ϵ�˵绰
	string _address;  //��ϵ�˵�ַ
};

//ͨѶ¼�ṹ��
struct Addressbook
{
	struct Person _pArray[MAX]; //��ϵ������
	int _size;  //��ϵ�˸���

};

//1.�����ϵ��
void addPerson(Addressbook* ab)
{
	//�ж�ͨѶ¼�Ƿ�����
	if (ab->_size == MAX)
	{
		cout << "ͨѶ¼����,�޷��������!" << endl;
		return;
	}
	else
	{
	//�����ϵ��
		cout << "��������ϵ������:" << endl;
		string name;
		cin >> name;
		//ab->_size ��ǰ���ڸ�λ�������ϵ��
		ab->_pArray[ab->_size]._name = name;

		int gender;
		cout << "��������ϵ���Ա�:" << endl;
		cout << "0.��   1.Ů" << endl;
		while (true)
		{
		cin >> gender;
		//�������1��2���˳�ѭ��,������ʾ��������
		if (gender == 1 || gender == 2)
		{
			ab->_pArray[ab->_size]._gender = gender;
			break;
		}
		cout << "������������,����������!" << endl;
		}

		cout << "��������ϵ������:" << endl;
		int age = 0;
		cin >> age;
		ab->_pArray[ab->_size]._age = age;

		cout << "��������ϵ�˵绰:" << endl;
		string telephone;
		
	}


}

//2.��ʾ��ϵ��
void showPerson()
{

}

//3.ɾ����ϵ��
void deletePerson()
{

}

//4.������ϵ��
void findPerson()
{

}

//5.�޸���ϵ��
void modifyPerson()
{

}

//6.�����ϵ��
void clearPerson()
{
	
}
