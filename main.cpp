#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
#include "lib/sql/mysql.h"
#include "database/api/driver.cpp"
#include "app/userregister.cpp"

using namespace driver;
using namespace mysql;

int main(void) {
     // MySql ms;
     // ms.HOST="127.0.0.1";
     // ms.USER="root";
     // ms.PASSWD="pass";
     // ms.DB="web";
     // ms.PORT=3326;
     // DBDriver::init(ms).getConnect();
     // DBDriver::init(ms).test();
     //DBDriver::init(ms).close();   

     UserRegister ur;
     ur.setFName("vasia");
     ur.setLName("vasilevich");
     ur.Info();
     ur.setFName("petia");
     ur.setLName("petrovich");
     ur.Info();
}
