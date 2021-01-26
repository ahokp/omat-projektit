#include <iostream>
#include <vector>
#include <string>


int const X_SIZE =30;
int const Y_SIZE =15;


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


    // prints the board
    int count = 0U;
    for(int y=0; y<Y_SIZE; y++){
        for(int x=0; x<X_SIZE; x++){

            if(s_x == x && s_y == y){
                board[count] = "X";
            }
            else if(e_x == x && e_y ==y){
                board[count] = "X";
            }
            std::cout<< board[count];
            count++;
        }
        std::cout<<" "<<std::endl;
    }

   return EXIT_SUCCESS;
}
