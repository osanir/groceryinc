#include <list>
#include "Assistant.h"
#include "Product.h"

class Grocer{
public:
    Grocer();


    int getCustomerCapacity();
    int getProductCapacity();
    int setCustomerCapacity(int);
    int setProductCapacity(int);
private:
    int customerCapacity;
    int productCapacity;
    int assistantCapacity;
    
    std::list<Assistant> assistants;
    std::list<Product> products;

}