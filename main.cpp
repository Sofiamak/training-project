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

//      string userName;
//      string password;
//      int operation;

//      cout<<"Welcome to hell!"<<endl;
//      cout<<"Selection operation!"<<endl;
//      cout<<"1- registration of user"<<endl;
//      cout<<"2- info about user"<<endl;
//      cout<<"3- info about billing"<<endl;
//      cout<<"SELECT:"<<endl;
//      cin>>operation;

//      switch (operation) {
//           case 1:
//           cout << "Registration of User";
//        break;
//           case 2:
//           cout<<"Input your name:"<<endl;
//           cin>>userName;
//           cout<<"Input your password:"<<endl;
//           cin>>password;
//           cout << "Info User";
//           //findAllUsers();
//           selectUserByUsername(userName);
//        break;
//           case 3:
//           cout<<"Input your name:"<<endl;
//           cin>>userName;
//           cout<<"Input your password:"<<endl;
//           cin>>password;
//           selectUserByUsername(userName);
//           cout << "Billing";
//        break;
//           default:
//           cout << "Error. Make a choice";
//      }


    
//       //*********************Check auth*************************************//
//       //**********************************************************//
 
     
     
    
//     cout<<"-----------------test:"<<endl;
    
    App ap;
    ap.loginOrSignupUser();


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