#ifndef TERRAIN_H
#define TERRAIN_H

#include <iostream> 
#include <cstdlib>


class Terrain {
public:
    void GenerateTerrain();
    void generateWorld() {
        char grap[] = { '|','/','\\' };

        int randomArea = rand() % 30 + 1;
        for (int i = 0; i < randomArea; i++) {
            int randomNum = rand() % 3;

            std::cout << grap[randomNum] << " ";
        } // This ain't it
        std::cout << std::endl;

        // Set limits
    }
};

#endif
