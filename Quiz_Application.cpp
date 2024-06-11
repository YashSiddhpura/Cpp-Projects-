#include<iostream>
#include<stdlib.h>
using namespace std;
int score=0;
void marvel()
{
    int mscore=0;
    char ans;
    cout<<" ***** Welcome to MARVEL Movies ***** "<<endl;
    cout<<"\n";
    cout<<" 1. What system replaced Jarvis? "<<endl;
    cout<<" Options: a)Jocasta b)Edith c)Friday d)Tadashi "<<endl;
    cin>>ans;
    if(ans=='c' || ans=='C')
    {
        mscore++;
    }
    cout<<"\n";
    cout<<" 2. Hawkeye has how many children? "<<endl;
    cout<<" Options: a)2 b)1 c)4 d)3 "<<endl;
    cin>>ans;
    if(ans=='d' || ans=='D')
    {
        mscore++;
    }
    cout<<"\n";
    cout<<" 3. Which of these characters has Thor never had a verbal interaction with on-screen? "<<endl;
    cout<<" Options: a)Carol Danvers b)Peter Parker c)Peter Quill d)Bruce Banner "<<endl;
    cin>>ans;
    if(ans=='B' || ans=='b')
    {
        mscore++;
    }
    cout<<"\n";
    cout<<" 4. What's the name of Tony Stark's daughter? "<<endl;
    cout<<" Options: a)Ashley b)Natasha c)Teresa d)Morgan "<<endl;
    cin>>ans;
    if(ans=='d' || ans=='D')
    {
        mscore++;
    }
    cout<<"\n";
    cout<<" 5. After escaping from the US, where was Bruce Banner in hiding and working in a bottling plant? "<<endl;
    cout<<" Options: a)Rio de janeiro b)California c)Columbia d)New York "<<endl;
    cin>>ans;
    if(ans=='a' || ans=='A')
    {
        mscore++;
    }
    cout<<"\n";
    cout<<" 6. In Spider-Man: No Way Home, which of these Peter Parkers is nicknamed Peter 3? "<<endl;
    cout<<" Options: a)Andrew Garfield b)Tom Holland c)Tobey Maguire d)Bruce Wayne "<<endl;
    cin>>ans;
    if(ans=='a' || ans=='A')
    {
        mscore++;
    }
    cout<<"\n";
    cout<<" 7. What type of doctor is Stephen Strange "<<endl;
    cout<<" Options: a)Dentist b)Neurosurgeon c)Psychatrist d)Vet "<<endl;
    cin>>ans;
    if(ans=='b' || ans=='B')
    {
        mscore++;
    }
    cout<<"\n";
    cout<<" 8. Which Avenger does Loki enslave to do his bidding in The Avengers? "<<endl;
    cout<<" Options: a)Black Widow b)Maria Hill c)Phil caulson d)Hawkeye "<<endl;
    cin>>ans;
    if(ans=='d' || ans=='D')
    {
        mscore++;
    }
    cout<<"\n";
    cout<<" 9. Who cut Thanos' head off? "<<endl;
    cout<<" Options: a)Thor b)Vision c)Wanda d)Odin "<<endl;
    cin>>ans;
    if(ans=='a' || ans=='A')
    {
        mscore++;
    }
    cout<<"\n";
    cout<<" 10.  In Avengers: Endgame, what food is Scott Lang trying to eat when it's blown out of his hand? "<<endl;
    cout<<" Options: a)Vada Pav b)Taco c)Hamburger d)Steak "<<endl;
    cin>>ans;
    if(ans=='B' || ans=='b')
    {
        mscore++;
    }
    cout<<"\n";
    cout<<" You total score in Marvel section is "<<mscore<<endl;
    score=score+mscore;
}

