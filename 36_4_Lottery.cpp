# include <Siv3D.hpp>

void Main()
{
    Scene::SetBackground(Palette::Mediumseagreen);

    String destination = U"Paris";
    Array<String> buttonStatuses = {U"Stop", U"Start"};
    int buttonStatus = 0;

	bool isDestinationDetermined = false;
    const Array<String> destinations = 
    {
        U"Paris", U"New York", U"Tokyo", U"London", U"Sydney", U"Rome", U"Seoul", U"Beijing", U"Moscow", U"Cairo"
    };

    while(System::Update())
    {
		if (!isDestinationDetermined) {
			destination = destinations.choice();
		}

        SimpleGUI::Button(destination, Vec2{300,200}, 200);

        if (SimpleGUI::Button(buttonStatuses[buttonStatus%2], Vec2{350,400},100)) {
			isDestinationDetermined = !isDestinationDetermined;
            buttonStatus += 1;
		}
    }
}