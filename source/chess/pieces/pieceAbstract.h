//
// Created by Cam on 07/17/2019.
//

#include <string>

#ifndef CHESSAI_PIECEABSTRACT_H
#define CHESSAI_PIECEABSTRACT_H


enum Color{black, white, blank};


class pieceAbstract{

public:
    enum Color color;
    int position[2];


};


#endif //CHESSAI_PIECEABSTRACT_H
