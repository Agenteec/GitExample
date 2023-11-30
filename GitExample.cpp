// GitExample.cpp: определяет точку входа для приложения.
//

#include "GitExample.h"

using namespace std;

class GitExample
{
private:
	/* data */
public:
	GitExample(/* args */);
	~GitExample();

	void Show();
};

void GitExample::Show()
{
	cout << "*";
}

GitExample::GitExample(/* args */)
{
}

GitExample::~GitExample()
{
}


int main()
{
	GitExample p;
	for(int i = 0; i < 10; i++)
	{
		for(int i = 0; i < 10; i++)
		{
			p.Show();
		}
		cout << "\n";
	}
	return 0;
}
