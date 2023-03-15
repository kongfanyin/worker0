#include"worker.h"

const int LIM = 4;
int main(char argc, char** argv)
{
	waiter bob("Bob Apple", 314L, 5);
	singer bev("Beverly Hills", 522L, 3);
	waiter w_temp;
	singer s_temp;

	Worker * pw[LIM] = { &bob, &bev, &w_temp, &s_temp };//指针数组实现多态

	int i;
	for (i = 2; i < LIM; i++)
		pw[i]->set();
	for (i = 0; i < LIM; i++)
	{
		pw[i]->show();
		std::cout << std::endl;
	}
	return 0;
}