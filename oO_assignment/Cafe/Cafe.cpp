#include <iostream>
using namespace std;

class CoffeeMachine {
    int coffee;
    int water;
    int sugar;
public:    
    CoffeeMachine();
    int selectMenu();
    void getRemain();
    void restock();
};

CoffeeMachine::CoffeeMachine(){
    coffee=3;
    water=5;
    sugar=2;

    cout << "Coffee Machine Starting..." << endl
        << "(System Message3): �ֹ��� �����մϴ�!" << endl << endl;
}

int CoffeeMachine::selectMenu(){
    int menu = 0;
    cout << "--- �޴� ---" << endl <<
        "1. Espresso" << endl <<
        "2. Americano" << endl <<
        "3. Sugar Coffee" << endl <<
        "4. System Exit" << endl <<
        "*�޴��� �����ϼ���: ";
    cin >> menu;
    return menu;
}

void CoffeeMachine::getRemain(CoffeeMachine status){
    cout << "(System Message1): Ŀ�Ǹӽ� ����, Ŀ��:" << status.coffee << "     " <<
        "��:" << status.water << "      " << "����:" << status.sugar << ")";
}

void CoffeeMachine::restock(CoffeeMachine status){
    status.coffee = 10;
    status.water = 10;
    status.sugar = 10;
}

int main(void) {


    CoffeeMachine customer;
    while (1) {
        switch (customer.selectMenu())
            case 1:
                cout << ".....[����������] ���Խ��ϴ�~" << endl <<
                    customer.getRemain() << endl;
                break;
            case 2:
                cout << ".....[����������] ���Խ��ϴ�~" << endl <<
                    customer.getRemain() << endl;
                break;
            case 3:
                cout << ".....[����������] ���Խ��ϴ�~" << endl <<
                    customer.getRemain() << endl;
                break;
            case 4:
                break;
                break;
            default:
                break;
    }
}