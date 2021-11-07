#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* game(char plyr1[], char plyr2[]);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CSCN71020A3Test
{
	TEST_CLASS(CSCN71020A3Test)
	{
	public:
		// Here, if player1 chooses paper and player2 chooses Scissor then expected winner is player2.
		TEST_METHOD(game_paperandscissor_Player_2)
		{
			char plyr1[30] = { "Paper" };
			char plyr2[30] = { "Scissor" };
			char exp[30] = { "Player_2" };
			char* original;

			original = game(plyr1, plyr2);

			Assert::AreEqual(exp, original);
		}

		// Here, if player1 chooses paper and player2 chooses rock then expected winner is player1.
		TEST_METHOD(game_paperandrock_Player_1)
		{
			char plyr1[30] = "Paper";
			char plyr2[30] = "Rock";
			char exp[30] = "Player_1";
			char* original;

			original = game(plyr1, plyr2);

			Assert::AreEqual(exp, original);
		}
		// Here, if player1 chooses paper and player2 chooses paper then expected winner is draw.
		TEST_METHOD(game_paperandpaper_draw)
		{
			char plyr1[30] = "Paper";
			char plyr2[30] = "Paper";
			char exp[30] = "Draw";
			char* original;

			original = game(plyr1, plyr2);

			Assert::AreEqual(exp, original);
		}
		// Here, if player1 chooses scissor and player2 chooses rock then expected winner is player2.
		TEST_METHOD(game_scissorandrock_Player_2)
		{
			char plyr1[30] = "Scissor";
			char plyr2[30] = "Rock";
			char exp[30] = "Player_2";
			char* original;

			original = game(plyr1, plyr2);

			Assert::AreEqual(exp, original);
		}
		// Here, if player1 chooses scissor and player2 chooses paper then expected winner is player1.
		TEST_METHOD(game_scissorandpaper_Player_1)
		{
			char plyr1[30] = "Scissor";
			char plyr2[30] = "Paper";
			char exp[30] = "Player_1";
			char* original;

			original = game(plyr1, plyr2);

			Assert::AreEqual(exp, original);
		}
		// Here, if player1 chooses scissor and player2 chooses Scissor then expected winner is draw.
		TEST_METHOD(game_scissorandscissor_draw)
		{
			char plyr1[30] = "Scissor";
			char plyr2[30] = "Scissor";
			char exp[30] = "Draw";
			char* original;

			original = game(plyr1, plyr2);

			Assert::AreEqual(exp, original);
		}
		// Here, if player1 chooses rock and player2 chooses paper then expected winner is player2.
		TEST_METHOD(game_rockandpaper_Player_2)
		{
			char plyr1[30] = "Rock";
			char plyr2[30] = "Paper";
			char exp[30] = "Player_2";
			char* original;

			original = game(plyr1, plyr2);

			Assert::AreEqual(exp, original);
		}
		// Here, if player1 chooses rock and player2 chooses Scissor then expected winner is player1.
		TEST_METHOD(game_rockandscissor_Player_1)
		{
			char plyr1[30] = "Rock";
			char plyr2[30] = "Scissor";
			char exp[30] = "Player_1";
			char* original;

			original = game(plyr1, plyr2);

			Assert::AreEqual(exp, original);
		}
		// Here, if player1 chooses rock and player2 chooses rock then expected winner is Draw.
		TEST_METHOD(game_rockandrock_draw)
		{
			char plyr1[30] = "Rock";
			char plyr2[30] = "Rock";
			char exp[30] = "Draw";
			char* original;

			original = game(plyr1, plyr2);

			Assert::AreEqual(exp, original);
		}
	};
}

