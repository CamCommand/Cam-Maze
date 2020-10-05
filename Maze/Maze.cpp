#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
    int number16;
    int number13;
    int number14;
    int number15;
    int number10;
    int number100;
    int number1000;
    int number10000;
    int number100000;
    int number12;
    int number11;
    int number9;
    int number8;
    int number7;
    int number6;
    int number5;
    int number4;
    int number3;
    int number2;
    int number1;
    system( "color 0E");
    system("cls");

cout<<"                                 ""Welcome to Maze by Cam."<<endl;
cout<<"           ""You don't know how you got here and you don't know how to get out."<<endl;
cout<<"                                   ""Press 1 to start."<<endl;
cin>>number16;
system("cls");
if(number16 == 1)
{


    cout<<"                       ""Choose Carefully. You Can't Go Back"<<endl;

    cout <<"                  ""                \\             /          "<<endl;
    cout <<"                  ""                  -----------            "<<endl;
    cout <<"                  ""                  |   ___   |            "<<endl;
    cout <<"                  ""          ___     |  |   |  |     ___   "<<endl;
    cout <<"                  ""         /   \\    |  |   |  |    /   \\ "<<endl;
    cout <<"                  ""        |     |   |__|   |__|   |     | "<<endl;
    cout <<"                  ""        |     |  /           \\  |     | "<<endl;
    cout <<"                  ""        |     | /             \\ |     | "<<endl;
    cout <<"                  ""        |______/               \\______| "<<endl;
    cout <<"                  ""        |                             | "<<endl;

    cout <<"                       ""1. Forward"<<endl;
    cout <<"                       ""2. Right"<<endl;
    cout <<"                       ""3. Left"<<endl;
    cin >> number1;
    system("cls");
}
else
{
    cout<<"                                ""To bad! You're playing!"<<endl;

    cout <<"                  ""                \\             /          "<<endl;
    cout <<"                  ""                  -----------            "<<endl;
    cout <<"                  ""                  |   ___   |            "<<endl;
    cout <<"                  ""          ___     |  |   |  |     ___   "<<endl;
    cout <<"                  ""         /   \\    |  |   |  |    /   \\ "<<endl;
    cout <<"                  ""        |     |   |__|   |__|   |     | "<<endl;
    cout <<"                  ""        |     |  /           \\  |     | "<<endl;
    cout <<"                  ""        |     | /             \\ |     | "<<endl;
    cout <<"                  ""        |______/               \\______| "<<endl;
    cout <<"                  ""        |                             | "<<endl;

    cout <<"                       ""1. Forward"<<endl;
    cout <<"                       ""2. Right"<<endl;
    cout <<"                       ""3. Left"<<endl;
    cin >> number1;
    system("cls");
}
    if(number1 == 2)
    {
        cout<<"                   ""Two doors appear, what is that in the right one?"<<endl;

    cout <<"                  ""              \\             /          "<<endl;
    cout <<"                  ""                -----------            "<<endl;
    cout <<"                  ""                |   ___   |            "<<endl;
    cout <<"                  ""                |  |   |  |     ___   "<<endl;
    cout <<"                  ""                |  |.  |  |    /   \\ "<<endl;
    cout <<"                  ""                |__|   |__|   |     | "<<endl;
    cout <<"                  ""               /           \\  | .  :| "<<endl;
    cout <<"                  ""              /             \\ |    :| "<<endl;
    cout <<"                  ""             /               \\______| "<<endl;
    cout <<"                  ""                                    | "<<endl;

    cout <<"                       ""1. Forward"<<endl;
    cout <<"                       ""2. Right"<<endl;
    cin >> number4;
    system("cls");
    }

    if(number4 == 2)
{
    cout<<"                   ""There are two paths one of which is more narrow."<<endl;
     cout <<"                 ""              \\             /          "<<endl;
    cout <<"                  ""                -----------            "<<endl;
    cout <<"                  ""                |   ___   |            "<<endl;
    cout <<"                  ""                |  |   |  |     ___   "<<endl;
    cout <<"                  ""                |  |   |  |    /   \\ "<<endl;
    cout <<"                  ""                |__|   |__|   |     | "<<endl;
    cout <<"                  ""               /           \\  |     | "<<endl;
    cout <<"                  ""              /             \\ |     | "<<endl;
    cout <<"                  ""             /               \\______| "<<endl;
    cout <<"                  ""                                    | "<<endl;



cout<<"                       ""1. Forward"<<endl;
cout<<"                       ""2. Right"<<endl;
cin>> number12;
system("cls");

if(number12 == 2)
{
    cout<<"                                ""Dude, you died."<<endl;
    cout<<"                                     ""Bummer."<<endl;
    return 0;
}

if(number12 == 1)
{
     cout <<"                           ""There is only one way to go."<<endl;
    cout <<"                        ""         \\             /         "<<endl;
    cout <<"                       ""           -----------            "<<endl;
    cout <<"                       ""           |   ___   |            "<<endl;
    cout <<"                       ""           |  |   |  |            "<<endl;
    cout <<"                       ""           |  |   |  |            "<<endl;
    cout <<"                       ""           |__|   |__|            "<<endl;
    cout <<"                       ""          /           \\          "<<endl;
    cout <<"                       ""         /             \\         "<<endl;
    cout <<"                       ""        /               \\        "<<endl;
    cout <<"                       ""       /                 \\       "<<endl;
    cout <<"                       ""1. Forward"<<endl;
    cin>>number13;
    system("cls");
}
if(number13 == 1)
{
    cout<<"                         ""You start to run as you see an exit."<<endl;
    cout<<"                             ""But suddenly you can't move?"<<endl;
    cout<<"                      ""It appears you have glitched through the floor."<<endl;
    cout<<"                  ""You want to try jumping out, but there is no jump button."<<endl;
    cout<<"                               ""Looks like you need to try again."<<endl;
    return 0;
}

}

    if(number4 == 1)
    {

        cout<<"                              ""                      "<<endl;
        cout<<"                              ""                      "<<endl;
        cout<<"                              ""                      "<<endl;
        cout<<"                              ""                      "<<endl;
        cout<<"                              ""     ________         "<<endl;
        cout<<"                              ""    /       \\        "<<endl;
        cout<<"                              ""    \\________/       "<<endl;
        cout<<"                              ""                      "<<endl;

        cout<<"                     ""You come upon a strange looking hole."<<endl;
        cout<<"                       ""You look down and trip into it."<<endl;
        cout<<"                         ""You are never found again."<<endl;

        return 0;
    }


    if(number1 == 1)
    {
    cout<<"                         ""There are three paths to choose from, wow."<<endl;

    cout <<"                       ""                \\             /          "<<endl;
    cout <<"                       ""                  -----------            "<<endl;
    cout <<"                       ""                  |   ___   |            "<<endl;
    cout <<"                       ""          ___     |  |   |  |     ___   "<<endl;
    cout <<"                       ""         /   \\    |  |   |  |    /   \\ "<<endl;
    cout <<"                       ""        |     |   |__|   |__|   |     | "<<endl;
    cout <<"                       ""        |     |  /           \\  |     | "<<endl;
    cout <<"                       ""        |     | /             \\ |     | "<<endl;
    cout <<"                       ""        |______/               \\______| "<<endl;
    cout <<"                       ""        |                             | "<<endl;

    cout <<"                       ""1. Forward"<<endl;
    cout <<"                       ""2. Right"<<endl;
    cout <<"                       ""3. Left"<<endl;
    cin >> number2;
    system("cls");


if(number2 == 2)
{
    cout<<"                            ""       _____"<<endl;
    cout<<"                            ""      /|   |\\"<<endl;
    cout<<"                            ""     / _____ \\"<<endl;
    cout<<"                            ""    /         \\"<<endl;
    cout<<"                            ""   /    \x01      \\"<<endl;
    cout<<"                            ""  /     |       \\"<<endl;
    cout<<"                            "" /     ```       \\"<<endl;
    cout<<"                            ""/                 \\"<<endl;
    cout<<"                   ""You find a flower in an empty hall."<<endl;
    cout<<"                 ""He tells you that it's kill or be killed."<<endl;
    cout<<"                          ""He then kills you."<<endl;
    cout<<"                            ""YOU ARE DEAD!"<<endl;
return 0;
}


}

