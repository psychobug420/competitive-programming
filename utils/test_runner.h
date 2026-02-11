#ifndef TEST_RUNNER_H
#define TEST_RUNNER_H

#ifdef COMPETITIVE_DEBUG

#include <iostream>
#include <fstream>
#include <string>

class TestRunner {
private:
    std::ifstream test_file;
    std::streambuf* original_cin;
    
public:
    TestRunner() {
        std::string base_path = TEST_DATA_PATH;
        std::string problem_name = PROBLEM_NAME;
        
        std::string test_file_path = base_path + "/" + problem_name + ".txt";
        
        test_file.open(test_file_path);
        if (!test_file.is_open()) {
            return;
        }
        
        original_cin = std::cin.rdbuf();
        std::cin.rdbuf(test_file.rdbuf());
    }
    
    ~TestRunner() {
        if (test_file.is_open()) {
            std::cin.rdbuf(original_cin);
            test_file.close();
        }
    }
};

#define RUN_WITH_TESTS() \
    TestRunner __test_runner__;

#else

#define RUN_WITH_TESTS()

#endif

#endif // TEST_RUNNER_H