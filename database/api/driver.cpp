#include "../../lib/sql/Interfacesql.h"

namespace driver
{ 
    class  DBDriver
    {
        public: 
            static InterfaceSQL& init(InterfaceSQL &in);  
    };

    InterfaceSQL& DBDriver::init(InterfaceSQL &in) {
            return  in;
    }
}