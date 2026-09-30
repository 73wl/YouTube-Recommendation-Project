#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {
    char continueSearch = 'y';

    while (continueSearch == 'y' || continueSearch == 'Y') {
        cout << "========================================================\n";
        cout << "       YOUTUBE INTERACTIVE RECOMMENDATION SYSTEM        \n";
        cout << "  (Inspired by Brian Winston's Diffusion & Spin-Offs)  \n";
        cout << "========================================================\n\n";

        cout << "Select a Content Category:\n";
        cout << " 1. Computer Science & Programming\n";
        cout << " 2. Tech Reviews & Innovation\n";
        cout << " 3. Gaming & Esports\n";
        cout << " 4. Science & Documentary\n";
        cout << "Enter choice (1-4): ";
        
        int categoryChoice;
        while (!(cin >> categoryChoice) || categoryChoice < 1 || categoryChoice > 4) {
            cout << "[Invalid Input] Please enter a number from 1 to 4: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cout << "\nSelect Video Format / Duration:\n";
        cout << " 1. YouTube Short (< 60 seconds)\n";
        cout << " 2. Standard Video (5 - 15 minutes)\n";
        cout << " 3. Deep Dive / Long-form (> 30 minutes)\n";
        cout << "Enter choice (1-3): ";

        int formatChoice;
        while (!(cin >> formatChoice) || formatChoice < 1 || formatChoice > 3) {
            cout << "[Invalid Input] Please enter a number from 1 to 3: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cout << "\n------------------- RECOMMENDED FOR YOU -------------------\n";

        switch (categoryChoice) {
            case 1:
                if (formatChoice == 1) {
                    cout << "Title   : C++ Pointers in 60 Seconds\n";
                    cout << "Creator : CodeFast Shorts\n";
                    cout << "Format  : YouTube Short (45s)\n";
                    cout << "Summary : A rapid visual breakdown of memory addresses and pointers.\n";
                } else if (formatChoice == 2) {
                    cout << "Title   : How YouTube Transcodes Millions of Videos\n";
                    cout << "Creator : ByteByteGo\n";
                    cout << "Format  : Standard Video (11 mins)\n";
                    cout << "Summary : Technical look at cloud encoding, codecs, and CDN delivery.\n";
                } else {
                    cout << "Title   : C++ Full Course for Beginners\n";
                    cout << "Creator : freeCodeCamp\n";
                    cout << "Format  : Deep Dive (4 hours)\n";
                    cout << "Summary : Complete foundational concepts from syntax to OOP.\n";
                }
                break;

            case 2:
                if (formatChoice == 1) {
                    cout << "Title   : The New iPhone Camera Button in Action\n";
                    cout << "Creator : MKBHD Shorts\n";
                    cout << "Format  : YouTube Short (50s)\n";
                    cout << "Summary : Quick hands-on impression of the new camera shutter.\n";
                } else if (formatChoice == 2) {
                    cout << "Title   : The Rise and Evolution of Streaming Media\n";
                    cout << "Creator : ColdFusion\n";
                    cout << "Format  : Standard Video (15 mins)\n";
                    cout << "Summary : Traces how broadband and compression created YouTube.\n";
                } else {
                    cout << "Title   : Complete History of Modern Computing\n";
                    cout << "Creator : Computer History Museum\n";
                    cout << "Format  : Long-form Documentary (1 hr 20m)\n";
                    cout << "Summary : Exploration of semiconductors, microprocessors, and the web.\n";
                }
                break;

            case 3:
                if (formatChoice == 1) {
                    cout << "Title   : Unreal Engine 5 Physics Trick\n";
                    cout << "Creator : GameDevDaily\n";
                    cout << "Format  : YouTube Short (30s)\n";
                    cout << "Summary : Quick tip on simulating realistic character ragdolls.\n";
                } else if (formatChoice == 2) {
                    cout << "Title   : FC Mobile Best Skill Points Setup\n";
                    cout << "Creator : MobileGamer Pro\n";
                    cout << "Format  : Standard Video (10 mins)\n";
                    cout << "Summary : Roster optimization and attribute card comparisons.\n";
                } else {
                    cout << "Title   : The 10-Year Evolution of Video Game Graphics\n";
                    cout << "Creator : Digital Foundry\n";
                    cout << "Format  : In-depth Technical Analysis (42 mins)\n";
                    cout << "Summary : In-depth look at shader architecture and ray tracing.\n";
                }
                break;

            case 4:
                if (formatChoice == 1) {
                    cout << "Title   : How Solar Sails Work in Space\n";
                    cout << "Creator : Veritasium Shorts\n";
                    cout << "Format  : YouTube Short (55s)\n";
                    cout << "Summary : Demonstrating photon momentum in a vacuum tube.\n";
                } else if (formatChoice == 2) {
                    cout << "Title   : The Mathematical Secret of Video Compression\n";
                    cout << "Creator : 3Blue1Brown\n";
                    cout << "Format  : Standard Video (14 mins)\n";
                    cout << "Summary : Explaining Discrete Cosine Transform (DCT) visually.\n";
                } else {
                    cout << "Title   : The Story of the Internet: From ARPANET to Web3\n";
                    cout << "Creator : BBC Science\n";
                    cout << "Format  : Documentary (58 mins)\n";
                    cout << "Summary : Full retrospective on packet switching and global networks.\n";
                }
                break;
        }

        cout << "-----------------------------------------------------------\n\n";

        cout << "Would you like another recommendation? (y/n): ";
        cin >> continueSearch;
        cout << "\n";
    }

    cout << "Thank you for using the YouTube Recommendation Assistant!\n";
    return 0;
}