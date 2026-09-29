#include <iostream> 

#include <iomanip> 

using namespace std; 

  

class Time 

{ 

private: 

    int hours; 

    int minutes; 

    int seconds; 

  

public: 

    Time() 

    { 

        hours = 0; 

        minutes = 0; 

        seconds = 0; 

    } 

  

    Time(int h, int m, int s) 

    { 

        hours = h; 

        minutes = m; 

        seconds = s; 

    } 

  

    void display() const 

    { 

        cout << setfill('0') << setw(2) << hours << ":" 

             << setw(2) << minutes << ":" 

             << setw(2) << seconds << endl; 

    } 

  

    void addTime(const Time& t1, const Time& t2) 

    { 

        seconds = t1.seconds + t2.seconds; 

        minutes = t1.minutes + t2.minutes; 

        hours = t1.hours + t2.hours; 

  

        if (seconds >= 60) 

        { 

            seconds -= 60; 

            minutes++; 

        } 

  

        if (minutes >= 60) 

        { 

            minutes -= 60; 

            hours++; 

        } 

    } 

}; 

  

int main() 

{ 

    const Time time1(2, 45, 30); 

    const Time time2(3, 20, 40); 

  

    Time result; 

  

    cout << "Time 1: "; 

    time1.display(); 

  

    cout << "Time 2: "; 

    time2.display(); 

  

    result.addTime(time1, time2); 

  

    cout << "Result: "; 

    result.display(); 

  

    return 0; 

} 
