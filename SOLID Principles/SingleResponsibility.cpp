
//Wrong Implemetation


// #include <iostream>
// #include <fstream>
// using namespace std;

// class ReportManager {
// public:
//     void generateReport() {
//         cout << "Generating Financial Report..." << endl;
//     }

//     void saveToFile() {
//         ofstream file("report.txt");
//         if (file.is_open()) {
//             file << "Financial Report Data";
//             file.close();
//             cout << "Report saved to file." << endl;
//         }
//     }

//     void sendEmail() {
//         cout << "Sending report via email..." << endl;
//     }
// };

// int main() {
//     ReportManager report;
//     report.generateReport();
//     report.saveToFile();
//     report.sendEmail();
//     return 0;
// }



#include <iostream>
#include <fstream>
using namespace std;

class ReportGenerator {
public:
    void generateReport() {
        cout << "Generating Financial Report..." << endl;
    }
};

class ReportSaver {
public:
    void saveToFile() {
        ofstream file("report.txt");
        if (file.is_open()) {
            file << "Financial Report Data";
            file.close();
            cout << "Report saved to file." << endl;
        }
    }
};

class EmailSender {
public:
    void sendEmail() {
        cout << "Sending report via email..." << endl;
    }
};

int main() {
    ReportGenerator reportGen;
    reportGen.generateReport();

    ReportSaver reportSaver;
    reportSaver.saveToFile();

    EmailSender emailSender;
    emailSender.sendEmail();

    return 0;
}
