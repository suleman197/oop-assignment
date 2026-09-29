#include <iostream> 

#include <conio.h> 

using namespace std; 

  

class TollBooth 

{ 

private: 

    unsigned int totalCars; 

    double totalCash; 

  

public: 

    TollBooth() 

    { 

        totalCars = 0; 

        totalCash = 0.0; 

    } 

  

    void payingCar() 

    { 

        totalCars++; 

        totalCash += 0.50; 

    } 

  

    void nopayCar() 

    { 

        totalCars++; 

    } 

  

    void display() const 

    { 

        cout << "\nTotal Cars: " << totalCars << endl; 

        cout << "Total Cash Collected: $" << totalCash << endl; 

    } 

}; 

  

int main() 

{ 

    TollBooth booth; 

    char key; 

  

    cout << "Toll Booth Program" << endl; 

    cout << "Press 'p' for paying car." << endl; 

    cout << "Press 'n' for non-paying car." << endl; 

    cout << "Press ESC to finish." << endl; 

  

    while (true) 

    { 

        key = _getch(); 

  

        if (key == 'p' || key == 'P') 

        { 

            booth.payingCar(); 

            cout << "\nPaying car recorded."; 

        } 

        else if (key == 'n' || key == 'N') 

        { 

            booth.nopayCar(); 

            cout << "\nNon-paying car recorded."; 

        } 

        else if (key == 27) 

        { 

            break; 

        } 

    } 

  

    booth.display(); 

  

    return 0; 

} 
