#ifndef MOVIE_H
#define MOVIE_H
#include <string>

class Movie
{
private:
    std::string movie_name;
    std::string movie_rating;
    int watched;
    
    
public:
    void display_content();
    std::string  get_movie_name() const;
    void set_movie_watched_count(int count = 1);
    Movie(std::string const &movie_name_val, std::string const &movie_rating_val, int const &watched_val);
    ~Movie();

};

#endif // MOVIE_H
