#ifndef MYSQL_LIB_H
#define MYSQL_LIB_H

#include <bits/stdc++.h> 
#include <cstdio>
#include "mysql/mysql.h"
#include "Interfacesql.h"
#include <iostream>

namespace mysql
{

using namespace std;

class MySql: public InterfaceSQL{

        MYSQL *con = mysql_init(nullptr);
        MYSQL_RES *res; 
        
        public:

            const char *HOST;
            const char *USER;
            const char *PASSWD;
            const char *DB;
            unsigned int PORT;
            const char *UNIX_SOXKET;
            unsigned long CLIENTFLAG;
            

            MySql(){
                this->HOST=NULL;
                this->USER=NULL;
                this->PASSWD=NULL;
                this->DB=NULL;
                this->PORT=80;
                this->UNIX_SOXKET=NULL;
                this->CLIENTFLAG=0;
            }

            bool getConnect(){
                if (con == NULL) {
                fprintf(stderr, "%s\n", mysql_error(con));
                    return false;
                }
                
                if (mysql_real_connect(con,this->HOST,this->USER,this->PASSWD,
                    this->DB, this->PORT , this->UNIX_SOXKET , this->CLIENTFLAG) == NULL) {
                    fprintf(stderr, "%s\n", mysql_error(con));
                    mysql_close(con);
                    return false;
                }
            return true;
            }

            void selectAllUsers(){
               
               int rows;
               MYSQL_ROW row;
               
                if (mysql_query(con, "SELECT * FROM Users") == 0)
                {
                    res = mysql_store_result(con);
                    if (res != NULL)
                    {
                        rows = mysql_num_rows(res);
                        printf("Retrieved %d rows\n", rows);

                        while((row = mysql_fetch_row(res))) {
                            for (int i=0 ; i < mysql_num_fields(res); i++){
                                printf("%s\n",row[i]);
                            }    
                        }

                    }
                     else {
                        printf("Query failed\n");
                    }
                }
                else{
                    abort();
                }
            }


            //  void selectUserByUsername(string username){
               
            // //    int rows;
            // //    MYSQL_ROW row;
               
            // //     if (mysql_query(con, "SELECT * FROM Users WHERE username='"+username+"'") == 0)
            // //     {
            // //         res = mysql_store_result(con);
            // //         if (res != NULL)
            // //         {
            // //             rows = mysql_num_rows(res);
            // //             printf("Retrieved %d rows\n", rows);

            // //             while((row = mysql_fetch_row(res))) {
            // //                 for (int i=0 ; i < mysql_num_fields(res); i++){
            // //                     printf("%s\n",row[i]);
            // //                 }    
            // //             }

            // //         }
            // //          else {
            // //             printf("Query failed\n");
            // //         }
            // //     }
            // //     else{
            // //         abort();
            // //     }
            // }

            void close(){
                    mysql_close(con);
                }
            };

}
#endif