void dc()
{
    int dscore=0;
    char ans;
    cout<<" ***** Welcome to DC Movies ***** "<<endl;
    cout<<"\n";
    cout<<" 1. Who is the actor of the current Joker movies "<<endl;
    cout<<" Options: a)Stan sebastian b)Tom cruise c)Joaquin Phoenix d)Heath Ledger "<<endl;
    cin>>ans;
    if(ans=='c' || ans=='C')
    {
        dscore++;
    }
    cout<<"\n";
    cout<<" 2. Who's father went in jail when that superhero was in childhood "<<endl;
    cout<<" Options: a)Joker b)Arrow c)Cybrog d)Flash "<<endl;
    cin>>ans;
    if(ans=='d' || ans=='D')
    {
        dscore++;
    }
    cout<<"\n";
    cout<<" 3. Who directed the christian bale batman's trilogy "<<endl;
    cout<<" Options: a)Kevin Fiege b)Christopher Nolan c)James cameron d)Shawn Mendes "<<endl;
    cin>>ans;
    if(ans=='B' || ans=='b')
    {
        dscore++;
    }
    cout<<"\n";
    cout<<" 4. Wonder woman is from ? "<<endl;
    cout<<" Options: a)Atlantis b)Krypton c)Gotham d)Amazons "<<endl;
    cin>>ans;
    if(ans=='d' || ans=='D')
    {
        dscore++;
    }
    cout<<"\n";
    cout<<" 5. Who sent stepenwolf to devastate earth "<<endl;
    cout<<" Options: a)Darkseid b)Doomsday c)Joker d)Thanos "<<endl;
    cin>>ans;
    if(ans=='a' || ans=='A')
    {
        dscore++;
    }
    cout<<"\n";
    cout<<" 6. Who gave a cameo in Shazam part 1 "<<endl;
    cout<<" Options: a)Superman b)Supergirl c)Batman d)Flash "<<endl;
    cin>>ans;
    if(ans=='a' || ans=='A')
    {
        dscore++;
    }
    cout<<"\n";
    cout<<" 7. Caretaker of bruce wayne "<<endl;
    cout<<" Options: a)Augustine b)Alfred c)Lex d)Joseph "<<endl;
    cin>>ans;
    if(ans=='b' || ans=='B')
    {
        dscore++;
    }
    cout<<"\n";
    cout<<" 8. Which actor played green lantern "<<endl;
    cout<<" Options: a)Chris pratt b)Jason Momoa c)Bradley Cooper d)Ryan Reynolds "<<endl;
    cin>>ans;
    if(ans=='d' || ans=='D')
    {
        dscore++;
    }
    cout<<"\n";
    cout<<" 9. Who appeared as bruce wayne in the end of the flash movie "<<endl;
    cout<<" Options: a)George Clooney b)Michael Keaton c)Robert Pattinson d)Christian Bale "<<endl;
    cin>>ans;
    if(ans=='a' || ans=='A')
    {
        dscore++;
    }
    cout<<"\n";
    cout<<" 10. In which newspaper does clark kent works "<<endl;
    cout<<" Options: a)Daily bugle b)Daily planet c)Daily news d)Daily Post "<<endl;
    cin>>ans;
    if(ans=='B' || ans=='b')
    {
        dscore++;
    }
    cout<<"\n";
    cout<<" You total score in DC section is "<<dscore<<endl;
    score=score+dscore;
}

void hollywood()
{
    int hscore=0;
    char ans;
    cout<<" ***** Welcome to Hollywood Movies ***** "<<endl;
    cout<<"\n";
    cout<<" 1. The code in The Matrix comes from what food recipes? "<<endl;
    cout<<" Options: a)Omlette b)Stir fries c)Sushi d)Dumplings "<<endl;
    cin>>ans;
    if(ans=='c' || ans=='C')
    {
        hscore++;
    }
    cout<<"\n";
    cout<<" 2. Where were The Lord of the Rings movies filmed? "<<endl;
    cout<<" Options: a)Austria b)Norway c)Russia d)New Zealand "<<endl;
    cin>>ans;
    if(ans=='d' || ans=='D')
    {
        hscore++;
    }
    cout<<"\n";
    cout<<" 3. Who was the first james bond actor"<<endl;
    cout<<" Options: a)Daniel Craig b)Sean Connery c)George lazenby d)Timothy Dalton "<<endl;
    cin>>ans;
    if(ans=='B' || ans=='b')
    {
        hscore++;
    }

    cout<<"\n";
    cout<<" 4. Tom Cruise famous movie series "<<endl;
    cout<<" Options: a)Skyfall b)Day & Knight c)Valkyrie d)Jack Reacher "<<endl;
    cin>>ans;
    if(ans=='d' || ans=='D')
    {
        hscore++;
    }

    cout<<"\n";
    cout<<" 5.What item is in every Fight Club scene? "<<endl;
    cout<<" Options: a)A starbucks cup b)Coca cola c)A noodle cup d)Beer "<<endl;
    cin>>ans;
    if(ans=='a' || ans=='A')
    {
        hscore++;
    }

    cout<<"\n";
    cout<<" 6. Which actor plays Private Ryan in Saving Private Ryan? "<<endl;
    cout<<" Options: a)Matt Damon b)Tom Holland c)Val kilmer d)Harrison ford "<<endl;
    cin>>ans;
    if(ans=='a' || ans=='A')
    {
        hscore++;
    }

    cout<<"\n";
    cout<<" 7. Who was in MIB 3 ? "<<endl;
    cout<<" Options: a)Will smith b)chris evans c)Roger moore d)Paul rudd "<<endl;
    cin>>ans;
    if(ans=='a' || ans=='A')
    {
        hscore++;
    }

    cout<<"\n";
    cout<<" 8. Rocky balboa was played by  "<<endl;
    cout<<" Options: a)Chuck Norris b)Scott adkins c)Jean claude van dyne d)Sylvester Stallone "<<endl;
    cin>>ans;
    if(ans=='d' || ans=='D')
    {
        hscore++;
    }

    cout<<"\n";
    cout<<" 9.Which movie was the highest grossing movies before avengers endgame became 1st "<<endl;
    cout<<" Options: a)Avatar b)Titanic c)Godfather d)Skyfall "<<endl;
    cin>>ans;
    if(ans=='a' || ans=='A')
    {
        hscore++;
    }

    cout<<"\n";
    cout<<" 10.What year was the first Die Hard movie released?  "<<endl;
    cout<<" Options: a)1989 b)1988 c)1990 d)1987 "<<endl;
    cin>>ans;
    if(ans=='B' || ans=='b')
    {
        hscore++;
    }
    cout<<"\n";

    cout<<" You total score in Hollywood section is "<<hscore<<endl;
    score=score+hscore;
}

