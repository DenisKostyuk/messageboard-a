#include "Board.hpp"
#include "Direction.hpp"
#include <iostream>
#include "doctest.h"
using namespace std;
using namespace ariel;


TEST_CASE("reading the right messeges"){
    Board brd;
    string vocabulary = "abcdefghijklmnopqrstuvwxyz";
    unsigned int row = 2;
    unsigned int col = 2;
    string temp = "";
    for(unsigned int i=0;i<vocabulary.length()/2;i++){
        temp += vocabulary.at(i);
        temp += vocabulary.at(i+1);    
        brd.post(row,col,Direction::Vertical,temp);
        CHECK(brd.read(row,col,Direction::Vertical,2) == temp);
        temp = "";
    }
}
TEST_CASE("reading the right messeges"){
    Board brd;
    string vocabulary = "abcdefghijklmnopqrstuvwxyz";
    unsigned int row = 2;
    unsigned int col = 2;
    string temp = "";
    for(unsigned int i=0;i<vocabulary.length()/2;i++){
        temp += vocabulary.at(i);
        temp += vocabulary.at(i+1); 
        brd.post(row,col,Direction::Horizontal,temp);
        CHECK(brd.read(row,col,Direction::Vertical,2) == temp);
        temp = "";
    }
}

