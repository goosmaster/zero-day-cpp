// #include <gtkmm.h>
#include <iostream>
#include <fstream>
#include <string>
#include <regex>

using namespace std;

int buildGui(const string& input)
{
  cout << "checking string: " << input << endl;

  // current suported html tags are <p> and <button>
  regex rgx("(<.?p>)|(<.?button>)", std::regex_constants::icase);
  smatch match;

  while(regex_search(input, match, rgx))
  {
        // for (auto m : match)
        // {
        //   cout << "match: " << m << '\n';
        // }

        // std::cout << "match[0] = " << match[0] << '\n';
        // std::cout << "match[1] = " << match[1] << '\n';
        // std::cout << "match[2] = " << match[2] << '\n';
        // std::cout << "match[3] = " << match[3] << '\n';
        // std::cout << "match[4] = " << match[4] << '\n';
        // std::cout << "match[5] = " << match[5] << '\n';

        for (auto x:match) std::cout << x << " ";
        std::cout << std::endl;
        input = match.suffix().str();
  }
}

int main(int argc, char* argv[])
{
  ifstream ifs("gui.html");
  string output((istreambuf_iterator<char>(ifs)),(istreambuf_iterator<char>()));

  const regex rgx("<html>");
  smatch match;

  if (regex_search(output, match, rgx))
  {
    // html opening tag was found, let's start building the gui
    cout << "building gui with: " << output << endl;
    buildGui(output);
  }


  // Gtk::Main kit(argc, argv);
  //
  // Gtk::Window window;
  //
  // Gtk::Main::run(window);

  return 0;
}
