#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

class Bubble {
    private:
        std::string name;
        std::unordered_map<std::string, double> statistics;
    public:
        Bubble();
        std::string get_name() const;
        void set_name(std::string new_name);
        auto get_statistics() const;
        void get_beer(double beer);
        void shower(double shampoo_amount);
        void get_food(double food_amount);
        void play();
        friend std::ostream& operator<<(std::ostream& os, const Bubble& bubble);
};