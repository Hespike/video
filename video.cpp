#include <iostream>
#include <cstring>

using namespace std;

void video(int ora, int perc, int render){
    int osszperc = 0;
    int ujora = 0;
    int ujperc = 0;
    osszperc = ora*60 + perc + render;
    if (osszperc >= 1440){
        osszperc = osszperc % 1440;
    }
    ujora = osszperc/60;
    ujperc = osszperc%60;


    cout << "Varhatoan kesz: ";
    ujora < 10 ? cout << 0 : cout << "";
    cout << ujora;
    cout << ":";
    ujperc < 10 ? cout << 0 : cout << "";
    cout << ujperc;
    }

    /*
#include <iostream>
#include <iomanip>

using namespace std;

void video(int ora, int perc, int render) {
    int szuksegesOra = render / 60;
    int szuksegesPerc = render % 60;

    ora += szuksegesOra;
    perc += szuksegesPerc;

    if (perc >= 60) {
        perc -= 60;
        ora++;
    }

    cout << "Varhatoan kesz: " << setfill('0') << setw(2) << (ora%24) << ":" << setw(2) << perc;
}
     */