if(number2 == 3)
{
    cout<<"              ""As you set into the hallway to the next room you here a click."<<endl;
    cout<<"          ""Without getting in your last thought you are bombarded with arrows."<<endl;
    cout<<"                                        ""YOU ARE DEAD!"<<endl;

    return 0;
}    if(number9 == 1)
    {
        cout<<"                      ""You look inside the hole with hope."<<endl;
        cout<<"                       ""You see the outside world."<<endl;
        cout<<"                        ""But you cannot reach it."<<endl;
        cout<<"               ""You decide to stay in this room with hopes that you may"<<endl;
        cout<<"                       ""oneday fit through the hole."<<endl;
        cout<<"                               ""YOU DIE HERE!"<<endl;

        return 0;
    }


    if(number2 == 1)
{
    cout <<"                       ""Two paths appear, what is that on the wall?"<<endl;
    cout <<"                       ""                \\             /          "<<endl;
    cout <<"                       ""                  -----------            "<<endl;
    cout <<"                       ""                  |   ___   |            "<<endl;
    cout <<"                       ""          ___     |  |   |  |           "<<endl;
    cout <<"                       ""         /   \\    |  |   |  |          "<<endl;
    cout <<"                       ""        |     |   |__|   |__|  ;        "<<endl;
    cout <<"                       ""        |     |  /           \\        "<<endl;
    cout <<"                       ""        |     | /             \\       "<<endl;
    cout <<"                       ""        |______/               \\       "<<endl;
    cout <<"                       ""        |                       \\      "<<endl;

    cout <<"                       ""1. Forward"<<endl;
    cout <<"                       ""2. Left"<<endl;
    cin >>number3;
    system("cls");

    if(number3 == 2)
    {
    cout <<"                                   "" Two paths at a dead end."<<endl;
    cout <<"                       ""                  ____________           "<<endl;
    cout <<"                       ""                  |          |           "<<endl;
    cout <<"                       ""          ___     |          |    ___    "<<endl;
    cout <<"                       ""         /   \\    |          |   /   \\  "<<endl;
    cout <<"                       ""        |     |   ___________   |     | "<<endl;
    cout <<"                       ""        |     |  /           \\  |     | "<<endl;
    cout <<"                       ""        |     | /             \\ |     | "<<endl;
    cout <<"                       ""        |     |/               \\|     | "<<endl;
    cout <<"                       ""        |                             | "<<endl;
    cout <<"                       ""1. Right"<<endl;
    cout <<"                       ""2. Left"<<endl;
    cin >> number14;
    system("cls");
    }
    if(number14 == 1)
    {
    cout<<"                     ""You have found your way out of the labyrinth."<<endl;
    cout<<"                       ""But wait, how did you even get here?"<<endl;
    cout<<"                     ""Maybe this is a labyrinth of your own mind?"<<endl;
    cout<<"                       ""Oh well, you're free now I guess."<<endl;
    cout<<"                            ""Please don't come back."<<endl;

    }
if(number14 == 2)
{
    cout<<"       ""You walk into the room, only to find what you can't describe with words."<<endl;
    cout<<"                                  ""And neither can I."<<endl;
    cout<<"                                     ""YOU ARE DEAD."<<endl;
    return 0;
}
    if(number3 == 1)
    {
    cout<<"                       ""You look at the door with DETERMINATION."<<endl;

    cout <<"                       ""         \\             /          "<<endl;
    cout <<"                       ""           -----------            "<<endl;
    cout <<"                       ""           |   ___   |            "<<endl;
    cout <<"                       ""           |  |   |  |        "<<endl;
    cout <<"                       ""           |  |   |  |        "<<endl;
    cout <<"                       ""           |__|   |__|         "<<endl;
    cout <<"                       ""          /           \\        "<<endl;
    cout <<"                       ""         /             \\       "<<endl;
    cout <<"                       ""        /               \\ "<<endl;
    cout <<"                       ""       /                 \\      "<<endl;


    cout <<"                       ""1. Forward"<<endl;
    cin>>number11;
    system("cls");
    }
    if(number11 == 1)
    {
        cout<<"                                  ""YOU ARE DEAD!"<<endl;
        cout<<"                             ""Damn son, stay determined."<<endl;

        return 0;
    }

}

    if(number1 == 3)
    {
    cout <<"                       ""There are two paths and a strange stain on the ground."<<endl;
    cout <<"                       ""                \\             /          "<<endl;
    cout <<"                       ""                  -----------            "<<endl;
    cout <<"                       ""                  |   ___   |            "<<endl;
    cout <<"                       ""          ___     |  |   |  |           "<<endl;
    cout <<"                       ""         /   \\    |  |   |  |          "<<endl;
    cout <<"                       ""        |     |   |__|   |__|           "<<endl;
    cout <<"                       ""        |     |  /           \\        "<<endl;
    cout <<"                       ""        |     | /   #         \\       "<<endl;
    cout <<"                       ""        |______/               \\       "<<endl;
    cout <<"                       ""        |                       \\      "<<endl;

    cout <<"                       ""1. Forward"<<endl;
    cout <<"                       ""2. Left"<<endl;
    cin >> number5;
    system("cls");
    }
    if(number5 == 2)
    {
    cout <<"                          "" Two doors will lead you on another path."<<endl;
    cout <<"                       ""                  ____________           "<<endl;
    cout <<"                       ""                  |          |           "<<endl;
    cout <<"                       ""          ___     |          |    ___    "<<endl;
    cout <<"                       ""         /   \\    |          |   /   \\  "<<endl;
    cout <<"                       ""        |     |   ___________   |     | "<<endl;
    cout <<"                       ""        |     |  /           \\  |     | "<<endl;
    cout <<"                       ""        |   : | /             \\ | :   | "<<endl;
    cout <<"                       ""        |     |/               \\|     | "<<endl;
    cout <<"                       ""        |                             | "<<endl;
    cout <<"                       ""1. Right"<<endl;
    cout <<"                       ""2. Left"<<endl;
    cin >> number12;
    system("cls");

    if(number12 == 1)
    {
    cout <<"                              ""There is only one way."<<endl;
    cout <<"                       ""         \\             /         "<<endl;
    cout <<"                       ""           -----------            "<<endl;
    cout <<"                       ""           |   ___   |            "<<endl;
    cout <<"                       ""           |  |   |  |            "<<endl;
    cout <<"                       ""           |  |   |  |            "<<endl;
    cout <<"                       ""           |__|   |__|            "<<endl;
    cout <<"                       ""          /           \\          "<<endl;
    cout <<"                       ""         /             \\         "<<endl;
    cout <<"                       ""        /               \\        "<<endl;
    cout <<"                       ""       /                 \\       "<<endl;
    cout <<"                       ""1. Forward"<<endl;
    cin>>number10;
    system("cls");
    }
    if(number10 == 1)
    {
    cout<<"                        ""It looks like the same hall but different."<<endl;
    cout <<"                       ""         \\             /         "<<endl;
    cout <<"                       ""           -----------            "<<endl;
    cout <<"                       ""           |   ___   |            "<<endl;
    cout <<"                       ""           |  |   |  |            "<<endl;
    cout <<"                       ""           |  |   |  |            "<<endl;
    cout <<"                       ""           |__|   |__|            "<<endl;
    cout <<"                       ""          /           \\          "<<endl;
    cout <<"                       ""         /             \\         "<<endl;
    cout <<"                       ""        /               \\        "<<endl;
    cout <<"                       ""       /                 \\       "<<endl;
    cout <<"                       ""1. Forward"<<endl;
    cin>>number100;
    system("cls");
    }

    if(number100 == 1)
    {
    cout <<"                        ""You feel a chill crawl down your back."<<endl;
    cout <<"                       ""         \\             /         "<<endl;
    cout <<"                       ""           -----------            "<<endl;
    cout <<"                       ""           |   ___   |            "<<endl;
    cout <<"                       ""           |  |   |  |            "<<endl;
    cout <<"                       ""           |  |   |  |            "<<endl;
    cout <<"                       ""           |__|   |__|            "<<endl;
    cout <<"                       ""          /           \\          "<<endl;
    cout <<"                       ""         /             \\         "<<endl;
    cout <<"                       ""        /               \\        "<<endl;
    cout <<"                       ""       /                 \\       "<<endl;
    cout <<"                       ""1. Forward"<<endl;
    cin>>number1000;
    system("cls");
    }

    if(number1000 == 1)
    {
    cout <<"                   ""You think you hear people so you want to keep going."<<endl;
    cout <<"                       ""         \\             /         "<<endl;
    cout <<"                       ""           -----------            "<<endl;
    cout <<"                       ""           |   ___   |            "<<endl;
    cout <<"                       ""           |  |   |  |            "<<endl;
    cout <<"                       ""           |  |   |  |            "<<endl;
    cout <<"                       ""           |__|   |__|            "<<endl;
    cout <<"                       ""          /           \\          "<<endl;
    cout <<"                       ""         /             \\         "<<endl;
    cout <<"                       ""        /               \\        "<<endl;
    cout <<"                       ""       /                 \\       "<<endl;
    cout <<"                       ""1. Forward"<<endl;
    cin>>number10000;
    system("cls");
    }
    if(number10000 == 1)
    {
    cout <<"                        ""You start to get sick of this place."<<endl;
    cout <<"                       ""         \\             /         "<<endl;
    cout <<"                       ""           -----------            "<<endl;
    cout <<"                       ""           |   ___   |            "<<endl;
    cout <<"                       ""           |  |   |  |            "<<endl;
    cout <<"                       ""           |  |   |  |            "<<endl;
    cout <<"                       ""           |__|   |__|            "<<endl;
    cout <<"                       ""          /           \\          "<<endl;
    cout <<"                       ""         /             \\         "<<endl;
    cout <<"                       ""        /               \\        "<<endl;
    cout <<"                       ""       /                 \\       "<<endl;
    cout <<"                       ""1. Forward"<<endl;
    cin>>number100000;
    system("cls");
    }
    if(number100000 == 1)
    {
        cout<<"                        ""You trip on what seams like nothing but get back up."<<endl;
        cout<<"                             ""You feel a little dizzy but you hear a voice."<<endl;
        cout<<"                                             ""FINISH THEM!"<<endl;
        cout<<"                                      ""Your head is chopped off."<<endl;
        cout<<"                                      ""So naturally, YOU ARE DEAD."<<endl;
        return 0;
    }

    if(number12 == 2)
    {
        cout<<"                              ""A math problem appears infront of you."<<endl;
        cout<<"                                   ""99 x 12 / 44 + 13 / 4 = ?"<<endl;
        cout<<"                ""1. 40"<<endl;
        cout<<"                ""2. 127"<<endl;
        cout<<"                ""3. 4"<<endl;
        cout<<"                ""4. Solve your own damn problem!"<<endl;
        cin>>number7;
        system("cls");
    }

if(number7 == 1)
{
    cout<<"               ""Dude you are on a computer how did you get that wrong?"<<endl;
    cout<<""                              "YOU ARE DEAD."<<endl;
    return 0;
}
if(number7 == 2)
{
    cout<<"                                    ""Really?"<<endl;
    cout<<"                                 ""YOU ARE DEAD."<<endl;
    return 0;
}
if(number7 == 3)
{
    cout<<"                         ""Correct, congrats you're a nerd."<<endl;
    cout<<"                                    ""YOU ARE DEAD."<<endl;
    return 0;
}
    if(number7 == 4)
    {
        cout<<"                             ""You rebel scum!"<<endl;
        cout<<"                              ""YOU ARE DEAD."<<endl;
        return 0;
    }

    }
    if( number5 == 1)
    {
    cout <<"                              ""There is only one way."<<endl;
    cout <<"                       ""         \\             /          "<<endl;
    cout <<"                       ""           -----------            "<<endl;
    cout <<"                       ""           |   ___   |            "<<endl;
    cout <<"                       ""           |  |   |  |        "<<endl;
    cout <<"                       ""           |  |   |  |        "<<endl;
    cout <<"                       ""           |__|   |__|         "<<endl;
    cout <<"                       ""          /           \\        "<<endl;
    cout <<"                       ""         /             \\       "<<endl;
    cout <<"                       ""        /               \\ "<<endl;
    cout <<"                       ""       /                 \\      "<<endl;

    cout <<"                       ""1. Forward"<<endl;
    cin>> number6;
    system("cls");
    }

    if(number6 == 1)
    {
        cout<<"                                  ""You find yourself at a wall."<<endl;
        cout<<"                    ""Two eyes appear on each corner of the wall infront of you."<<endl;
        cout<<"                          ""As you slowly back out you step...into a bear trap."<<endl;
        cout<<"                              ""You then bleed out, never to awake again."<<endl;
		cout<<"                                         ""YOU ARE DEAD!"<<endl;

        return 0;
    }





    if(number4 == 2)
    {
        cout<<"                                  ""You enter the room but it is empty."<<endl;
        cout<<"                                     ""But there are also no walls."<<endl;
        cout<<"                       ""Curious by this fact you sit down and think it over."<<endl;
        cout<<"                 ""After an hour or two you come to peace with this illogical concept."<<endl;
        cout<<"                       ""You awake in your classroom, to find that only you are there."<<endl;
        cout<<"                                     ""You have exited the labyrinth."<<endl;

        return 0;
    }


}
//this game is made by Cameron Drummond an aspiring programmer, this could'nt be done without my great teacher Mr. Hopper
