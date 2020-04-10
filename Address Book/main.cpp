#include "Address_book.hpp"

int main()
{

	//创建通讯录结构体变量
	Addressbook ab;
	//初始化联系人个数
	ab._size = 0;

	
	int select = 0;//用于选择
	while (true)
	{
		
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1:
			addPerson(&ab); //由于要对通信录修改,所以使用传地址的方式传参
			break;
		case 2:
			showPerson(ab);
			break;
		case 3:
			deletePerson(&ab);
			break;
		case 4:
			findPerson(ab);
			break;
		case 5:
			modifyPerson();
			break;
		case 6:
			clearPerson(&ab);
			break;
		case 0:
			cout << "欢迎下次使用!" << endl;
			return 0;
			break;
		default:
			break;
		}
	}
	return 0;
}
