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
			cout << "��ӭ�´�ʹ��!" << endl;
			return 0;
			break;
		default:
			break;
		}
	}
	return 0;
}
