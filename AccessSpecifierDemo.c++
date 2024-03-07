#include <iostream>

class AccessSpecifierDemo {
private:
    int priVar;
protected:
    int proVar;
public:
    int pubVar;

    // Method to set values for private, protected, and public variables
    void setVar(int priValue, int proValue, int pubValue) {
        priVar = priValue;
        proVar = proValue;
        pubVar = pubValue;
    }

    // Method to display values of private, protected, and public variables
    void getVar() {
        std::cout << "Private Variable: " << priVar << std::endl;
        std::cout << "Protected Variable: " << proVar << std::endl;
        std::cout << "Public Variable: " << pubVar << std::endl;
    }
};

int main() {
    AccessSpecifierDemo obj;

    // Set values for variables
    obj.setVar(10, 20, 30);

    // Display values of variables
    obj.getVar();

    return 0;
}


