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
	cout << endl;
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
	cout << endl;
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
		if (gender == 1 || gender == 0)
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
		cin >> telephone;
		ab->_pArray[ab->_size]._telephone = telephone;

		cout << "��������ϵ�˵�ַ:" << endl;
		string address;
		cin >> address;
		ab->_pArray[ab->_size]._address=address;
		ab->_size++;
		
	}
}

//2.��ʾ��ϵ��
void showPerson(Addressbook ab)
{
	cout << "--------------------------------------------------------------------------------" << endl;
	cout <<"���|" << "\t����\t|" << "\t�Ա�\t|" << "\t����\t|" << "\t�绰\t|" << "\t��ַ\t|"<<endl;
	cout << "--------------------------------------------------------------------------------" << endl;
	for (int i = 0; i < ab._size; ++i)
	{
	string gender;
	if (ab._pArray[i]._gender == 1)
	{
		gender = "Ů";
	}
	else
	{
		gender = "��";
	}
	cout <<" "<<i+1<<"  |\t" <<ab._pArray[i]._name <<"\t|\t"<<gender<<"\t|\t"
		<<ab._pArray[i]._age<<"\t|\t"<<ab._pArray[i]._telephone<<"\t|\t"<<ab._pArray[i]._address<<"\t|"<< endl;
	}
	cout << "--------------------------------------------------------------------------------" << endl;
}

//3.ɾ����ϵ��
void deletePerson(Addressbook* ab)
{
	if (ab->_size == 0)
	{
		cout << "ͨѶ¼Ϊ��,�޷�����ɾ��" << endl;
	}
	else
	{
		cout << "��������Ҫɾ����ϵ�˵����:" << endl;
		int num = 0;
		cin >> num;
		num = num - 1;
		for (int i = num; num < ab->_size; ++num)
		{
			ab->_pArray[num] = ab->_pArray[num + 1];
		}
		ab->_size--;

	}
}

//4.������ϵ��
void findPerson(Addressbook ab)
{
	cout << "������Ҫ���ҵ���ϵ������:" << endl;
	string name;
	cin >> name;
	for (int i=0;i<ab._size;++i)
	{
		if (name == ab._pArray[i]._name)
		{
			cout << "���ҵ�" << endl;
			Addressbook ab1;
			ab1._pArray[0] = ab._pArray[i];
			showPerson(ab1);
		}
		else
		{
			cout << "����ϵ�˲�����" << endl;
		}
	}
}

//5.�޸���ϵ��
void modifyPerson(Addressbook* ab)
{

}

//6.�����ϵ��
void clearPerson(Addressbook* ab)
{
	ab->_size = 0;
}
