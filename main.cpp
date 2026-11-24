#include <string>
#include <vector>

void square_value() {
    int x = 12;
    int square = x * x;
    (void)square;
}

void sum_squares() {
    int acc = 0;
    for (int i = -5; i <= 5; ++i) acc += i * i;
    (void)acc;
}

void count_down() {
    int acc = 0;
    for (int i = 8; i > 0; --i) acc += i;
    (void)acc;
}

void average_values() {
    int values[3] = {12, 18, 24};
    int total = values[0] + values[1] + values[2];
    int average = total / 3;
    (void)average;
}

extern "C" int prime_vale();
extern "C" void vivid_meadow();
extern "C" void vivid_marble();

int main() {
    square_value();
    sum_squares();
    count_down();
    average_values();
    vivid_meadow();
    vivid_marble();
    return prime_vale();
}
