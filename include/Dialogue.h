#include <iostream>
#include <string>

struct DialogueNode{
    std::string text;
    std::string opiton1, option2;
    DialogueNode *next1, *next2;
    int effect1, effect2;
};

class Dialogue{
public:
    Dialogue();
    int showDialogue();
private:
    DialogueNode *root;
    int effect;
}