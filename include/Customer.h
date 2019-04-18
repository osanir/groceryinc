#include <string>
#include "Dialogue.h"
class Customer{
public:
    void makeConversation();
private:
    std::string name;
    Dialogue dialogue;
}