#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char star_wars_names[12][60] = {"Episode IV: A New Hope (1977)",
                                "Episode V: The Empire Strikes Back (1980)",
                                "Episode VI: Return of the Jedi (1983)",
                                "Episode I: The Phantom Menace (1999)",
                                "Episode II: Attack of the Clones (2002)",
                                "Episode III: Revenge of the Sith (2005)",
                                "Star Wars: The Clone Wars (2008)",
                                "Episode VII: The Force Awakens (2015)",
                                "Rogue One: A Star Wars Story (2016)",
                                "Episode VIII: The Last Jedi (2017)",
                                "Solo: A Star Wars Story (2018)",
                                "Episode IX: The Rise of Skywalker (2019)"};

int star_wars_rating[12];

void get_film_rating() {
    for (int i = 0; i < 12; i++) {
        scanf("%d", &star_wars_rating[i]);
    }
}

void sorted_star_wars(int sorted_rating[]) {

    int a=5;
    int counter=0;
    for(int j=0; j<5; j++)
    {
        for(int i=0; i<12; i++)
        {
            if(star_wars_rating[i]==a)
            {
            sorted_rating[counter]=i;
            counter++;
            }
        }
        --a;

    }
}

void print_sorted_names(int sorted_rating[]) {
    for(int i = 0; i < 12; i++)
    {
        printf("%d ", sorted_rating[i]);
    }

    printf("\n");

    for (int i = 0; i < 12; i++) {
        printf("%s\n", star_wars_names[sorted_rating[i]]);
    }
}

int main() {
    get_film_rating();

    int sorted_rating[12];
    sorted_star_wars(sorted_rating);

    print_sorted_names(sorted_rating);

    return 0;
}
