#ifndef POSTMACHINE_H
#define POSTMACHINE_H

#include "command.h"
#include <vector>
#include <cstddef>

class PostMachine {
private:
    std::vector<PostInstruction> program;
    std::size_t currentInstruction;
    // Assuming you have a tape/array of some sort. 
    // You might need to adjust these private variables to match your PostMachine.cpp!
    std::vector<int> tape; 
    std::size_t headPosition;

public:
    // Constructor
    PostMachine(const std::vector<PostInstruction>& program);

    // Core execution functions
    // Note: We changed this to accept maxSteps based on our previous main.cpp fix
    struct ExecutionResult {
        std::size_t steps = 0;
        bool halted = false;
    };
    
    ExecutionResult run(std::size_t maxSteps);
    
    // If your PostMachine.cpp has these, keep them. If not, you can delete them.
    void step(); 
    void reset();
};

#endif // POSTMACHINE_H