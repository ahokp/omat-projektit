#include <iostream>
#include <vector>

int const SIZE =30;


int main()
{

    int s_x;
    int s_y;
    std::cout<<"Starting tile(x, max "<< SIZE - 1<<"): ";
    std::cin>> s_x;
    std::cout<<"Starting tile(y, max "<< SIZE/2 - 1<<"): ";
    std::cin>> s_y;

    int e_x;
    int e_y;
    std::cout<<"End tile(x, max "<< SIZE - 1<<"): ";
    std::cin>> e_x;
    std::cout<<"End tile(y, max "<< SIZE/2 - 1<<"): ";
    std::cin>> e_y;


    std::vector<std::vector<int>> current_tiles;

    // prints the board
    for(int y=0; y<SIZE/2; y++){
        for(int x=0; x<SIZE; x++){

            if(s_x == x && s_y == y){
                std::cout<< "S";
            }
            else if(e_x == x && e_y ==y){
                std::cout<< "E";
            }
            else{
               std::cout<< "O";
            }
        }
        std::cout<<" "<<std::endl;
    }

   return EXIT_SUCCESS;
}
