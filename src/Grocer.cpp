#include "../include/Grocer.h"

Grocer::Grocer(){

}

int Grocer::getCustomerCapacity(){
    return customerCapacity;
}

int Grocer::getProductCapacity(){
    return productCapacity;
}

int Grocer::setCustomerCapacity(int val){
    customerCapacity = val;
}

int Grocer::setProductCapacity(int val){
    productCapacity = val;
}