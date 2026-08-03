#include <iostream>

class Work {

    public:
        bool is_done = false;
        void set_done() {
            is_done = true;
        }
};

class Coffee {

    public:
        bool is_empty = false;

        Coffee(bool is_empty = false) {
            is_empty = is_empty;
        }

        // Refill cup of coffee
        void refill() {
            std::cout << "Refilling cup of coffee" << std::endl;
        }


};

int main() {

    Work work;
    Coffee coffee(false);

    while (!work.is_done) {

        if (coffee.is_empty) {
            coffee.refill();
        };

        coffee.sip();
        work.do_some_work();
        
    };

    return 0;
}