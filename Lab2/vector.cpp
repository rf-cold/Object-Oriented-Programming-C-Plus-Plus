#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief Prints the elements in the vector and their memory locations
 *
 * @param vec - vector of integers
 */
void printMemVec(const vector<int>& vec) {
    printf("Vector - Each int is worth %lu bytes\n", sizeof(vec[0]));
    for (size_t i = 0; i < vec.size(); i++) {
        printf("Value: %d at Memory Location: %p\n", vec[i], &vec[i]);
    }
}

/**
 * @brief Increments each element in the vector by 10
 *
 * @param vec - vector of integers
 */
void incVecBy10(vector<int>& vec) {
    for (size_t i = 0; i < vec.size(); i++) {
        vec[i] += 10;
    }
}

int main() {
    // Create a constant integer called SIZE that is of value 5
    const int SIZE = 5;

    // Create a vector of integers called vec that can hold up to 5 elements
    vector<int> vec;

    // Use a for loop to populate vec with the values 100 to 104
    for (int i = 0; i < SIZE; i++) {
        vec.push_back(100 + i);
    }

    printf("Before-----------\n");
    printMemVec(vec);

    // Increment each element in the vector by 10
    incVecBy10(vec);

    printf("After Increment-----------\n");
    // Call printMemVec(...) on vec again to view the changes
    printMemVec(vec);

    // Remove last element of vec
    vec.pop_back();

    printf("After Pop-----------\n");
    // Call printMemVec(...) on vec again to view the changes
    printMemVec(vec);

    // Append 101 and 102 at the end of vec
    vec.push_back(101);
    vec.push_back(102);

    printf("After Push-----------\n");
    // Call printMemVec(...) on vec again to view the changes
    printMemVec(vec);

    return 0;
}