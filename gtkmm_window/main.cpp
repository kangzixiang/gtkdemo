#include <gtkmm.h>
#include <gtkmm/application.h>

class MyWindow : public Gtk::Window {
public:
	MyWindow() {
		set_title("Hello world window");
		set_default_size (400, 300);
		set_resizable(false);
	}
};

int main (int argc, char **argv)
{
	auto app = Gtk::Application::create("com.hello");
	MyWindow window;
    return app->run(window);
}