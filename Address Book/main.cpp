#include "Address_book.hpp"

int main()
{

	//����ͨѶ¼�ṹ�����
	Addressbook ab;
	//��ʼ����ϵ�˸���
	ab._size = 0;

	
	int select = 0;//����ѡ��
	while (true)
	{
		
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1:
			addPerson(&ab); //����Ҫ��ͨ��¼�޸�,����ʹ�ô���ַ�ķ�ʽ����
			break;
		case 2:
			showPerson();
			break;
		case 3:
			deletePerson();
			break;
		case 4:
			findPerson();
			break;
		case 5:
			modifyPerson();
			break;
		case 6:
			clearPerson();
			break;
		case 0:
			cout << "��ӭ�´�ʹ��!" << endl;
			return 0;
			break;
		default:
			break;
		}
	}
	return 0;
}
