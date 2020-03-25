#include <iostream>

using namespace std;

int main()
{
    enum Gender {Male, Female, Do_not_want_to_disclose};
    enum Status {citizen, permanent_resident, international, no_status};
    //enum class Color {red, green, blue, pink, orange, black};

    Gender gender1 = Male;
    Gender gender2 = Male;
    Gender gender3 = Female;
    Gender gender4 = Do_not_want_to_disclose;
    //Gender g5 = do_not_know; this is an error
    Status stat1 = citizen;
    //Color color1 = Color::red;

    cout << stat1 <<endl;
    cout << gender2 << endl;
    cout << "------------" << endl;
    if(stat1 == gender2){
        cout << "They are the same" << endl;
    }else{
        cout << "They are different" << endl;
    }

    cout << gender4 << endl;
    cout << gender3 << endl;

    return 0;
}
