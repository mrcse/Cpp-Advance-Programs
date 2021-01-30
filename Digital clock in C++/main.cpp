// CPP program to create a timer
#include <iomanip>
#include <iostream>
#include <windows.h>        // for sleep function
using namespace std;

// hours, minutes, seconds of timer
int hours = 0;
int minutes = 0;
int seconds = 0;

// function to display the timer
void displayClock()
{
	// system call to clear the screen
	system("cls");

	cout << "\t\t\t           TIMER		  \n";
	cout << "\t\t\t --------------------------\n";
	cout << "\t\t\t| " << setfill('0') << setw(2) << hours << " hrs | ";
	cout << setfill('0') << setw(2) << minutes << " min | ";
	cout << setfill('0') << setw(2) << seconds << " sec |" << endl;
	cout << "\t\t\t --------------------------\n";
}

void timer()
{
	// infinte loop because timer will keep
	// counting. To kill the process press
	// Ctrl+D. If it does not work ask
	// ubuntu for other ways.
	while (true) {

		// display the timer
		displayClock();

		// sleep system call to sleep
		// for 1 second
		Sleep(1000);

		// increment seconds
		seconds++;

		// if seconds reaches 60
		if (seconds == 60) {

			// increment minutes
			minutes++;

			// if minutes reaches 60
			if (minutes == 60) {

				// increment hours
				hours++;
				minutes = 0;
			}
			seconds = 0;
		}
	}
}

// Driver Code
int main()
{
	// start timer from 00:00:00
	timer();
	return 0;
}
