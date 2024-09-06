#include <iostream>
#include <cstring>
using namespace std;

typedef struct MovieReview
{
    int User_ID;
    int Movie_ID;
    int Movies_Rating;
    char Review[1000];

    MovieReview *next;
}MovieReview;

MovieReview *reviews = NULL;

void add(int User_ID, int Movie_ID, int Movies_Rating, const char *Review)
{
    MovieReview *new_review = new MovieReview;
    new_review->User_ID = User_ID;
    new_review->Movie_ID = Movie_ID;
    new_review->Movies_Rating = Movies_Rating;
    strcpy(new_review->Review, Review);

    
    new_review->next = reviews;
    reviews = new_review;
}

void Delete(int User_ID, int Movie_ID)
{
    MovieReview *current = reviews;
    MovieReview *prev = NULL;

    while (current != NULL)
    {
        if (current->User_ID == User_ID && current->Movie_ID == Movie_ID)
        {
                (prev == NULL)?
                reviews = current->next:
                prev->next = current->next;
            free(current);
            return;
        }
        prev = current;
        current = current->next;
    }
}

void GetReview(int User_ID, int Movie_ID)
{
    MovieReview *current = reviews;

    while (current != NULL)
    {
        if (current->User_ID == User_ID && current->Movie_ID == Movie_ID)
        {
            cout << current->Movies_Rating << ", " << current->Review << endl;
            return;
        }

        current = current->next;
    }
    cout << endl;
}

int main()
{
    add(1, 401, 5, "Mrvel Cinematic Universe");
    add(2, 402, 5, "John Wick Chapter 4");
    add(3, 403, 5, "Interstellar");
    add(4, 404, 5, "John Wick Chapter 4");

    Delete(4, 404);
    GetReview(1, 401);
    GetReview(2, 402);
    GetReview(3, 403);

    return 0;
}
