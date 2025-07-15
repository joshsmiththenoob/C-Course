#include <iostream>
#include "Movies.h"
#include "Movie.h"

Movie* Movies::check_if_movie_is_existed(std::string const &movie_name_val){
//    Movie* movie_ptr{nullptr};
//     
//    if (movie_collection.size() == 0)
//        movie_ptr = nullptr;
//    else{
//        for (int unsigned i = 0; i < movie_collection.size(); i++){
//            if (movie_name_val == movie_collection[i].get_movie_name()){
//                movie_ptr = &movie_collection[i];
//                break;
//        }
//    }
//    return movie_ptr;


    // Method 2: range-based for-loop : no-need to use index i to iterate vector/array and avoid the timing when vector/array is empty (i == vector.size())
    for (Movie &movie: movie_collection){
        if (movie.get_movie_name() == movie_name_val)
            return &movie;
    }
    return nullptr;
}


bool Movies::add_movie(std::string const &movie_name_val, std::string const &movie_rating_val, int const &watched_val){
    Movie*  movie_ptr {check_if_movie_is_existed(movie_name_val)};
    
    if (movie_ptr == nullptr){
        movie_collection.push_back(Movie(movie_name_val, movie_rating_val, watched_val));
        return true;
    }else
        return false;
}


bool Movies::increase_watched_count_by_one(std::string movie_name_val){
    Movie* movie_ptr {check_if_movie_is_existed(movie_name_val)};
    
    if (movie_ptr == nullptr)
        return false;
    else{
        (*movie_ptr).set_movie_watched_count();
        return true;
    }
}


void Movies::display_all_movies(){
    if (movie_collection.size() == 0)
        std::cout << "Uh-Oh....No movie to display..." << std::endl;
    else {
        for (int unsigned i = 0; i < movie_collection.size(); i++){
            std::cout << " -----------------------------------------------" << std::endl;
            movie_collection[i].display_content();
        }   
    }
}


Movies::Movies(){
}

Movies::~Movies(){
}
