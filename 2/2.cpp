

#include <iostream>
#include <vector>

double calculateAverage(const std::vector<double>& grades) {
    if (grades.size() == 0) {
        return 0.0;
    }

    double sum = 0.0;
    for (double grade : grades) {
        sum += grade;
    }

    return sum / grades.size();
}

int main() {
    setlocale(LC_ALL, "ukrainian");
std::vector<double> grades;
double grade;

std::cout << "Бал з математики: ";
std::cin >> grade;
grades.push_back(grade);

std::cout << "Бал з фізики: ";
std::cin >> grade;
grades.push_back(grade);

std::cout << "Бал з біології: ";
std::cin >> grade;
grades.push_back(grade);

std::cout << "Бал з іноземної мови: ";
std::cin >> grade;
grades.push_back(grade);

std::cout << "Бал з географії: ";
std::cin >> grade;
grades.push_back(grade);

double average = calculateAverage(grades);

std::cout << "Середній бал: " << average << std::endl;

return 0;
}




