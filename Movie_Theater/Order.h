//
// Created by G on 2024/8/26.
//

#ifndef MOVIE_THEATER_ORDER_H
#define MOVIE_THEATER_ORDER_H


#include "User.h"
#include "Movie.h"

class Order {
private:
    int oderID;
    User usr;
    Movie movie;
    Theater theater;
    int seats; //可以是二维数组？
    int status;
public:
    static void createOrder();


};


#endif //MOVIE_THEATER_ORDER_H
