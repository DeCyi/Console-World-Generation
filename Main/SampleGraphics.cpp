

#include <iostream>
#include <cstdlib>
 
void generateWorld();
int main()
{
    srand(static_cast<unsigned>(time(0)));
    // Simulate how a world generated 
    for (int i = 0; i < 30; i++) {
        generateWorld();
    }
}
 void generateWorld() {
        int grap[] = { 1,2,3 };

        int randomArea = rand() % 30 + 1;
        for (int i = 0; i < randomArea; i++) {
            int randomNum = rand() % 3;
            //std::cout << grap[randomNum] << " ";    

            //std::cout << randomArea;

            std::cout << grap[randomNum] << " ";
        } // This ain't it
        std::cout << std::endl;
    }


