
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
        TEST_METHOD(RockLosesToPaper_Player2Wins)
        {
            char result[10];

            determineWinner("Rock", "Paper", result);

            Assert::AreEqual("Player2", result);
        }

        TEST_METHOD(ScissorsBeatsPaper_Player1Wins)
        {
            char result[10];

            determineWinner("Scissors", "Paper", result);

            Assert::AreEqual("Player1", result);
        }

        TEST_METHOD(ScissorsLosesToRock_Player2Wins)
        {
            char result[10];

            determineWinner("Scissors", "Rock", result);

            Assert::AreEqual("Player2", result);
        }

        TEST_METHOD(PaperBeatsRock_Player1Wins)
        {
            char result[10];

            determineWinner("Paper", "Rock", result);

            Assert::AreEqual("Player1", result);
        }

        TEST_METHOD(PaperLosesToScissors_Player2Wins)
        {
            char result[10];

            determineWinner("Paper", "Scissors", result);

            Assert::AreEqual("Player2", result);
        }

        TEST_METHOD(RockVsRock_Draw)
        {
            char result[10];

            determineWinner("Rock", "Rock", result);

            Assert::AreEqual("Draw", result);
        }

        TEST_METHOD(PaperVsPaper_Draw)
        {
            char result[10];

            determineWinner("Paper", "Paper", result);

            Assert::AreEqual("Draw", result);
        }

        TEST_METHOD(ScissorsVsScissors_Draw)
        {
            char result[10];

            determineWinner("Scissors", "Scissors", result);

            Assert::AreEqual("Draw", result);
        }

    };
}
