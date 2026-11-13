#include "command.h"
#include "command.h"
#include <iostream>
#include <vector>

int main()
{
    // Use PostOp instead of PostInstruction
      std::vector<PostInstruction> program =
    {
        { PostOp::Write1 },
        { PostOp::MoveRight },
        { PostOp::Write1 },
        { PostOp::MoveRight },
        { PostOp::Write1 },
        { PostOp::Halt }
    };

    PostMachine machine(program);

    // Note: Change the run() arguments if your PostMachine.h expects different ones
    auto result = machine.run(100); 

    std::cout << "Program finished\n";
    std::cout << "Steps executed: " << result.steps << '\n';
    std::cout << "Halted: " << std::boolalpha << result.halted << '\n';

    return 0;
}