#include "WorkerManger.h"

WorkerManger::WorkerManger()
{

}

void WorkerManger::ShowMenu()
{
	cout << "******************************" << endl;
	cout << "*****��ӭʹ��ְ������ϵͳ*****" << endl;
	cout << "*****   1.����ְ����Ϣ   *****" << endl;
	cout << "*****   2.��ʾְ����Ϣ   *****" << endl;
	cout << "*****   3.ɾ��ְ����Ϣ   *****" << endl;
	cout << "*****   4.�޸�ְ����Ϣ   *****" << endl;
	cout << "*****   5.����ְ����Ϣ   *****" << endl;
	cout << "*****   6.���ձ������   *****" << endl;
	cout << "*****   7.���ְ����Ϣ   *****" << endl;
	cout << "*****   0.�˳�����ϵͳ   *****" << endl;
	cout << "******************************" << endl;
}

WorkerManger::~WorkerManger()
{

}

void WorkerManger::ExitSystem()
{
	cout << "��ӭ�´�ʹ�ã�"<<endl;
	system("pause");
	exit(0); //�˳���������
}



//�����ϵ�˽ṹ��
struct Person
{
	string _name;
	int _gender;
	int _age;
	string _phone;
	string _address;
};




