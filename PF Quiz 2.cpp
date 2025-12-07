#include <iostream>
#include <iomanip>

int main() {
    int N;
    long double total_revenue = 0.0;
    int grand_event_count = 0;

    std::cout << "Enter the total number of events (N): ";
    std::cin >> N;

    if (N <= 0) {
        std::cout << "Invalid number of events. Exiting program.\n";
        return 1;
    }

    for (int i = 1; i <= N; ++i) {
        long double current_bill;

        std::cout << "\n--- Event " << i << " ---\n";
        std::cout << "Enter the food bill for Event " << i << ": $";
        std::cin >> current_bill;

        total_revenue += current_bill;

        if (current_bill > 60000.0) {
            std::cout << "Grand Event\n";
            grand_event_count++;
        }
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Total Revenue from " << N << " Events: $" << total_revenue << "\n";
    std::cout << "Number of Grand Events (> 60,000): " << grand_event_count << "\n";

    return 0;
}
