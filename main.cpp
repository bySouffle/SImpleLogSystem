#include <iostream>
#include "LogSystem.h"
int main() {
    RockLogSystem *logsys = RockLogSystem::get_instance();
    int i  = 64;
    int count = 0;
    while (true){
        std::string str_1(64,i);
        str_1.append("\n");
        logsys->add_log_info_item( logsys->trans_id(0,0), std::string ( 64, i ).data() );
#if 1
        logsys->add_log_info_item( logsys->trans_id(1,0), std::string ( 64, i ).data() );
        logsys->add_log_info_item( logsys->trans_id(2,0), std::string ( 64, i ).data() );
        logsys->add_log_info_item( logsys->trans_id(3,0), std::string ( 64, i ).data() );

        logsys->add_log_info_item( logsys->trans_id(0,1), std::string ( 64, i ).data() );
        logsys->add_log_info_item( logsys->trans_id(1,1), std::string ( 64, i ).data() );
        logsys->add_log_info_item( logsys->trans_id(2,1), std::string ( 64, i ).data() );
        logsys->add_log_info_item( logsys->trans_id(3,1), std::string ( 64, i ).data() );

        i++;
        std::string str_2(64,i);
        str_2.append("\n");
        logsys->add_log_info_item( logsys->trans_id(0,0), std::string ( 64, i ).data() );
        logsys->add_log_info_item( logsys->trans_id(1,0), std::string ( 64, i ).data() );
        logsys->add_log_info_item( logsys->trans_id(2,0), std::string ( 64, i ).data() );
        logsys->add_log_info_item( logsys->trans_id(3,0), std::string ( 64, i ).data() );

        logsys->add_log_info_item( logsys->trans_id(0,1), std::string ( 64, i ).data() );
        logsys->add_log_info_item( logsys->trans_id(1,1), std::string ( 64, i ).data() );
        logsys->add_log_info_item( logsys->trans_id(2,1), std::string ( 64, i ).data() );
        logsys->add_log_info_item( logsys->trans_id(3,1), std::string ( 64, i ).data() );

        i++;
        std::string str_3(64,i);
        str_3.append("\n");
        logsys->add_log_info_item( logsys->trans_id(0,0), std::string ( 64, i ).data() );
        logsys->add_log_info_item( logsys->trans_id(1,0), std::string ( 64, i ).data() );
        logsys->add_log_info_item( logsys->trans_id(2,0), std::string ( 64, i ).data() );
        logsys->add_log_info_item( logsys->trans_id(3,0), std::string ( 64, i ).data() );

        logsys->add_log_info_item( logsys->trans_id(0,1), std::string ( 64, i ).data() );
        logsys->add_log_info_item( logsys->trans_id(1,1), std::string ( 64, i ).data() );
        logsys->add_log_info_item( logsys->trans_id(2,1), std::string ( 64, i ).data() );
        logsys->add_log_info_item( logsys->trans_id(3,1), std::string ( 64, i ).data() );

        i++;

//        logsys.add_log_info_item( logsys.trans_id(1,0), std::string (32,'b').data() );
//        logsys.add_log_info_item( logsys.trans_id(2,0), std::string (32,'c').data() );
//        logsys.add_log_info_item( logsys.trans_id(3,0), std::string (32,'d').data() );
//
//        logsys.add_log_info_item( logsys.trans_id(0,1), std::string (32,'e').data() );
//        logsys.add_log_info_item( logsys.trans_id(1,1), std::string (32,'f').data() );
//        logsys.add_log_info_item( logsys.trans_id(2,1), std::string (32,'g').data() );
//        logsys.add_log_info_item( logsys.trans_id(3,1), std::string (32,'h').data() );
#endif

//          sync();
//        usleep(1000*250);

        if(i >(126-64) + 64){
            i = 64;
            count += 1;
            if(count > 64)
            {
             return 0 ;
            }
        }
    }
    return 0;

}
