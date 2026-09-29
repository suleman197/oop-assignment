#include <iostream> 

#include <iomanip> 

using namespace std; 

  

class Angle 

{ 

private: 

    int degrees; 

    double minutes; 

    char direction; 

  

public: 

    Angle() 

    { 

        degrees = 0; 

        minutes = 0.0; 

        direction = 'N'; 

    } 

  

    Angle(int d, double m, char dir) 

    { 

        if (isValid(d, m, dir)) 

        { 

            degrees = d; 

            minutes = m; 

            direction = dir; 

        } 

        else 

        { 

            cout << "Invalid angle values!" << endl; 

            degrees = 0; 

            minutes = 0.0; 

            direction = 'N'; 

        } 

    } 

  

    bool isValid(int d, double m, char dir) const 

    { 

        bool validDirection = 

            (dir == 'N' || dir == 'S' || 

             dir == 'E' || dir == 'W'); 

  

        bool validMinutes = (m >= 0 && m < 60); 

        bool validDegrees = (d >= 0 && d <= 180); 

  

        return validDegrees && validMinutes && validDirection; 

    } 

  

    void getAngle() 

    { 

        int d; 

        double m; 

        char dir; 

  

        cout << "Enter degrees: "; 

        cin >> d; 

  

        cout << "Enter minutes: "; 

        cin >> m; 

  

        cout << "Enter direction (N/S/E/W): "; 

        cin >> dir; 

  

        if (isValid(d, m, dir)) 

        { 

            degrees = d; 

            minutes = m; 

            direction = dir; 

        } 

        else 

        { 

            cout << "Invalid angle entered!" << endl; 

        } 

    } 

  

    void display() const 

    { 

        cout << degrees << "°" 

             << fixed << setprecision(1) 

             << minutes << "′ " 

             << direction << endl; 

    } 

}; 

  

int main() 

{ 

    Angle angle1; 

    Angle angle2(149, 34.8, 'W'); 

  

    cout << "Default Angle: "; 

    angle1.display(); 

  

    cout << "Initialized Angle: "; 

    angle2.display(); 

  

    cout << "\nEnter a new angle:" << endl; 

  

    angle1.getAngle(); 

  

    cout << "Entered Angle: "; 

    angle1.display(); 

  

    return 0; 

}
