#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int students = 40;
    const int days = 55;
    vector<vector<int>> attendance(students, vector<int>(days));
    srand(time(0));

    for (int i = 0; i < students; i++) {
        for (int j = 0; j < days; j++) {
            attendance[i][j] = rand() % 2;
        }
    }

    for (int i = 0; i < students; i++) {
        int presentCount = 0;
        for (int j = 0; j < days; j++) {
            presentCount += attendance[i][j];
        }
        double percentage = (presentCount * 100.0) / days;
        cout << "Student " << i + 1 << " Attendance: " << presentCount 
             << "/" << days << " (" << percentage << "%)" << endl;
    }

    return 0;
}
