
#include "CppUnitTest.h"

extern "C" {
#include "../RockPaperScissors_Assignment_3/game.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RockPaperScissorsTests
{
    TEST_CLASS(RockPaperScissorsTests)
    {
    public:

        TEST_METHOD(RockBeatsScissors_Player1Wins)
        {
            char result[10];

            determineWinner("Rock", "Scissors", result);

            Assert::AreEqual("Player1", result);
        }
    };
}
