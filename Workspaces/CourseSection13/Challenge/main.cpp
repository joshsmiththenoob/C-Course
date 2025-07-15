#include <iostream>
#include <string>
#include "Movie.h"
#include "Movies.h"

void add_movie(Movies &movies, std::string movie_name_val, std::string movie_rating_val, int watched_val){
    if (movies.add_movie(movie_name_val, movie_rating_val, watched_val))
        std::cout << "Movie: " << movie_name_val << " added." << std::endl;
    else
        std::cout << "Movie: " << movie_name_val << " already exist." << std::endl;
}


void display_movies(Movies &movies){
    movies.display_all_movies();
}


void add_movie_watched_count(Movies &movies, std::string movie_name_val){
    if (movies.increase_watched_count_by_one(movie_name_val))
        std::cout << "Movie: " << movie_name_val << "'s watched count is added by 1." << std::endl;
    else
        std::cout << "Movie: " << movie_name_val <<" doesn't existed. Need to add this movie first!!!" << std::endl;
}


int main(){
//    Movie movie1{"Cinderella", "PG", 10};
//    movie1.display_content();
//    
    Movies movie_list{};
//    movie_list.display_all_movies();
//    movie_list.add_movie("BigBang", "PG", 29);
//    movie_list.display_all_movies();
    display_movies(movie_list);
    add_movie(movie_list, "BigBang", "PG", 29);
    add_movie(movie_list, "U149", "PG", 500);
    display_movies(movie_list);
    add_movie_watched_count(movie_list, "BigBang");
    display_movies(movie_list);
    add_movie_watched_count(movie_list, "Cinderella Girls");
    add_movie(movie_list, "Cinderella Girls", "PG-13", 2000);
    display_movies(movie_list);
    add_movie_watched_count(movie_list, "Cinderella Girls");
    display_movies(movie_list);
    add_movie_watched_count(movie_list, "XXXXXXX");


    std::cout << "\n ---------------- Works ! ------------------------" << std::endl;
    return 0;
}