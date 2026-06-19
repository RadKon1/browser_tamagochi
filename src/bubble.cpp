#include "../include/bubble.h"
#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

Bubble::Bubble(){
    name = "Bąbelek";
    statistics = {
        {"Fullness", 100},
        {"Satiation", 100},
        {"Excitement level", 100},
        {"Cleanliness", 100}
    };
}

std::string Bubble::get_name() const {
    return name;
}

void Bubble::set_name(std::string new_name){
    name = new_name;
}

auto Bubble::get_statistics() const {
    return statistics;
}

void Bubble::get_beer(double beer){
    double drinks = statistics["Satiation"] + beer;
    statistics["Satiation"] = std::min(drinks, 100.0);
}

void Bubble::get_food(double food_amount){
    double food = statistics["Fullness"] + food_amount;
    statistics["Fullness"] = std::min(food, 100.0);
}

void Bubble::shower(double shampoo_amount){
    double shampoo = statistics["Cleanliness"] + shampoo_amount;
    statistics["Cleanliness"] = std::min(shampoo, 100.0);
}

