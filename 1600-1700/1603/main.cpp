class ParkingSystem
{
public:
    int big, medium, small;
    ParkingSystem(int big, int medium, int small)
    {
        this->big = big;
        this->medium = medium;
        this->small = small;
    }

    bool addCar(int carType)
    {
        bool has_space;
        switch (carType)
        {
        case 1:
        {
            has_space = big > 0;
            big--;
            break;
        }
        case 2:
        {
            has_space = medium > 0;
            medium--;
            break;
        }
        case 3:
        {
            has_space = small > 0;
            small--;
            break;
        }
        }
        return has_space;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */