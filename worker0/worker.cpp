#include "worker.h"



Worker::~Worker() {};
void Worker::set()
{
	cout << "请输入工作人员姓名：" << endl;
	getline(cin, FullName);
	cout << "请输入工作人员ID：" << endl;
	cin >> id;
	while (cin.get()!='\n')
	{
		continue;
	}
}

void Worker::show() const
{
	cout << "姓名：" << FullName << endl;
	cout << "工号：" << id << endl;

}



//waiter method
void waiter::show() const
{
	cout << "类别：服务员";
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
	cout << "请输入歌手类型："<<endl;
	cin >> voice;
	while (cin.get()!='\n')
	{
		continue;
	}
}

void singer::show() const
{

	Worker::show();
	cout << "歌手类型为： " << voice;
}
