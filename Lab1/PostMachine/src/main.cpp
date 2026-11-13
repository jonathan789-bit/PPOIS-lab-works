#include "PostMachine.h"

#include <iostream>
#include <vector>

int main()
{
    std::vector<PostInstruction> program =
    {
        PostInstruction::write1(),
        PostInstruction::right(),
        PostInstruction::write1(),
        PostInstruction::right(),
        PostInstruction::write1(),
        PostInstruction::halt()
    };

    PostMachine machine(program);

    auto result = machine.run(100);

    std::cout << "Program finished\n";
    std::cout << "Steps executed: "
              << result.steps
              << '\n';

    std::cout << "Halted: "
              << std::boolalpha
              << result.halted
              << '\n';

    return 0;
}