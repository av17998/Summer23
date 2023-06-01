#include <stdlib.h>
class userdatabase {
private:
	char user[32] = { 0 };
	char pass[32] = { 0 };
	int registered = 0;

public:
	userdatabase(int registered = 0);

	void registerUser();

	void signin();
};