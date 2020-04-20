#pragma once
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::string;

class WorkerManger
{
public:
	//构造函数
	WorkerManger();

	//菜单展示函数
	void ShowMenu();

	//退出程序
	void ExitSystem();


	~WorkerManger();
};
