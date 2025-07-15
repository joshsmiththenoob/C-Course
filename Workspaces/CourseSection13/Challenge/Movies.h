#ifndef MOVIES_H
#define MOVIES_H
#include "Movie.h"
#include <vector>
#include <string>


class Movies
{
private:
    std::vector<Movie> movie_collection;
    Movie* check_if_movie_is_existed(std::string const &movie_name_val);
    
public:
    bool add_movie(std::string const &movie_name_val, std::string const &movie_rating_val, int const &watched_val);
    bool increase_watched_count_by_one(std::string movie_name_val);
    void display_all_movies();
    Movies();
    ~Movies();

};

#endif // MOVIES_H
