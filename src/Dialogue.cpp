#include "../include/Dialogue.h"

Dialogue::Dialogue(){

}

int Dialogue::showDialogue(){
    while(1){
        std::cout << (*root).text << std::endl;
        std::cout << (*root).opiton1 << std::endl;
        std::cout << (*root).option2 << std::endl;
        int ch;
        std::cin >> ch;
        if( ch == 1 ){
            effect += root->effect1;
            root = root->next1;
        } 
        if( ch == 2 ){
            effect += root->effect2;
            root = root->next2;
        } 
    
        if( root == NULL )
            return effect;
    }
}