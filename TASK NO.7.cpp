#include <iostream>
using std::cin;
using std::cout;
using std::endl;
//Implement a structure describing a movie(Movie) with the following characteristics:
//
//Movie name
//Duration in minutes
//Genre
//Possible values are described by the set{ Comedy, Action, Horror, Romantic }
//Rating
//Create an array of movies and implement the following functionality:
//
//Function that creates a movie given the parameters.
//Spoiler : Generally, this task is delegated to constructors, which we will study shortly.
//
//Make an array of movies and add 3 movies of your choice.
//Display all the movies in the array.
//Display the top movie in the array - the one with the most rating.
//Bonus :
//
// Sort the movies by rating.



struct Movie {
	char name[500];
	int  duration;
	char genre[120];
	double rating;
};


void topmovie(Movie& mymov1, Movie& mymov2, Movie& mymov3) {
	cout << "TOP 3 MOVIES :";
	if (mymov1.rating >= mymov2.rating && mymov1.rating >= mymov3.rating) {
		
		cout << "MOVIE NAME:" << mymov1.name << ' ' << "DURATION:" << mymov1.duration << ' '<<"min"<<endl << "GENRE:" << mymov1.genre << endl << "RATING:" << mymov1.rating << endl;
		
		if (mymov2.rating >= mymov3.rating) {
			cout << "MOVIE NAME:" << mymov2.name << ' ' << "DURATION:" << mymov2.duration << '  '<<"min" << endl << "GENRE:" << mymov2.genre << endl << "RATING:" << mymov2.rating << endl;
			cout << endl;
			cout << "MOVIE NAME:" << mymov3.name << ' ' << "DURATION:" << mymov3.duration << '  '<<"min"<<endl << "GENRE:" << mymov3.genre << endl << "RATING:" << mymov3.rating << endl;
		}
		else {
			cout << "MOVIE NAME:" << mymov3.name << ' ' << "DURATION:" << mymov3.duration << '  ' << "min" << endl << "GENRE:" << mymov3.genre << endl << "RATING:" << mymov3.rating << endl;

			cout << "MOVIE NAME:" << mymov2.name << ' ' << "DURATION:" << mymov2.duration << '  ' << endl << "GENRE:" << mymov2.genre << endl << "RATING:" << mymov2.rating << endl;
		}
	}
	else if (mymov2.rating >= mymov1.rating && mymov2.rating >= mymov3.rating) {

		cout << "MOVIE NAME:" << mymov2.name << ' ' << "DURATION:" << mymov2.duration << '  '<<"min" << endl << "GENRE:" << mymov2.genre << endl << "RATING:" << mymov2.rating << endl;

		if (mymov1.rating >= mymov3.rating) {
			cout << "MOVIE NAME:" << mymov1.name << ' ' << "DURATION:" << mymov1.duration << ' ' << "min" << endl << "GENRE:" << mymov1.genre << endl << "RATING:" << mymov1.rating << endl;

			cout << "MOVIE NAME:" << mymov3.name << ' ' << "DURATION:" << mymov3.duration << '  ' << "min" << endl << "GENRE:" << mymov3.genre << endl << "RATING:" << mymov3.rating << endl;
		}
		else {
			cout << "MOVIE NAME:" << mymov3.name << ' ' << "DURATION:" << mymov3.duration << '  ' << "min" << endl << "GENRE:" << mymov3.genre << endl << "RATING:" << mymov3.rating << endl;

			cout << "MOVIE NAME:" << mymov1.name << ' ' << "DURATION:" << mymov1.duration << ' ' << "min" << endl << "GENRE:" << mymov1.genre << endl << "RATING:" << mymov1.rating << endl;

		}
	}
	else if (mymov3.rating >= mymov1.rating && mymov3.rating >= mymov2.rating) {

		cout << "MOVIE NAME:" << mymov3.name << ' ' << "DURATION:" << mymov3.duration << '  ' << "min" << endl << "GENRE:" << mymov3.genre << endl << "RATING:" << mymov3.rating << endl;

		if (mymov1.rating >= mymov2.rating) {
			cout << "MOVIE NAME:" << mymov1.name << ' ' << "DURATION:" << mymov1.duration << ' ' << "min" << endl << "GENRE:" << mymov1.genre << endl << "RATING:" << mymov1.rating << endl;
			cout << "MOVIE NAME:" << mymov2.name << ' ' << "DURATION:" << mymov2.duration << '  ' <<"min" << endl << "GENRE:" << mymov2.genre << endl << "RATING:" << mymov2.rating << endl;
		}
		else {

			cout << "MOVIE NAME:" << mymov2.name << ' ' << "DURATION:" << mymov2.duration << '  '<<"min" << endl << "GENRE:" << mymov2.genre << endl << "RATING:" << mymov2.rating << endl;
			cout << "MOVIE NAME:" << mymov1.name << ' ' << "DURATION:" << mymov1.duration << ' ' << "min" << endl << "GENRE:" << mymov1.genre << endl << "RATING:" << mymov1.rating << endl;

		}

	}

}


int main() {
	Movie mymovie1={"The lost city",120,"Adventure",5.5};
	Movie mymovie2 = { "Spider-man",184,"Science-fiction",5.0 };
	Movie mymovie3 = { "Avatar",193,"Science-fiction",6.0 };
	topmovie(mymovie1, mymovie2, mymovie3);

}
