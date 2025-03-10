#include <iostream>
#include <array>

// int main() {
//     std::array<double, 3> times;
//     std::cout << "Enter three times for the 40-yd dash:\n";
    
//     for (int i = 0; i < times.size(); ++i) {
//         std::cout << i + 1 << ": ";
//         std::cin >> times[i];
//     }
    
//     double sum = 0;
//     std::cout << "Times: ";
//     for (double time : times) {
//         std::cout << time << " ";
//         sum += time;
//     }
//     double average = sum / times.size();
//     std::cout << "\nAverage time: " << average << " seconds" << std::endl;

//     return 0;
// }

int main(){
    double sum;
    std::array<double,3> times;
    for (int i = 0;i < 3; i++){
        std::cin >> times[i];
        sum += times[i];
    }
    std::cout << "Times:" << std::endl;
    for (int i = 0;i < 3; i++){
        std::cout << times[i] << " \n";
    }
    double average = sum / 3;
    std::cout << "Average time: " <<  average << std::endl;
    
}