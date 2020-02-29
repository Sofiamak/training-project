#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
#include "lib/sql/mysql.h"
#include "database/api/driver.cpp"
#include "app/app.cpp"
#include <string>


using namespace driver;
using namespace mysql;
using namespace std;

// void  findAllUsers();
// void selectUserByUsername1(string username);

int main(void) {
     App::RunConsole();
}


// void  findAllUsers(){
//      MySql ms;
//      ms.HOST="127.0.0.1";
//      ms.USER="root";
//      ms.PASSWD="pass";
//      ms.DB="web";
//      ms.PORT=3326;
//      DBDriver::init(ms).getConnect();
//      DBDriver::init(ms).selectAllUsers();
//      DBDriver::init(ms).close(); 
// }


//  void selectUserByUsername1(string username){
//     MySql ms;
//      ms.HOST="127.0.0.1";
//      ms.USER="root";
//      ms.PASSWD="pass";
//      ms.DB="web";
//      ms.PORT=3326;
//      DBDriver::init(ms).getConnect();
//      DBDriver::init(ms).selectUserByUsername(username);
//      DBDriver::init(ms).close(); 
//  }