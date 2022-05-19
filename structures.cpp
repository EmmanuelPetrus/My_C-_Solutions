#include <iostream>
using namespace std;
// struct part
// {
//     int modelnumber;
//     int partnumber;
//     float cost;
// };
// int main()
// {
//     part part1 = {6244, 373, 217.55F};
//     part part2;
//     // part1.model
//     number = 6244;
//     // part1.partnumber = 373;
//     // part1.cost = 217.55F;
//     cout << "Model " << part1.modelnumber << endl;
//     cout << "Part " << part1.partnumber << endl;
//     cout << "Cost $" << part1.cost << endl;
//     part2 = part1;
//     cout << "Model " << part2.modelnumber << endl;
//     cout << "Part " << part2.partnumber << endl;
//     cout << "Cost $" << part2.cost << endl;
//     return 0;
// }

// A struct example for measurement of distance
// struct Distance
// {
//     int feet;
//     float inches;
// };
// int main(int argc, char const *argv[])
// {
//     Distance d1, d3;
//     Distance d2 = {11, 6.25};

//     cout << "\n Enter feet: ";
//     cin >> d1.feet;
//     cout << "Enter inches: ";
//     cin >> d1.inches;

//     d3.inches = d1.inches + d2.inches;
//     d3.feet = 0;
//     if (d3.inches >= 12.0)
//     {
//         d3.inches -= 12.0;
//         d3.feet++;
//     }
//     d3.feet += d1.feet + d2.feet;

//     cout << d1.feet << "\'-" << d1.inches << "\" + ";
//     cout << d2.feet << "\'-" << d2.inches << "\" = ";
//     cout << d3.feet << "\'-" << d3.inches << "\"\n";
//     return 0;
// }

// Structures within structures
// struct Distance
// {
//     int feet;
//     float inches;
// };

// struct Room
// {
//     Distance length;
//     Distance width;
// };

// int main(void)
// {
//     Room dining;
//     dining.length.feet = 13;
//     dining.length.inches = 6.5;
//     dining.width.feet = 10;
//     dining.width.inches = 0.0;

//     float l = dining.length.feet + dining.length.inches/12;
//     float w = dining.width.feet + dining.width.inches/12;

//     cout << "Dining room area is "<< l*w << " square feet\n";
//     return 0;
// }

// A card game example
// struct card
// {
//     int number;
//     int suit;
// };

// const int clubs = 0;
// const int diamonds = 1;
// const int hearts = 2;
// const int spades = 3;
// const int jack = 11;
// const int queen = 12;
// const int king = 13;
// const int ace = 14;

// int main(void)
// {
//     card temp, chosen, prize;
//     int position;

//     card card1 = {7, clubs};
//     cout << "card 1 is the 7 of clubs\n";

//     card card2 = {jack, hearts};
//     cout << "Card 2 is the jack of hearts\n";

//     card card3 = {ace, spades};
//     cout << "Card 3 is the ace of spaces\n";

//     prize = card3;

//     cout << "I'm swapping card 1 and card 3\n";
//     temp = card3;
//     card3 = card2;
//     card2 = temp;

//     cout << "I'm swapping card 2 and card 3\n";
//     temp = card2;
//     card2 = card1;
//     card1 = temp;

//     cout << "I'm swapping card 1 and card 2\n";
//     temp = card2;
//     card2 = card1;
//     card1 = temp;

//     cout << "Now, where(1, 2, or 3) is the ace of spades? ";
//     cin >> position;

//     switch (position)
//     {
//     case 1:
//         chosen = card1;
//         break;
//     case 2:
//         chosen = card2;
//         break;
//     case 3:
//         chosen = card3;
//         break;
//     }
//     if (chosen.number == prize.number && chosen.suit == prize.suit)
//         cout << "That's right! You win!\n";
//     else
//         cout << "Sorry. You lose.\n";
//     return 0;
// }

