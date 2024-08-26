//
// Created by G on 2024/8/26.
//

#ifndef MOVIE_THEATER_THEATER_H
#define MOVIE_THEATER_THEATER_H


#include <string>

class Theater {
private:
    std::string theater_name;

    int theater_capacity;

    std::string theater_type;

public:
    const std::string &getTheaterName() const;

    int getTheaterCapacity() const;

    const std::string &getTheaterType() const;

};


#endif //MOVIE_THEATER_THEATER_H
