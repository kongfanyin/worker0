#include "worker.h"



Worker::~Worker() {};
void Worker::set()
{
	cout << "�����빤����Ա������" << endl;
	getline(cin, FullName);
	cout << "�����빤����ԱID��" << endl;
	cin >> id;
	while (cin.get()!='\n')
	{
		continue;
	}
}

void Worker::show() const
{
	cout << "������" << FullName << endl;
	cout << "���ţ�" << id << endl;

}



//waiter method
void waiter::show() const
{
	cout << "��𣺷���Ա";
	Worker::show();
	cout << "panache rating" << panache << endl;
}

void waiter::set()
{
	Worker::set();
	cout << "enter waiter's panache: " << endl;
	cin >> panache;
	while (cin.get()!='\n')
	{
		continue;
	}

}

const char* singer::pv[] = { "other", "alto","contralto","soprano","bass","baritone","tenor"};
void singer::set()
{
	Worker::set();
	cout << "������������ͣ�"<<endl;
	cin >> voice;
	while (cin.get()!='\n')
	{
		continue;
	}
}

void singer::show() const
{

	Worker::show();
	cout << "��������Ϊ�� " << voice;
}
