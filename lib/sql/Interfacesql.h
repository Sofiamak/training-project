#ifndef ISQL_LIB_H
#define ISQL_LIB_H

class InterfaceSQL{
    public:
        bool virtual  getConnect()=0;
        void virtual  selectAllUsers()=0;
        void virtual  close()=0;
       // void virtual  selectUserByUsername(string)=0;
};        

#endif
