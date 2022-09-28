#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main() {
double Exit = 0;
double KoroksTotal = 900;
double KoroksLeft = 0;
double KorokPercentCollected = 0;
double KorokPercentLeft = 0;
double MapPercentage = 0;
double MapPercentageShrines = 0;
double MapPercentageDivineBeasts = 0;
double KorokMapPercentage = 0;
double TotalMapCompletionPercentage = 0;
double ActualMapCompletionPercentage = 0;
double MapPercentageDifference = 0;

double KoroksCollected = 0;
cout << "How Many Koroks Have You Collected" << "?" << endl;
cin >> KoroksCollected;

KoroksLeft = (KoroksTotal - KoroksCollected);

cout << "You Have" << ":" << " " << KoroksLeft << " " << "Koroks Left To Collect" << "." << endl;

KorokPercentCollected = ((KoroksCollected / KoroksTotal) * 100);

cout << "You Have Collected" << ":" << " " << KorokPercentCollected << "% Of Koroks" << "." << endl;

KorokPercentLeft = (100 - KorokPercentCollected);

cout << "You Have" << ":" << " " << KorokPercentLeft << "% Of Koroks Remaining" << "." << endl;

double ShrineCompletion = 0;
cout << "How Many Shrines Have You Completed" << "?" << endl;
cin >> ShrineCompletion;

if (ShrineCompletion > 120) {
cout << "Invalid Number Of Completed Shrines" << ".";
cout << "Please Enter A Number Between 1 and 120" << ".";
cout << "Would You Like To Exit" << "?";
cin >> Exit;
return 0;
}

MapPercentageShrines = (ShrineCompletion * 0.08);

cout << "Your Map Percentage From Completing Those" << " " << ShrineCompletion << " " << "Shrines Is" << ":" << " " << MapPercentageShrines << "%" << endl;

double DivineBeastCompletion = 0;
cout << "How Many Divine Beasts Have You Completed" << "?" << endl;
cin >> DivineBeastCompletion;

if (DivineBeastCompletion > 4) {
cout << "Invalid Number of Divine Beasts" << ".";
cout << "Please Enter A Number Between 1 and 4" << ".";
cout << "Would You Like To Exit" << "?";
cin >> Exit;
return 0;
}

MapPercentageDivineBeasts = (DivineBeastCompletion * 0.08);

cout << "Your Map Percentage From Completing Those" << " " << DivineBeastCompletion << " " << "Divine Beasts is" << ":" << " " << MapPercentageDivineBeasts << "%" << endl;

KorokMapPercentage = (KoroksCollected * 0.08);

cout << "Your Map Percentage From Collecting Those" << " " << KoroksCollected << " " << "Koroks Is" << ":" << " " << KorokMapPercentage << "%" << endl;

TotalMapCompletionPercentage = (MapPercentageShrines + MapPercentageDivineBeasts + KorokMapPercentage);

cout << "Your Total Map Completion Should Be" << ":" << " " << TotalMapCompletionPercentage << "%" << endl;







cout << "Would You Like To Exit" << "?" << endl;
cin >> Exit;

return 0;
}
