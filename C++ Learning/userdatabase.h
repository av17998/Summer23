#include <stdlib.h>
class login {
   private:
       char user[32];
       char pass[32];
       int registered = 0;
   public:
       login(int registered = 0);

       void registerUser();

       void signin();
};