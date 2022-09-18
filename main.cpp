
#include"include/funjs.h"
using namespace ultralight;
#define WINDOW_WIDTH    900
#define WINDOW_HEIGHT   600
int main() {
    std::cout << "STARt NICE \n";
    auto app = App::Create();


    auto window = Window::Create(app->main_monitor(), WINDOW_WIDTH, WINDOW_HEIGHT, false,
        kWindowFlags_Titled | kWindowFlags_Resizable);
    app->set_window(window);
    VServClient vs;
    vs.SetWin(window);
    funjs::RegistrFunVServClient(&vs);
    vs.SetTitle("Program Manager\n");
    app->Run();

	return 0;
}