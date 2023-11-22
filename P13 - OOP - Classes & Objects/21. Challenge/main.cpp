/*
    For this challenge you are to develop the foundation for a program
    for movie fanatics to keep track of what movies they have watched
    and how many times they watched each movie.

    The program must support the following:

    class Movie - models a movie which includes
    - movie name
    - movie rating (G, PG, PG-13, R)
    - movie stars (1, 2, 3, 4, 5)
    - movie synopsis
    - watched - number of times the movie has been watched

    class Movies - models a collection of movie objects

    Obviously, Movies need to know about Movie since it is collection of Movie object
    However, our main driver should only interact with Movies class.

    For example, a simple main should be able to
    - craate a Movies object
    - ask the Movies object to add movie by provideng the movie name, rating and warched count
    - ask the Movies object to increment the watched count by 1 for a moive given its name
    - ask the Movies object to display all of its movies

    Additionally,
    - If we try to add a movie whose name is already in the movies coolection
      we should display this error to the user.
    - If we try to increment the watched count for a movie whose name is not
      in the collenction we should display this error to the user.

    I've provided a basic shell as a starting point for one possible solution
    that has fully implemented
    - Movie and main

    You can choose to use my starting point or start from scratch.

    Here is what your project files should look like:
    - Movie.h - include file with the Movie class specification
    - Movie.cpp - file with the Movie class implementation
    - Movies.h - include file with the Movies class specification
    - Movies.cpp - file with the Movies class implementation
    - main.cpp - the main driver that creates a Movies object and adds and
      increments movies.

    Don't create a menu-driven system like we've done in the past -- just concentrate
    on getting the program working. Once it is working, you can certainlay provide 
    a menu system for the user.

    This program is not trivial for, but it's a good challenge for beginning 
    C++ Programmmers.

    Here is a sample main and the output. Make sure you understand the program flow
    before you start coding!

    Good luck and have fun!

*/

#include "Movies21.h"

void increment_watched(Movies &movies, std::string name);
void add_movie(Movies &movies, std::string name, std::string rating, std::string synopnis, int stars, int watched);

void increment_watched(Movies &movies, std::string name) {
    if (movies.increment_watched(name)) {
        std::cout << name << " watched incremented" << std::endl;
    } else {
        std::cout << name << " not found" << std::endl;
    }
}

void add_movie(Movies &movies, std::string name, std::string rating, std::string synopsis, int stars, int watched) {
    if (movies.add_movie(name, rating, synopsis, stars, watched)) {
        std::cout << name << " added" << std::endl;
    } else {
        std::cout << name << " already exists" << std::endl;
    }
}

int main() {
    std::cout << std::endl;

    Movies my_movies;

    my_movies.display();

    add_movie(my_movies, "REAL", "R", "good", 1, 2);

    increment_watched(my_movies, "REAL");

    my_movies.display();

    std::cout << std::endl;
    return 0;
}