void bollywood()
{
    int bscore=0;
    char ans;
    cout<<" ***** Welcome to Bollywood Movies ***** "<<endl;
    cout<<"\n";

    cout<<" 1. In the movie Sanju who actor was palying supportive role to sanjay dutt  "<<endl;
    cout<<" Options: a)Dev Patel b)Anushka sharma c)Vicky Kaushal d)Jackie chan "<<endl;
    cin>>ans;
    if(ans=='c' || ans=='C')
    {
        bscore++;
    }
    cout<<"\n";

    cout<<" 2. Dabang film series has total how many films ? "<<endl;
    cout<<" Options: a)4 b)1 c)2 d)3 "<<endl;
    cin>>ans;
    if(ans=='d' || ans=='D')
    {
        bscore++;
    }
    cout<<"\n";

    cout<<" 3.In which movie was shahrukh khan played double role   "<<endl;
    cout<<" Options: a)Pathaan b)Fan c)Housefull d)tiger "<<endl;
    cin>>ans;
    if(ans=='B' || ans=='b')
    {
        bscore++;
    }
    cout<<"\n";

    cout<<" 4. who was the actor who played the role of villain in maardani 2 ? "<<endl;
    cout<<" Options: a)Vikrant massey b)Rajat Kapoor c)Siddharth singh d)Vishal Jethwa "<<endl;
    cin>>ans;
    if(ans=='d' || ans=='D')
    {
        bscore++;
    }
    cout<<"\n";

    cout<<" 5. Who was the main police inspector in shootout at lokhandwala "<<endl;
    cout<<" Options: a)Sanjay Dutt b)Ronit Roy c)Anil kapoor d)Ajay devgan "<<endl;
    cin>>ans;
    if(ans=='a' || ans=='A')
    {
        bscore++;
    }
    cout<<"\n";

    cout<<" 6. Golmaal 3 was directed by ? "<<endl;
    cout<<" Options: a)Rohit shetty b)Arbaz khan c)Sajid Nadiadwala d)kabir khan "<<endl;
    cin>>ans;
    if(ans=='a' || ans=='A')
    {
        bscore++;
    }
    cout<<"\n";

    cout<<" 7. Jaadu was in which movie "<<endl;
    cout<<" Options: a)Krish b)Koi mil gaya c)Krish 3 d)Krish 4 "<<endl;
    cin>>ans;
    if(ans=='b' || ans=='B')
    {
        bscore++;
    }
    cout<<"\n";

    cout<<" 8. wWho played the role of villain in Housefull 4 "<<endl;
    cout<<" Options: a)Mithoon b)Jackie shroff c)Arjun Rampal d)Boman Irani "<<endl;
    cin>>ans;
    if(ans=='d' || ans=='D')
    {
        bscore++;
    }
    cout<<"\n";

    cout<<" 9. Who had a cameo in the move Simba "<<endl;
    cout<<" Options: a)Akshay Kumar b)Varun dhawan c)Chulbul Pandey d)Vicky Kaushal "<<endl;
    cin>>ans;
    if(ans=='a' || ans=='A')
    {
        bscore++;
    }
    cout<<"\n";

    cout<<" 10. Who was the lead actor in the movie Animal  "<<endl;
    cout<<" Options: a)Ranveer singh b)Ranbir Kapoor c)John Abraham d)Salman Khan "<<endl;
    cin>>ans;
    if(ans=='B' || ans=='b')
    {
        bscore++;
    }
    cout<<"\n";

    cout<<" You total score in Bollwood section is "<<bscore<<endl;
    score=score+bscore;
}

int main()
{
    cout<<" ********** Welcome to Movie Quiz Application ********** "<<endl;
    cout<<" Quiz Questions are based on movies  "<<endl;
    cout<<"\n";
    while(1)
     {
        int choice;
        cout<<" 1]MARVEL Movies "<<endl;
        cout<<" 2] DC Movies "<<endl;
        cout<<" 3] Hollywood Movies "<<endl;
        cout<<" 4] Bollywood Movies "<<endl;
        cout<<" 5] Quit the Game "<<endl;
        cout<<" Enter your choice "<<endl;
        cin>>choice;
        cout<<"\n";
        switch(choice)
        {
            case 1: marvel();
                    break;
            case 2: dc();
                    break;
            case 3: hollywood();
                    break;
            case 4: bollywood();
                    break;
            case 5:
                    cout<<"\n";
                    cout<<" Game is Over "<<endl;
                    cout<<" The total score is "<<score<<endl;
                    exit(0);
            default: cout<<" Invalid Input "<<endl;
        }
     }
    return 0;
}
