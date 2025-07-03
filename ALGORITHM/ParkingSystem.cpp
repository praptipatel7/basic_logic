//===============================================================
//Check if there is any free parking slot for 3 different sizes
//of cars small, medium, and large
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class ParkingSystem {
private:
    int bigSlots;
    int mediumSlots;
    int smallSlots;
public:
    ParkingSystem(int big, int medium, int small) {
        bigSlots = big;
        mediumSlots = medium;
        smallSlots = small;
    }
    
    bool addCar(int carType) {
        if (carType == 1 && bigSlots > 0) {
            bigSlots--;
            return true;
        } else if (carType == 2 && mediumSlots > 0) {
            mediumSlots--;
            return true;
        } else if (carType == 3 && smallSlots > 0) {
            smallSlots--;
            return true;
        }
        return false;
    }
};

int main() {
    vector<string> actions = {"ParkingSystem", "addCar", "addCar", "addCar", "addCar"};
    vector<vector<int>> inputs = {{1, 1, 0}, {1}, {2}, {3}, {1}};

    ParkingSystem ps(inputs[0][0], inputs[0][1], inputs[0][2]);
    cout << "null" << endl;

    for (size_t i = 1; i < actions.size(); ++i) {
        if (actions[i] == "addCar") {
            bool result = ps.addCar(inputs[i][0]);
            cout << (result ? "true" : "false") << endl;
        }
    }

    return 0;
}
