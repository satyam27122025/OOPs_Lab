#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class Calendar {
private:
    bool isLeapYear(int year) const {
        return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
    }

    int daysInMonth(int month, int year) const {
        const int days[] = {31, 28, 31, 30, 31, 30,
                            31, 31, 30, 31, 30, 31};

        if (month == 2 && isLeapYear(year))
            return 29;

        return days[month - 1];
    }

    int firstWeekday(int year, int month) const {
        int adjustedYear = year;

        if (month < 3) {
            month += 12;
            --adjustedYear;
        }

        const int yearOfCentury = adjustedYear % 100;
        const int zeroBasedCentury = adjustedYear / 100;
        const int zeller =
            (1 + 13 * (month + 1) / 5 + yearOfCentury +
             yearOfCentury / 4 + zeroBasedCentury / 4 +
             5 * zeroBasedCentury) % 7;

        return (zeller + 6) % 7;
    }

public:
    void printYear(int year) const {
        const string monthNames[] = {
            "January", "February", "March", "April",
            "May", "June", "July", "August",
            "September", "October", "November", "December"};

        cout << "\nCalendar for " << year << "\n";

        for (int month = 1; month <= 12; ++month) {
            cout << "\n       " << monthNames[month - 1] << " " << year
                 << "\n Sun Mon Tue Wed Thu Fri Sat\n";

            int weekday = firstWeekday(year, month);
            for (int blank = 0; blank < weekday; ++blank)
                cout << "    ";

            for (int day = 1; day <= daysInMonth(month, year); ++day) {
                cout << setw(4) << day;

                if (weekday == 6) {
                    cout << '\n';
                    weekday = 0;
                } else {
                    ++weekday;
                }
            }

            if (weekday != 0)
                cout << '\n';
        }
    }
};

int main() {
    int year;
    cout << "Enter a year (1-9999): ";

    if (!(cin >> year) || year < 1 || year > 9999) {
        cerr << "Please enter a valid year between 1 and 9999.\n";
        return 1;
    }

    Calendar calendar;
    calendar.printYear(year);

    return 0;
}
