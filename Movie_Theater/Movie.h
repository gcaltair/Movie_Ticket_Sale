//
// 电影信息类
//

#ifndef MOVIE_THEATER_MOVIE_H
#define MOVIE_THEATER_MOVIE_H


#include <string>
#include "Theater.h"
class Movie {
    std::string session_number;
    std::string affiliated_cinema; //归属影院
    Theater play_theater;
    std::string start_time;
    std::string end_time;
    int remaining_ticket;
    double price;
    std::string theater_type;
    //优惠活动待补充

};


#endif //MOVIE_THEATER_MOVIE_H
