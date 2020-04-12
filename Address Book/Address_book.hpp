#pragma once
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;
#define MAX 999   //定义最大联系人个数宏,便于调整容量


//菜单界面
void showMenu()
{
	cout << endl;
	cout << "        通讯录        " << endl;
	cout << "**********************" << endl;
	cout << "***  1.添加联系人  ***" << endl;
	cout << "***  2.显示联系人  ***"<< endl;
	cout << "***  3.删除联系人  ***" << endl;
	cout << "***  4.查找联系人  ***" << endl;
	cout << "***  5.修改联系人  ***" << endl;
	cout << "***  6.清除联系人  ***" << endl;
	cout << "***  0.退出通讯录  ***"<< endl;
	cout << "**********************" << endl;
	cout << endl;
}


//联系人结构体
struct Person
{
	string _name; //联系人姓名
	int _gender; //联系人性别
	int _age;    //联系人年龄
	string _telephone; //联系人电话
	string _address;  //联系人地址
};

//通讯录结构体
struct Addressbook
{
	struct Person _pArray[MAX]; //联系人数组
	int _size;  //联系人个数

};

//1.添加联系人
void addPerson(Addressbook* ab)
{
	//判断通讯录是否已满
	if (ab->_size == MAX)
	{
		cout << "通讯录已满,无法进行添加!" << endl;
		return;
	}
	else
	{
	//添加联系人
		cout << "请输入联系人姓名:" << endl;
		string name;
		cin >> name;
		//ab->_size 当前可在该位置添加联系人
		ab->_pArray[ab->_size]._name = name;

		int gender;
		cout << "请输入联系人性别:" << endl;
		cout << "0.男   1.女" << endl;
		while (true)
		{
		cin >> gender;
		//如果输入1或2就退出循环,否则提示输入有误
		if (gender == 1 || gender == 0)
		{
			ab->_pArray[ab->_size]._gender = gender;
			break;
		}
		cout << "您的输入有误,请重新输入!" << endl;
		}

		cout << "请输入联系人年龄:" << endl;
		int age = 0;
		cin >> age;
		ab->_pArray[ab->_size]._age = age;

		cout << "请输入联系人电话:" << endl;
		string telephone;
		cin >> telephone;
		ab->_pArray[ab->_size]._telephone = telephone;

		cout << "请输入联系人地址:" << endl;
		string address;
		cin >> address;
		ab->_pArray[ab->_size]._address=address;
		ab->_size++;
		
	}
}

//2.显示联系人
void showPerson(Addressbook ab)
{
	cout << "--------------------------------------------------------------------------------" << endl;
	cout <<"序号|" << "\t姓名\t|" << "\t性别\t|" << "\t年龄\t|" << "\t电话\t|" << "\t地址\t|"<<endl;
	cout << "--------------------------------------------------------------------------------" << endl;
	for (int i = 0; i < ab._size; ++i)
	{
	string gender;
	if (ab._pArray[i]._gender == 1)
	{
		gender = "女";
	}
	else
	{
		gender = "男";
	}
	cout <<" "<<i+1<<"  |\t" <<ab._pArray[i]._name <<"\t|\t"<<gender<<"\t|\t"
		<<ab._pArray[i]._age<<"\t|\t"<<ab._pArray[i]._telephone<<"\t|\t"<<ab._pArray[i]._address<<"\t|"<< endl;
	}
	cout << "--------------------------------------------------------------------------------" << endl;
}

//3.删除联系人
void deletePerson(Addressbook* ab)
{
	if (ab->_size == 0)
	{
		cout << "通讯录为空,无法进行删除" << endl;
	}
	else
	{
		cout << "请输入需要删除联系人的序号:" << endl;
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

//4.查找联系人
void findPerson(Addressbook ab)
{
	cout << "请输入要查找的联系人姓名:" << endl;
	string name;
	cin >> name;
	for (int i=0;i<ab._size;++i)
	{
		if (name == ab._pArray[i]._name)
		{
			cout << "已找到" << endl;
			Addressbook ab1;
			ab1._pArray[0] = ab._pArray[i];
			showPerson(ab1);
		}
		else
		{
			cout << "该联系人不存在" << endl;
		}
	}
}

//5.修改联系人
void modifyPerson(Addressbook* ab)
{

}

//6.清除联系人
void clearPerson(Addressbook* ab)
{
	ab->_size = 0;
}
