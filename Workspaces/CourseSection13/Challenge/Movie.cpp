// .cpp: To implment all methods for class specification (.h/.hpp)

#include "Movie.h"
#include <iostream>

void Movie::display_content(){
//    std::cout << "Here's Movie Content:" << std::endl;
    std::cout << movie_name << ", " << movie_rating << ", " << watched << std::endl;
}

 std::string Movie::get_movie_name() const{
     return movie_name;
 }

void Movie::set_movie_watched_count(int count){
    watched += count;
}


// Constructor: Use Initialization list to initialize all attribute members of Movie class 
Movie::Movie(std::string const &movie_name_val, std::string const &movie_rating_val, int const &watched_val)
    : movie_name {movie_name_val}, movie_rating {movie_rating_val}, watched {watched_val}{
}

Movie::~Movie(){
}
