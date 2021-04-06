#ifndef __BOARD_H
#define __BOARD_H
#include <utility>
#include <iostream>
#include <string.h>
#include <map>
#include <vector>
#include <algorithm>
#include "Direction.hpp"
using namespace std;
typedef pair <unsigned int, unsigned int> coridnation;
namespace ariel {
class Board	{
    private:	
		map <coridnation, char> board;
    public:
      void show();
	  string read(unsigned int row, unsigned int column, Direction direction, unsigned int length);
	  void post(unsigned int row, unsigned int column, Direction direction, const std::string &post);
};
}
#endif