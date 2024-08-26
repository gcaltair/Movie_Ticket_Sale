// Movie_Theater.cpp: 定义应用程序的入口点。
//

#include "Movie_Theater.h"
#include "User.h"
using namespace std;

int main()
{
	cout << "Hello git" << endl;
    cout<<"hello clion"<<endl;
	User a;
	a.setAccountBalance(0.444);
	a.setEmailAddress("114514@gmail.com");
	std::cout << a.getEmailAddress();
	std::cout << a.getAccountBalance();
	return 0;
}
