

#include <iostream>
#include <cstdlib>
#include "../Header/Terrain.h"


int main()
{
    Terrain myTerrain;
    srand(static_cast<unsigned>(time(0)));
    // Simulate how a world generated 
    for (int i = 0; i < 30; i++) {
        myTerrain.generateWorld();
    } 


    
    myTerrain.GenerateTerrain();


    return 0;
}
 /*void generateWorld() {
        char grap[] = { '|','/','\\'};

        int randomArea = rand() % 30 + 1;
        for (int i = 0; i < randomArea; i++) {
            int randomNum = rand() % 3;

            std::cout << grap[randomNum] << " ";
        } // This ain't it
        std::cout << std::endl;

        // Set limits
    }*/


