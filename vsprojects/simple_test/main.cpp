#include "my.pb.h"
#include "my2.pb.h"
#include <iostream>

int main()
{
	LogonReqMessage message;

	message.set_acctid(5);
	message.set_passwd("hello");

	char* buf = new char[64];
	message.SerializeToArray(buf, 64);

	LogonReqMessage2 msg;
	msg.ParseFromArray(buf, 64);
	std::cout << msg.acctid2() << " " << msg.passwd2();

	getchar();
	return 1;
}