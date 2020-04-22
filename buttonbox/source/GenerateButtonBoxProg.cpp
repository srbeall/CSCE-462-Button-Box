#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdexcept>
#include <algorithm>

using namespace std;

int main() {
    ofstream outFile;
    int numOfPresets = 5;
    string garbageCollection;
    
    outFile.open("buttonbox.ino");
    outFile <<
        "#include <Bounce.h>\n"
        "Bounce b0 = Bounce(0, 10);\n"
        "Bounce b1 = Bounce(1, 10);\n"
        "Bounce b2 = Bounce(2, 10);\n"
        "Bounce b3 = Bounce(3, 10);\n"
        "Bounce b4 = Bounce(4, 10);\n"
        "Bounce b5 = Bounce(5, 10);\n"
        "Bounce b6 = Bounce(6, 10);\n"
        "Bounce b7 = Bounce(7, 10);\n"
        "Bounce b8 = Bounce(8, 10);\n"
        "Bounce b9 = Bounce(9, 10);\n"
        "Bounce b16 = Bounce(16, 10);\n"
        "Bounce b17 = Bounce(17, 10);\n"
        "Bounce b18 = Bounce(18, 10);\n"
        "Bounce b19 = Bounce(19, 10);\n"
        "Bounce b20 = Bounce(20, 10);\n"
        "Bounce b21 = Bounce(21, 10);\n"
        "Bounce b22 = Bounce(22, 10);\n"
        "Bounce b23 = Bounce(23, 10);\n"
        "int led = 13;\n"
        "int numpresets = " << numOfPresets << ";\n"
        "int curpreset = 0;\n"
        "int presetchanged = 0;\n"
        "void setup() {\n"
        "\tpinMode(0, INPUT_PULLUP);\n"
        "\tpinMode(1, INPUT_PULLUP);\n"
        "\tpinMode(2, INPUT_PULLUP);\n"
        "\tpinMode(3, INPUT_PULLUP);\n"
        "\tpinMode(4, INPUT_PULLUP);\n"
        "\tpinMode(5, INPUT_PULLUP);\n"
        "\tpinMode(6, INPUT_PULLUP);\n"
        "\tpinMode(7, INPUT_PULLUP);\n"
        "\tpinMode(8, INPUT_PULLUP);\n"
        "\tpinMode(9, INPUT_PULLUP);\n"
        "\tpinMode(16, INPUT_PULLUP);\n"
        "\tpinMode(17, INPUT_PULLUP);\n"
        "\tpinMode(18, INPUT_PULLUP);\n"
        "\tpinMode(19, INPUT_PULLUP);\n"
        "\tpinMode(20, INPUT_PULLUP);\n"
        "\tpinMode(21, INPUT_PULLUP);\n"
        "\tpinMode(22, INPUT_PULLUP);\n"
        "\tpinMode(23, INPUT_PULLUP);\n"
        "\tpinMode(13, OUTPUT);\n"
        "}\n"
        "void loop() {\n"
        "\tb0.update();\n"
        "\tb1.update();\n"
        "\tb2.update();\n"
        "\tb3.update();\n"
        "\tb4.update();\n"
        "\tb5.update();\n"
        "\tb6.update();\n"
        "\tb7.update();\n"
        "\tb8.update();\n"
        "\tb9.update();\n"
        "\tb16.update();\n"
        "\tb17.update();\n"
        "\tb18.update();\n"
        "\tb19.update();\n"
        "\tb20.update();\n"
        "\tb21.update();\n"
        "\tb22.update();\n"
        "\tb23.update();\n"
        "\tif (presetchanged == 1) {\n"
        "\t\tpresetchanged = 0;\n"
        "\t\tfor (int iter = 0; iter < curpreset; iter++) {\n"
        "\t\t\tdigitalWrite(led, HIGH);\n"
        "\t\t\tdelay(100);\n"
        "\t\t\tdigitalWrite(led, LOW);\n"
        "\t\t\tdelay(150);\n"
        "\t\t}\n"
        "\t}\n";

    ifstream preset1File;
    ifstream preset2File;
    ifstream preset3File;
    ifstream preset4File;
    ifstream preset5File;
    string key1;
    string key2;
    string key3;
    string key4;
    string key5;
    string key6;
    string modifier;
    string preset1FileName = "presets\\preset1.txt";
    string preset2FileName = "presets\\preset2.txt";
    string preset3FileName = "presets\\preset3.txt";
    string preset4FileName = "presets\\preset4.txt";
    string preset5FileName = "presets\\preset5.txt";

    if (numOfPresets > 0) { preset1File.open(preset1FileName); }
    if (numOfPresets > 1) { preset2File.open(preset2FileName); }
    if (numOfPresets > 2) { preset3File.open(preset3FileName); }
    if (numOfPresets > 3) { preset4File.open(preset4FileName); }
    if (numOfPresets > 4) { preset5File.open(preset5FileName); }

    outFile <<
        "\tif (b0.fallingEdge()) {}\n";

    for (int i = 1; i < 10; i++) {
        outFile <<
            "\tif (b" << i << ".fallingEdge()) {\n";
        for (int j = 0; j < numOfPresets; ++j) {
            switch (j) {
                case 0:
                    getline(preset1File, garbageCollection);
                    getline(preset1File, modifier);
                    modifier = modifier.substr(modifier.find_first_of(" \t") + 1);
                    modifier.erase(remove(modifier.begin(), modifier.end(), '\n'), modifier.end());
                    modifier.erase(remove(modifier.begin(), modifier.end(), '\r'), modifier.end());
                    preset1File >> garbageCollection;
                    preset1File >> key1;
                    preset1File >> garbageCollection;
                    preset1File >> key2;
                    preset1File >> garbageCollection;
                    preset1File >> key3;
                    preset1File >> garbageCollection;
                    preset1File >> key4;
                    preset1File >> garbageCollection;
                    preset1File >> key5;
                    preset1File >> garbageCollection;
                    preset1File >> key6;
                    getline(preset1File, garbageCollection);
                    getline(preset1File, garbageCollection);
                    break;
                case 1:
                    getline(preset2File, garbageCollection);
                    getline(preset2File, modifier);
                    modifier = modifier.substr(modifier.find_first_of(" \t") + 1);
                    modifier.erase(remove(modifier.begin(), modifier.end(), '\n'), modifier.end());
                    modifier.erase(remove(modifier.begin(), modifier.end(), '\r'), modifier.end());
                    preset2File >> garbageCollection;
                    preset2File >> key1;
                    preset2File >> garbageCollection;
                    preset2File >> key2;
                    preset2File >> garbageCollection;
                    preset2File >> key3;
                    preset2File >> garbageCollection;
                    preset2File >> key4;
                    preset2File >> garbageCollection;
                    preset2File >> key5;
                    preset2File >> garbageCollection;
                    preset2File >> key6;
                    getline(preset2File, garbageCollection);
                    getline(preset2File, garbageCollection);
                    break;
                case 2:
                    getline(preset3File, garbageCollection);
                    getline(preset3File, modifier);
                    modifier = modifier.substr(modifier.find_first_of(" \t") + 1);
                    modifier.erase(remove(modifier.begin(), modifier.end(), '\n'), modifier.end());
                    modifier.erase(remove(modifier.begin(), modifier.end(), '\r'), modifier.end());
                    preset3File >> garbageCollection;
                    preset3File >> key1;
                    preset3File >> garbageCollection;
                    preset3File >> key2;
                    preset3File >> garbageCollection;
                    preset3File >> key3;
                    preset3File >> garbageCollection;
                    preset3File >> key4;
                    preset3File >> garbageCollection;
                    preset3File >> key5;
                    preset3File >> garbageCollection;
                    preset3File >> key6;
                    getline(preset3File, garbageCollection);
                    getline(preset3File, garbageCollection);
                    break;
                case 3:
                    getline(preset4File, garbageCollection);
                    getline(preset4File, modifier);
                    modifier = modifier.substr(modifier.find_first_of(" \t") + 1);
                    modifier.erase(remove(modifier.begin(), modifier.end(), '\n'), modifier.end());
                    modifier.erase(remove(modifier.begin(), modifier.end(), '\r'), modifier.end());
                    preset4File >> garbageCollection;
                    preset4File >> key1;
                    preset4File >> garbageCollection;
                    preset4File >> key2;
                    preset4File >> garbageCollection;
                    preset4File >> key3;
                    preset4File >> garbageCollection;
                    preset4File >> key4;
                    preset4File >> garbageCollection;
                    preset4File >> key5;
                    preset4File >> garbageCollection;
                    preset4File >> key6;
                    getline(preset4File, garbageCollection);
                    getline(preset4File, garbageCollection);
                    break;
                case 4:
                    getline(preset5File, garbageCollection);
                    getline(preset5File, modifier);
                    modifier = modifier.substr(modifier.find_first_of(" \t") + 1);
                    modifier.erase(remove(modifier.begin(), modifier.end(), '\n'), modifier.end());
                    modifier.erase(remove(modifier.begin(), modifier.end(), '\r'), modifier.end());
                    preset5File >> garbageCollection;
                    preset5File >> key1;
                    preset5File >> garbageCollection;
                    preset5File >> key2;
                    preset5File >> garbageCollection;
                    preset5File >> key3;
                    preset5File >> garbageCollection;
                    preset5File >> key4;
                    preset5File >> garbageCollection;
                    preset5File >> key5;
                    preset5File >> garbageCollection;
                    preset5File >> key6;
                    getline(preset5File, garbageCollection);
                    getline(preset5File, garbageCollection);
                    break;
                default:
                    break;
            }
            outFile <<
                "\t\tif (curpreset == " << (j+1) << ") {\n"
                "\t\t\tKeyboard.set_modifier("<< modifier <<");\n"
                "\t\t\tKeyboard.set_key1(" << key1 << ");\n"
                "\t\t\tKeyboard.set_key2(" << key2 << ");\n"
                "\t\t\tKeyboard.set_key3(" << key3 << ");\n"
                "\t\t\tKeyboard.set_key4(" << key4 << ");\n"
                "\t\t\tKeyboard.set_key5(" << key5 << ");\n"
                "\t\t\tKeyboard.set_key6(" << key6 << ");\n"
                "\t\t\tKeyboard.send_now();\n"
                "\t\t}\n";
            modifier.clear();
            key1.clear();
            key2.clear();
            key3.clear();
            key4.clear();
            key5.clear();
            key6.clear();
        }
        outFile <<
            "\t}\n";
    }
    for (int i = 16; i < 24; i++) {
        outFile <<
            "\tif (b" << i << ".fallingEdge()) {\n";
        for (int j = 0; j < numOfPresets; ++j) {
            switch (j) {
            case 0:
                getline(preset1File, garbageCollection);
                getline(preset1File, modifier);
                modifier = modifier.substr(modifier.find_first_of(" \t") + 1);
                modifier.erase(remove(modifier.begin(), modifier.end(), '\n'), modifier.end());
                modifier.erase(remove(modifier.begin(), modifier.end(), '\r'), modifier.end());
                preset1File >> garbageCollection;
                preset1File >> key1;
                preset1File >> garbageCollection;
                preset1File >> key2;
                preset1File >> garbageCollection;
                preset1File >> key3;
                preset1File >> garbageCollection;
                preset1File >> key4;
                preset1File >> garbageCollection;
                preset1File >> key5;
                preset1File >> garbageCollection;
                preset1File >> key6;
                getline(preset1File, garbageCollection);
                getline(preset1File, garbageCollection);
                break;
            case 1:
                getline(preset2File, garbageCollection);
                getline(preset2File, modifier);
                modifier = modifier.substr(modifier.find_first_of(" \t") + 1);
                modifier.erase(remove(modifier.begin(), modifier.end(), '\n'), modifier.end());
                modifier.erase(remove(modifier.begin(), modifier.end(), '\r'), modifier.end());
                preset2File >> garbageCollection;
                preset2File >> key1;
                preset2File >> garbageCollection;
                preset2File >> key2;
                preset2File >> garbageCollection;
                preset2File >> key3;
                preset2File >> garbageCollection;
                preset2File >> key4;
                preset2File >> garbageCollection;
                preset2File >> key5;
                preset2File >> garbageCollection;
                preset2File >> key6;
                getline(preset2File, garbageCollection);
                getline(preset2File, garbageCollection);
                break;
            case 2:
                getline(preset3File, garbageCollection);
                getline(preset3File, modifier);
                modifier = modifier.substr(modifier.find_first_of(" \t") + 1);
                modifier.erase(remove(modifier.begin(), modifier.end(), '\n'), modifier.end());
                modifier.erase(remove(modifier.begin(), modifier.end(), '\r'), modifier.end());
                preset3File >> garbageCollection;
                preset3File >> key1;
                preset3File >> garbageCollection;
                preset3File >> key2;
                preset3File >> garbageCollection;
                preset3File >> key3;
                preset3File >> garbageCollection;
                preset3File >> key4;
                preset3File >> garbageCollection;
                preset3File >> key5;
                preset3File >> garbageCollection;
                preset3File >> key6;
                getline(preset3File, garbageCollection);
                getline(preset3File, garbageCollection);
                break;
            case 3:
                getline(preset4File, garbageCollection);
                getline(preset4File, modifier);
                modifier = modifier.substr(modifier.find_first_of(" \t") + 1);
                modifier.erase(remove(modifier.begin(), modifier.end(), '\n'), modifier.end());
                modifier.erase(remove(modifier.begin(), modifier.end(), '\r'), modifier.end());
                preset4File >> garbageCollection;
                preset4File >> key1;
                preset4File >> garbageCollection;
                preset4File >> key2;
                preset4File >> garbageCollection;
                preset4File >> key3;
                preset4File >> garbageCollection;
                preset4File >> key4;
                preset4File >> garbageCollection;
                preset4File >> key5;
                preset4File >> garbageCollection;
                preset4File >> key6;
                getline(preset4File, garbageCollection);
                getline(preset4File, garbageCollection);
                break;
            case 4:
                getline(preset5File, garbageCollection);
                getline(preset5File, modifier);
                modifier = modifier.substr(modifier.find_first_of(" \t") + 1);
                modifier.erase(remove(modifier.begin(), modifier.end(), '\n'), modifier.end());
                modifier.erase(remove(modifier.begin(), modifier.end(), '\r'), modifier.end());
                preset5File >> garbageCollection;
                preset5File >> key1;
                preset5File >> garbageCollection;
                preset5File >> key2;
                preset5File >> garbageCollection;
                preset5File >> key3;
                preset5File >> garbageCollection;
                preset5File >> key4;
                preset5File >> garbageCollection;
                preset5File >> key5;
                preset5File >> garbageCollection;
                preset5File >> key6;
                getline(preset5File, garbageCollection);
                getline(preset5File, garbageCollection);
                break;
            default:
                break;
            }
            outFile <<
                "\t\tif (curpreset == " << (j + 1) << ") {\n"
                "\t\t\tKeyboard.set_modifier(" << modifier << ");\n"
                "\t\t\tKeyboard.set_key1(" << key1 << ");\n"
                "\t\t\tKeyboard.set_key2(" << key2 << ");\n"
                "\t\t\tKeyboard.set_key3(" << key3 << ");\n"
                "\t\t\tKeyboard.set_key4(" << key4 << ");\n"
                "\t\t\tKeyboard.set_key5(" << key5 << ");\n"
                "\t\t\tKeyboard.set_key6(" << key6 << ");\n"
                "\t\t\tKeyboard.send_now();\n"
                "\t\t}\n";
            modifier.clear();
            key1.clear();
            key2.clear();
            key3.clear();
            key4.clear();
            key5.clear();
            key6.clear();
        }
        outFile <<
            "\t}\n";
    }

    outFile <<
        "\tif (b0.risingEdge()) {\n"
        "\t\tcurpreset = curpreset + 1;\n"
        "\t\tif (curpreset > numpresets) { curpreset = 1; }\n"
        "\t\tpresetchanged = 1;\n"
        "\t}\n";
    for (int i = 1; i < 10; i++) {
        outFile <<
            "\tif (b" << i << ".risingEdge()) {\n"
            "\t\tKeyboard.set_modifier(0);\n"
            "\t\tKeyboard.set_key1(0);\n"
            "\t\tKeyboard.set_key2(0);\n"
            "\t\tKeyboard.set_key3(0);\n"
            "\t\tKeyboard.set_key4(0);\n"
            "\t\tKeyboard.set_key5(0);\n"
            "\t\tKeyboard.set_key6(0);\n"
            "\t\tKeyboard.send_now();\n"
            "\t}\n";
    }
    for (int i = 16; i < 24; i++) {
        outFile <<
            "\tif (b" << i << ".risingEdge()) {\n"
            "\t\tKeyboard.set_modifier(0);\n"
            "\t\tKeyboard.set_key1(0);\n"
            "\t\tKeyboard.set_key2(0);\n"
            "\t\tKeyboard.set_key3(0);\n"
            "\t\tKeyboard.set_key4(0);\n"
            "\t\tKeyboard.set_key5(0);\n"
            "\t\tKeyboard.set_key6(0);\n"
            "\t\tKeyboard.send_now();\n"
            "\t}\n";
    }
    outFile <<
        "}";
    outFile.close();
}