#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed random number generator for realistic room simulation
    srand(time(0));

    // =======================================================
    // PART 1: 1D Array - Weekly Revenue Tracker
    // =======================================================
    cout << "===================================================" << endl;
    cout << "       PART 1: WEEKLY REVENUE TRACKER (1D)" << endl;
    cout << "===================================================" << endl;

    double revenue[7];
    double totalRevenue = 0.0;
    string days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    // Input daily revenues
    for (int i = 0; i < 7; i++) {
        cout << "Enter revenue for " << days[i] << ": $";
        cin >> revenue[i];
        totalRevenue += revenue[i];
    }

    double averageRevenue = totalRevenue / 7.0;

    // Display Revenue Results
    cout << fixed << setprecision(2);
    cout << "\n--- Weekly Revenue Summary ---" << endl;
    cout << "Total Weekly Revenue : $" << totalRevenue << endl;
    cout << "Average Daily Revenue: $" << averageRevenue << endl;
    cout << endl;

    // =======================================================
    // PART 2: 2D Array - Room Occupancy (One Branch)
    // =======================================================
    cout << "===================================================" << endl;
    cout << "      PART 2: BRANCH ROOM OCCUPANCY (2D)" << endl;
    cout << "===================================================" << endl;

    int occupancy[5][10];

    // Simulate random occupancy data (1 = occupied, 0 = vacant)
    for (int floor = 0; floor < 5; floor++) {
        for (int room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2;
        }
    }

    // Display floor summary
    cout << "\nFloor-by-Floor Occupancy Breakdown:" << endl;
    for (int floor = 0; floor < 5; floor++) {
        int occupiedCount = 0;
        int vacantCount = 0;

        for (int room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1) {
                occupiedCount++;
            } else {
                vacantCount++;
            }
        }

        cout << "Floor " << (floor + 1) << ": "
             << occupiedCount << " Occupied | "
             << vacantCount << " Vacant" << endl;
    }
    cout << endl;

    // =======================================================
    // PART 3: 3D Array - Multiple Branches
    // =======================================================
    cout << "===================================================" << endl;
    cout << "    PART 3: ALL BRANCHES CHAIN OCCUPANCY (3D)" << endl;
    cout << "===================================================" << endl;

    int chain[3][5][10];
    int totalChainOccupied = 0;
    int totalChainRooms = 3 * 5 * 10;

    // Assign random occupancy across 3 branches, 5 floors, 10 rooms
    for (int branch = 0; branch < 3; branch++) {
        for (int floor = 0; floor < 5; floor++) {
            for (int room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;
                if (chain[branch][floor][room] == 1) {
                    totalChainOccupied++;
                }
            }
        }
    }

    // Display overall results
    cout << "\n--- Chain-Wide Occupancy Summary ---" << endl;
    cout << "Total Branches       : 3" << endl;
    cout << "Total Hotel Rooms    : " << totalChainRooms << endl;
    cout << "Total Occupied Rooms : " << totalChainOccupied << endl;
    cout << "Total Vacant Rooms   : " << (totalChainRooms - totalChainOccupied) << endl;
    cout << "Overall Occupancy Rate: " << (static_cast<double>(totalChainOccupied) / totalChainRooms) * 100 << "%" << endl;
    cout << "===================================================" << endl;

    return 0;
}