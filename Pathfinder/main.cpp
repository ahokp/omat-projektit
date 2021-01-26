/**
* This program is a simple pathfinding algorithm
* For now it can find an easy path between two points
*
* TODO: GUI implementation, obstacles, utilize classes, make it smarter
*
**/

#include <iostream>
#include <vector>
#include <string>


int const X_SIZE =30;
int const Y_SIZE =15;

// Not used in this version of the program
void print_board(std::vector<std::string> board){

    int count = 0U;
    for(int i=0; i<Y_SIZE; i++){
        for(int j=0; j<X_SIZE; j++){
            std::cout<< board[count];
            count++;
        }
        std::cout<<" "<<std::endl;
    }
}

int main()
{

    int s_x;
    int s_y;
    std::cout<<"Starting tile(x, max "<< X_SIZE - 1<<"): ";
    std::cin>> s_x;
    std::cout<<"Starting tile(y, max "<< Y_SIZE - 1<<"): ";
    std::cin>> s_y;

    int e_x;
    int e_y;
    std::cout<<"End tile(x, max "<< X_SIZE - 1<<"): ";
    std::cin>> e_x;
    std::cout<<"End tile(y, max "<< Y_SIZE - 1<<"): ";
    std::cin>> e_y;


    std::vector<std::string> board(X_SIZE*Y_SIZE, "0");


    // prints and initializes the board
    int count = 0U;
    for(int y=0; y<Y_SIZE; y++){
        for(int x=0; x<X_SIZE; x++){

            if(s_x == x && s_y == y){
                board[count] = "S";
            }
            else if(e_x == x && e_y ==y){
                board[count] = "E";
            }
            std::cout<< board[count];
            count++;
        }
        std::cout<<" "<<std::endl;
    }

    int cur_x = s_x;
    int cur_y = s_y;

    bool running = true;
    while(running){

        if(cur_x == e_x && cur_y == e_y){
            running = false;
        }
        else{

            // Check if coords match, otherwise modify them
            if(cur_x != e_x){
                if(cur_x-e_x <0){
                    cur_x++;
                }
                else{
                    cur_x--;
                }
            }
            if(cur_y != e_y){
                if(cur_y-e_y <0){
                    cur_y++;
                }
                else{
                    cur_y--;
                }
            }

            // Prints board after modifications
            int count = 0U;
            for(int y=0; y<Y_SIZE; y++){
                for(int x=0; x<X_SIZE; x++){

                    if(cur_x == x && cur_y == y){
                        board[count] = "X";
                    }
                    std::cout<< board[count];
                    count++;
                }
                std::cout<<" "<<std::endl;
            }

            //print_board(board);
        }
        std::cout<<" "<<std::endl;
    }
   return EXIT_SUCCESS;
}
