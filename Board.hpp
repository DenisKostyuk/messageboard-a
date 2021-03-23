#include "Direction.hpp"
#include <iostream>
#include <string>
using namespace std;

namespace ariel{
    class Board{
        private:
            unsigned int row = 100;
            unsigned int col = 100;
            string message = "";
        public:
            void post(unsigned int row, unsigned int col, Direction pos,const string &msg);
            string read(unsigned int row, unsigned int col, Direction pos , unsigned int numberOfChars);
            void show();
    };
}